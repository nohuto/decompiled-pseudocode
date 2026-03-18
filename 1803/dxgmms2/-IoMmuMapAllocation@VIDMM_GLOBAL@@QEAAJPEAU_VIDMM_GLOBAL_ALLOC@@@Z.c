/*
 * XREFs of ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1014
 * Callers:
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072340 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007E990 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MapAllocationsToIoMmu@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00B2C34 (-MapAllocationsToIoMmu@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056034 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::IoMmuMapAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *FullMDL; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  FullMDL = VidMmGetFullMDL(a2, 0LL);
  if ( FullMDL )
    return DpiMapIommuIdentityRange(*(_QWORD *)(*((_QWORD *)this + 3) + 192LL), FullMDL);
  v5 = WdLogNewEntry5_WdWarning(v4, 0LL);
  WdLogEvent5_WdWarning(v5);
  return 3221225495LL;
}
