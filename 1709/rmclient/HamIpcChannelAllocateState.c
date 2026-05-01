/*
 * XREFs of HamIpcChannelAllocateState @ 0x180007200
 * Callers:
 *     RmpClientConnectionAllocateState @ 0x180006514 (RmpClientConnectionAllocateState.c)
 * Callees:
 *     RmpClientWnfCreateSubscription @ 0x180004400 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall HamIpcChannelAllocateState(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = RmpClientWnfCreateSubscription(a2, (__int64)HampIpcChannelWnfCallback, (__int64)a1, a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
