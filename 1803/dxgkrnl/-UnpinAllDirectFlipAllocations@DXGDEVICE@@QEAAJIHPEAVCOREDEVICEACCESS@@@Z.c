/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C018C45C
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0152D80 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0153734 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C016A8D8 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C3D4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E184C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C018B804 (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        PERESOURCE **this,
        unsigned int a2,
        int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGALLOCATION *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rsi
  PERESOURCE *v17; // rcx
  int v19; // [rsp+40h] [rbp+18h] BYREF
  struct COREDEVICEACCESS *v20; // [rsp+48h] [rbp+20h] BYREF

  v20 = a4;
  v19 = a3;
  v5 = a2;
  if ( a2 >= *((_DWORD *)this + 424) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 6584LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2][2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 6585LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[211]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 6586LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 6587LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_DWORD *)this + v5 + 262);
  if ( (v12 & 0x100) != 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v13 + 24) = 6588LL;
    WdLogEvent5_WdAssertion(v13);
    v12 = *((_DWORD *)this + v5 + 262);
  }
  if ( (v12 & 0x200) != 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v14 + 24) = 6589LL;
    WdLogEvent5_WdAssertion(v14);
  }
  LODWORD(v20) = 0;
  LOBYTE(v19) = 0;
  do
  {
    v15 = DXGDEVICE::PopDirectFlipAllocationFromList(
            (struct _KTHREAD **)this,
            v5,
            (unsigned int *)&v20,
            (unsigned __int8 *)&v19);
    v16 = (struct _EX_RUNDOWN_REF *)v15;
    if ( v15 )
    {
      VIDMM_EXPORT::VidMmUnpinAllocation(
        (VIDMM_EXPORT *)this[2][68],
        (struct VIDMM_GLOBAL *)this[2][69],
        *((struct _VIDMM_MULTI_ALLOC **)v15 + 3));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v16[5].Count + 72));
      ExReleaseRundownProtection(v16 + 11);
    }
  }
  while ( !(_BYTE)v19 );
  v17 = this[211];
  if ( v17 == (PERESOURCE *)this[2][2] )
    ADAPTER_DISPLAY::DisableOverlayPlanes((ADAPTER_DISPLAY *)v17[307], v5);
  return 0LL;
}
