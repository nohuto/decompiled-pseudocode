/*
 * XREFs of ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010AFD4
 * Callers:
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C010B34C (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C016A8D8 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C016ACA4 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?VidMmAsyncUnpinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C0018824 (-VidMmAsyncUnpinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00D1F10 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00D43E4 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C010B0CC (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018C67C (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct DXGALLOCATION **a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v5; // rbx
  int v7; // esi
  struct DXGALLOCATION *v10; // rdi
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax

  LODWORD(v5) = 0;
  v7 = 0;
  do
  {
    v10 = *a4;
    if ( DXGDEVICE::RemoveDirectFlipAllocationFromList(this, a2, *a4) )
    {
      if ( !*((_QWORD *)v10 + 5) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v13 + 24) = 6518LL;
        WdLogEvent5_WdAssertion(v13);
      }
      DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v10);
      DxgkReferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v10 + 5));
      LODWORD(v5) = VIDMM_EXPORT::VidMmAsyncUnpinAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                      v10);
      if ( (int)v5 < 0 )
      {
        v5 = (int)DXGDEVICE::UnpinDirectFlipAllocationSynchronous(this, a2, v10, a5);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v10 + 5) + 72LL));
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v10 + 11);
        v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v17 + 24) = v5;
        WdLogEvent5_WdWarning(v17);
        if ( (int)v5 < 0 )
          break;
      }
    }
    ++v7;
    ++a4;
  }
  while ( !v7 );
  return (unsigned int)v5;
}
