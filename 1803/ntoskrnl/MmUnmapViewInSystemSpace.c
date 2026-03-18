/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1404BB5B0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14013DC84 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016399C (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016B088 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x14016D15C (LdrpMapResourceFile.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B3C20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     AlpcViewDestroyProcedure @ 0x1404D6CD0 (AlpcViewDestroyProcedure.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     MmUnmapViewInSessionSpace @ 0x140581B10 (MmUnmapViewInSessionSpace.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 *     KsepShimDbUnmapFromMemory @ 0x1405FFE1C (KsepShimDbUnmapFromMemory.c)
 *     KsepShimDbMapToMemory @ 0x1405FFEA0 (KsepShimDbMapToMemory.c)
 *     EtwpCoverageEnsureContext @ 0x14064D564 (EtwpCoverageEnsureContext.c)
 *     PspDeleteServerSiloGlobals @ 0x1407792DC (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x1407B7488 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1407B82C8 (EtwpCoverageSamplerSetBloomFilter.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  ULONG_PTR v1; // rdx
  void *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_1403CB5C0;
LABEL_3:
    MiRemoveFromSystemSpace((__int64)v2, v1, 1LL);
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
