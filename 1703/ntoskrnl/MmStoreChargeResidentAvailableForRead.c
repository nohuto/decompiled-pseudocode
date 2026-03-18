/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x140121428
 * Callers:
 *     SmAcquireReleaseResAvailForRead @ 0x1401213C0 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14012E500 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL) != 0;
}
