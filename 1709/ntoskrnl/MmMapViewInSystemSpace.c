/*
 * XREFs of MmMapViewInSystemSpace @ 0x1404F6020
 * Callers:
 *     LdrpMapResourceFile @ 0x1400B58D4 (LdrpMapResourceFile.c)
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1404F55B4 (KsepShimDbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x140593170 (NtGetNlsSectionPtr.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x140714A38 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140715AD4 (PspSiloInitializeUserSharedData.c)
 *     MiInitializeApiSets @ 0x140829744 (MiInitializeApiSets.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1404F7614 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace(
           (_DWORD)Section,
           (unsigned int)&unk_140388438,
           (_DWORD)MappedBase,
           (_DWORD)ViewSize,
           (__int64)&v4,
           0LL,
           0LL);
}
