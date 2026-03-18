/*
 * XREFs of ExpIsResourceOwned @ 0x14008FC00
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140143640 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsResourceOwned(__int64 a1)
{
  return *(_DWORD *)(a1 + 64) != 0;
}
