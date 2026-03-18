/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00C116C
 * Callers:
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00FB684 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C00FC280 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContext @ 0x1C01845C0 (DxgkCreateContext.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C0020380 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BB470 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00BB7D4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00BC358 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        __int64 a3,
        __int64 a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        _QWORD *Src,
        unsigned int Size,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  unsigned int v9; // ebx
  int v10; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGCONTEXT *PoolWithQuotaTag; // rax
  __int64 v26; // rcx
  unsigned int v27; // r9d
  DXGCONTEXT *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // esi
  __int64 v32; // r8
  __int64 v33; // r9
  DXGCONTEXT **v34; // rax
  __int64 v35; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _BYTE v43[8]; // [rsp+40h] [rbp-28h] BYREF
  char *v44; // [rsp+48h] [rbp-20h]
  int v45; // [rsp+50h] [rbp-18h]

  v9 = a4;
  v10 = a3;
  if ( !a2 )
  {
    v37 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v37 + 24) = 1653LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v38 + 24) = 1654LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v39 + 24) = 1655LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !DXGPROCESS::GetCurrent(v18) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
    *(_QWORD *)(v40 + 24) = 1661LL;
    WdLogEvent5_WdAssertion(v40);
  }
  *a2 = 0LL;
  PoolWithQuotaTag = (DXGCONTEXT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x190uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v27 = 1;
    if ( v9 )
      v27 = v9;
    v28 = DXGCONTEXT::DXGCONTEXT(PoolWithQuotaTag, this, v10, v27, a5, a8, a9);
  }
  else
  {
    v28 = 0LL;
  }
  if ( v28 )
  {
    v31 = DXGCONTEXT::Initialize(v28, Src, Size);
    if ( v31 < 0 )
    {
      DXGCONTEXT::DestroyContext(v28, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v28);
    }
    else
    {
      v44 = (char *)this + 304;
      if ( this != (DXGDEVICE *)-304LL && *((struct _KTHREAD **)this + 39) == KeGetCurrentThread() )
      {
        v42 = WdLogNewEntry5_WdAssertion(v30, v29, v32, v33);
        *(_QWORD *)(v42 + 24) = 1167LL;
        WdLogEvent5_WdAssertion(v42);
      }
      DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 304));
      v34 = (DXGCONTEXT **)((char *)this + 344);
      v45 = 2;
      v35 = *((_QWORD *)this + 43);
      if ( *(DXGDEVICE **)(v35 + 8) != (DXGDEVICE *)((char *)this + 344) )
        __fastfail(3u);
      *(_QWORD *)v28 = v35;
      *((_QWORD *)v28 + 1) = v34;
      *(_QWORD *)(v35 + 8) = v28;
      *v34 = v28;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      *a2 = v28;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
  }
  else
  {
    v41 = WdLogNewEntry5_WdLowResource(v26);
    v31 = -1073741801;
    *(_QWORD *)(v41 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v41);
  }
  return (unsigned int)v31;
}
