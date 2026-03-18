/*
 * XREFs of MmMapViewInSystemSpace @ 0x14054B620
 * Callers:
 *     LdrpMapResourceFile @ 0x14016D15C (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x14053EF74 (NtGetNlsSectionPtr.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 *     KsepShimDbMapToMemory @ 0x1405FFEA0 (KsepShimDbMapToMemory.c)
 *     EtwpCoverageEnsureContext @ 0x14064D564 (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x140778C28 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140779C68 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1407B82C8 (EtwpCoverageSamplerSetBloomFilter.c)
 *     MiInitializeApiSets @ 0x14089C8B4 (MiInitializeApiSets.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1404BBE1C (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, (__int64)&unk_1403CB5C0, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
