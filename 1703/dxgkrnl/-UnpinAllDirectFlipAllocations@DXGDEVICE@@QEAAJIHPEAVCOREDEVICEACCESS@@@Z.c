/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00CA5B4
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E763C (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01016C0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104BA4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C017ED98 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000DD94 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C00BFC10 (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6770 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        PERESOURCE **this,
        __int64 a2,
        __int64 a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGALLOCATION *v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rsi
  PERESOURCE *v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+40h] [rbp+18h] BYREF
  struct COREDEVICEACCESS *v25; // [rsp+48h] [rbp+20h] BYREF

  v25 = a4;
  v24 = a3;
  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 452) )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 6342LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2][2]) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v19 + 24) = 6343LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[225]) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v20 + 24) = 6344LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v21 + 24) = 6345LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( (*((_DWORD *)this + v5 + 258) & 0x100) != 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v22 + 24) = 6346LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (*((_DWORD *)this + v5 + 258) & 0x200) != 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v23 + 24) = 6347LL;
    WdLogEvent5_WdAssertion(v23);
  }
  LODWORD(v25) = 0;
  LOBYTE(v24) = 0;
  do
  {
    v14 = DXGDEVICE::PopDirectFlipAllocationFromList(
            (struct _KTHREAD **)this,
            v5,
            (unsigned int *)&v25,
            (unsigned __int8 *)&v24);
    v15 = (struct _EX_RUNDOWN_REF *)v14;
    if ( v14 )
    {
      VIDMM_EXPORT::VidMmUnpinAllocation(
        (VIDMM_EXPORT *)this[2][54],
        (struct VIDMM_GLOBAL *)this[2][55],
        *((struct _VIDMM_MULTI_ALLOC **)v14 + 3));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v15[5].Count + 72));
      ExReleaseRundownProtection(v15 + 11);
    }
  }
  while ( !(_BYTE)v24 );
  v16 = this[225];
  if ( v16 == (PERESOURCE *)this[2][2] )
    ADAPTER_DISPLAY::DisableOverlayPlanes((ADAPTER_DISPLAY *)v16[285], v5);
  return 0LL;
}
