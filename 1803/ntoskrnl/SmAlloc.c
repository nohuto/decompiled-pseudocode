/*
 * XREFs of SmAlloc @ 0x14007E79C
 * Callers:
 *     SmProcessCreateRequest @ 0x14052AEB8 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x14052B218 (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x14052B520 (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x14052B6BC (SmpKeyedStoreCreate.c)
 *     SmStoreSetProcessVaRanges @ 0x14052B7A0 (SmStoreSetProcessVaRanges.c)
 *     SmProcessListRequest @ 0x14079BAF8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x14079BF90 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x14079C744 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x14079D2A8 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x14079D9B0 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14079DBA8 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14079ECF8 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14079EFA0 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x14079F994 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14079FEA0 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1407A0278 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAlloc(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
