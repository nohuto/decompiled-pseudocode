/*
 * XREFs of ExpGetThreadResourceHint @ 0x1400808E0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14013EE50 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetThreadResourceHint(__int64 a1)
{
  if ( (a1 & 3) != 0 )
    return 0LL;
  else
    return *(unsigned __int8 *)(a1 + 649);
}
