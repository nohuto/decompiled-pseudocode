/*
 * XREFs of MmStoreChargeResidentAvailableForRead @ 0x14016A458
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140152D28 (SmAcquireReleaseResAvailForRead.c)
 * Callees:
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

_BOOL8 __fastcall MmStoreChargeResidentAvailableForRead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned int)MiChargeResident(&MiSystemPartition, a1 + 48, 0LL, a4) != 0;
}
