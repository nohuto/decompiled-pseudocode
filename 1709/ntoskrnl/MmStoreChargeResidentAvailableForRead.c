/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x14022D844
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140275B70 (SmAcquireReleaseResAvailForRead.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48) != 0;
}
