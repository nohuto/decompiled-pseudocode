/*
 * XREFs of HamIpcChannelAllocateState @ 0x180004BC4
 * Callers:
 *     HampConnectionAllocateState @ 0x180003FE4 (HampConnectionAllocateState.c)
 *     RmpClientConnectionAllocateState @ 0x18000C128 (RmpClientConnectionAllocateState.c)
 * Callees:
 *     RmpClientWnfCreateSubscription @ 0x180004BEC (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall HamIpcChannelAllocateState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = RmpClientWnfCreateSubscription(a2, HampIpcChannelWnfCallback, a1, a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
