/*
 * XREFs of SmAlloc @ 0x1400064E8
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x140444AF0 (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x140444B98 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x140444D8C (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x1404450EC (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x1404452E0 (SmKmStoreCreatePrepare.c)
 *     SmProcessListRequest @ 0x140738584 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140738AC4 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x14073950C (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x14073A2A4 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x14073A9AC (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14073ABA4 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14073BCF4 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14073BF9C (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x14073C98C (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14073CE94 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14073D274 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAlloc(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
