/*
 * XREFs of ExpTryAcquireResourceSharedStarveExclusive @ 0x1400C76D4
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140158BE0 (ExAcquireFastResourceSharedStarveExclusive.c)
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
