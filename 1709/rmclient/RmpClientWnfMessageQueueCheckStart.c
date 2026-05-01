/*
 * XREFs of RmpClientWnfMessageQueueCheckStart @ 0x18000DA48
 * Callers:
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x18000D9D4 (HampIpcChannelObjectMakeZombieUnsafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientWnfMessageQueueCheckStart(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) == 0 )
  {
    *(_DWORD *)(a1 + 64) = result | 1;
    return TpPostWork(*(_QWORD *)(a1 + 56));
  }
  return result;
}
