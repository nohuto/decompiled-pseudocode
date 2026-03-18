/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1404F75B0
 * Callers:
 *     LdrpMapResourceFile @ 0x1400B58D4 (LdrpMapResourceFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DCE94 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14012F768 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14013044C (LdrUnloadAlternateResourceModuleEx.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1404F55B4 (KsepShimDbMapToMemory.c)
 *     KsepShimDbUnmapFromMemory @ 0x1404F5DB4 (KsepShimDbUnmapFromMemory.c)
 *     MmUnmapViewInSessionSpace @ 0x1404F61D0 (MmUnmapViewInSessionSpace.c)
 *     AlpcViewDestroyProcedure @ 0x140540240 (AlpcViewDestroyProcedure.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     PspDeleteServerSiloGlobals @ 0x14071514C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  ULONG_PTR v1; // rdx
  void *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_140388438;
LABEL_3:
    MiRemoveFromSystemSpace((__int64)v2, v1, 1);
    return 0;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
  {
    v2 = (void *)(Process[1].ActiveProcessors.Bitmap[2] + 2944);
    goto LABEL_3;
  }
  return -1073741799;
}
