/*
 * XREFs of MmMapViewInSystemSpace @ 0x1404B0180
 * Callers:
 *     LdrpMapResourceFile @ 0x140165554 (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x1404618FC (NtGetNlsSectionPtr.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1404AF86C (KsepShimDbMapToMemory.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 *     PspApiSetCopyToSystemSpace @ 0x1406DE588 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1406DF654 (PspSiloInitializeUserSharedData.c)
 *     MiInitializeApiSets @ 0x140803BB0 (MiInitializeApiSets.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140497594 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, (__int64)&unk_14036C0F8, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
