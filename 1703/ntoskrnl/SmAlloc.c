/*
 * XREFs of SmAlloc @ 0x14012F798
 * Callers:
 *     SmProcessCreateRequest @ 0x140567BBC (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x140567F1C (SmKmStoreAdd.c)
 *     SmStoreSetProcessVaRanges @ 0x140568258 (SmStoreSetProcessVaRanges.c)
 *     SmKmStoreCreatePrepare @ 0x140568300 (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x14056849C (SmpKeyedStoreCreate.c)
 *     SmProcessListRequest @ 0x14070085C (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140700C58 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140701444 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x140701FA8 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1407026A8 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1407028A0 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1407039F0 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x140703C98 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x140704688 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x140704BA4 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x140704FA0 (SmcStoreSlotReserve.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SmAlloc(SIZE_T a1, ULONG a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, a1, a2);
}
