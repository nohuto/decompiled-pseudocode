/*
 * XREFs of sub_140502844 @ 0x140502844
 * Callers:
 *     sub_14050182C @ 0x14050182C (sub_14050182C.c)
 *     sub_1405027AC @ 0x1405027AC (sub_1405027AC.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14057642C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14057653C (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140502844(__int64 a1)
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
