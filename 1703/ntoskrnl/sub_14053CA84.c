/*
 * XREFs of sub_14053CA84 @ 0x14053CA84
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x1404410F4 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140441208 (WbAddHeapExecutedBlockToLRU.c)
 *     WbFindHeapExecutedBlock @ 0x1404413EC (WbFindHeapExecutedBlock.c)
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14053CA84(__int64 a1)
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
