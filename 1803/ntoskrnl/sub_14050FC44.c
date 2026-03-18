/*
 * XREFs of sub_14050FC44 @ 0x14050FC44
 * Callers:
 *     sub_14050EEB8 @ 0x14050EEB8 (sub_14050EEB8.c)
 *     sub_14050FBAC @ 0x14050FBAC (sub_14050FBAC.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14053AB8C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14053AC9C (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14050FC44(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}
