/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009E200
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00ACD28 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C010240C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C018266C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003628 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C0092A64 (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00ABDC0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        PERESOURCE **this,
        unsigned int a2,
        int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGALLOCATION *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  PERESOURCE *v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+40h] [rbp+18h] BYREF
  struct COREDEVICEACCESS *v19; // [rsp+48h] [rbp+20h] BYREF

  v19 = a4;
  v18 = a3;
  v5 = a2;
  if ( a2 >= *((_DWORD *)this + 420) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 6328LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2][2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 6329LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[209]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v14 + 24) = 6330LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v15 + 24) = 6331LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (*((_DWORD *)this + v5 + 258) & 0x100) != 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v16 + 24) = 6332LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (*((_DWORD *)this + v5 + 258) & 0x200) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v17 + 24) = 6333LL;
    WdLogEvent5_WdAssertion(v17);
  }
  LODWORD(v19) = 0;
  LOBYTE(v18) = 0;
  do
  {
    v8 = DXGDEVICE::PopDirectFlipAllocationFromList(
           (struct _KTHREAD **)this,
           v5,
           (unsigned int *)&v19,
           (unsigned __int8 *)&v18);
    v9 = (struct _EX_RUNDOWN_REF *)v8;
    if ( v8 )
    {
      VIDMM_EXPORT::VidMmUnpinAllocation(
        (VIDMM_EXPORT *)this[2][66],
        (struct VIDMM_GLOBAL *)this[2][67],
        *((struct _VIDMM_MULTI_ALLOC **)v8 + 3));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v9[5].Count + 72));
      ExReleaseRundownProtection(v9 + 11);
    }
  }
  while ( !(_BYTE)v18 );
  v10 = this[209];
  if ( v10 == (PERESOURCE *)this[2][2] )
    ADAPTER_DISPLAY::DisableOverlayPlanes((ADAPTER_DISPLAY *)v10[288], v5);
  return 0LL;
}
