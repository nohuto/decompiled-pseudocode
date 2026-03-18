/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C0094048
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C0090D00 (DxgkCreateContextVirtual.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B3724 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     DxgkCreateContext @ 0x1C01886A0 (DxgkCreateContext.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C001D56C (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0544 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00C08F4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00C14B8 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        void *Src,
        unsigned int Size,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  DXGCONTEXT *PoolWithQuotaTag; // rax
  __int64 v17; // rcx
  unsigned int v18; // r9d
  DXGCONTEXT *v19; // rbx
  __int64 v20; // rcx
  int v21; // esi
  DXGCONTEXT **v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[8]; // [rsp+40h] [rbp-28h] BYREF
  char *v32; // [rsp+48h] [rbp-20h]
  int v33; // [rsp+50h] [rbp-18h]

  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v25 + 24) = 1655LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v26 + 24) = 1656LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v27 + 24) = 1657LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v28 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v28 + 24) = 1663LL;
    WdLogEvent5_WdAssertion(v28);
  }
  *a2 = 0LL;
  PoolWithQuotaTag = (DXGCONTEXT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x1B0uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v18 = 1;
    if ( a4 )
      v18 = a4;
    v19 = DXGCONTEXT::DXGCONTEXT(PoolWithQuotaTag, this, a3, v18, a5, a8, a9);
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    v21 = DXGCONTEXT::Initialize(v19, Src, Size);
    if ( v21 < 0 )
    {
      DXGCONTEXT::DestroyContext(v19, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v19);
    }
    else
    {
      v32 = (char *)this + 304;
      if ( this != (DXGDEVICE *)-304LL && *((struct _KTHREAD **)this + 39) == KeGetCurrentThread() )
      {
        v30 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v30 + 24) = 1214LL;
        WdLogEvent5_WdAssertion(v30);
      }
      DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 304));
      v22 = (DXGCONTEXT **)((char *)this + 344);
      v33 = 2;
      v23 = *((_QWORD *)this + 43);
      if ( *(DXGDEVICE **)(v23 + 8) != (DXGDEVICE *)((char *)this + 344) )
        __fastfail(3u);
      *(_QWORD *)v19 = v23;
      *((_QWORD *)v19 + 1) = v22;
      *(_QWORD *)(v23 + 8) = v19;
      *v22 = v19;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
      *a2 = v19;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdLowResource(v17);
    v21 = -1073741801;
    *(_QWORD *)(v29 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v29);
  }
  return (unsigned int)v21;
}
