/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E84EC
 * Callers:
 *     DxgkCreateContext @ 0x1C009C470 (DxgkCreateContext.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00A12D8 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01CE7F0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C0023CB4 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FD9FC (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00FDD94 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00FE94C (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        void *Src,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  DXGCONTEXT *PoolWithQuotaTag; // rax
  __int64 v18; // rcx
  unsigned int v19; // r9d
  DXGCONTEXT *v20; // rbx
  __int64 v21; // rcx
  int v22; // esi
  DXGCONTEXT **v23; // rax
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[8]; // [rsp+40h] [rbp-28h] BYREF
  char *v33; // [rsp+48h] [rbp-20h]
  int v34; // [rsp+50h] [rbp-18h]

  if ( !a2 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v26 + 24) = 1716LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v27 + 24) = 1717LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v28 + 24) = 1718LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !DXGPROCESS::GetCurrent(v15, v14) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v29 + 24) = 1724LL;
    WdLogEvent5_WdAssertion(v29);
  }
  *a2 = 0LL;
  PoolWithQuotaTag = (DXGCONTEXT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x1B0uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v19 = 1;
    if ( a4 )
      v19 = a4;
    v20 = DXGCONTEXT::DXGCONTEXT(PoolWithQuotaTag, this, a3, v19, a5, a8, a9);
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
  {
    v22 = DXGCONTEXT::Initialize(v20, Src, a7);
    if ( v22 < 0 )
    {
      DXGCONTEXT::DestroyContext(v20, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v20);
    }
    else
    {
      v33 = (char *)this + 304;
      if ( this != (DXGDEVICE *)-304LL && *((struct _KTHREAD **)this + 39) == KeGetCurrentThread() )
      {
        v31 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v31 + 24) = 1306LL;
        WdLogEvent5_WdAssertion(v31);
      }
      DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 304));
      v23 = (DXGCONTEXT **)((char *)this + 360);
      v34 = 2;
      v24 = *((_QWORD *)this + 45);
      if ( *(DXGDEVICE **)(v24 + 8) != (DXGDEVICE *)((char *)this + 360) )
        __fastfail(3u);
      *(_QWORD *)v20 = v24;
      *((_QWORD *)v20 + 1) = v23;
      *(_QWORD *)(v24 + 8) = v20;
      *v23 = v20;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      *a2 = v20;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdLowResource(v18);
    v22 = -1073741801;
    *(_QWORD *)(v30 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v30);
  }
  return (unsigned int)v22;
}
