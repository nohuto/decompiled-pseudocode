/*
 * XREFs of VidSchGetDriverPagingContext @ 0x1C006D1FC
 * Callers:
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0058684 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059FF8 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A544 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0069E70 (VidSchiSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDriverPagingContext(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rax

  if ( a3 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8LL * a2);
  else
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 232) + 8LL * a2);
  return *(_QWORD *)(v3 + 64);
}
