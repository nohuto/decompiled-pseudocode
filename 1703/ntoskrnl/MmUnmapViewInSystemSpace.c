/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140497530
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x140013300 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140149348 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140164458 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x140165554 (LdrpMapResourceFile.c)
 *     KsepShimDbUnmapFromMemory @ 0x14045336C (KsepShimDbUnmapFromMemory.c)
 *     MmUnmapViewInSessionSpace @ 0x14045D240 (MmUnmapViewInSessionSpace.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1404AF86C (KsepShimDbMapToMemory.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140514AB0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 *     PspDeleteServerSiloGlobals @ 0x1406DECFC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  ULONG_PTR v1; // rdx
  void *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_14036C0F8;
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
