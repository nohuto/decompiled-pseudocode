/*
 * XREFs of ExpTryAcquireResourceSharedStarveExclusive @ 0x1401270FC
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14013F0C0 (ExAcquireFastResourceSharedStarveExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireResourceSharedStarveExclusive(__int64 a1)
{
  char result; // al

  if ( *(char *)(a1 + 26) < 0 )
    return 0;
  result = 1;
  ++*(_DWORD *)(a1 + 64);
  *(_WORD *)(a1 + 24) = 1;
  return result;
}
