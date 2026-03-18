/*
 * XREFs of PopQueuePowerRequestCallback @ 0x1400715B8
 * Callers:
 *     PoSetPowerRequestInternal @ 0x1400722B0 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x140072C50 (PoClearPowerRequestInternal.c)
 * Callees:
 *     PopQueuePowerRequestCallbacks @ 0x1400715F8 (PopQueuePowerRequestCallbacks.c)
 */

__int64 __fastcall PopQueuePowerRequestCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 (__fastcall **v5)(); // rdx
  __int64 result; // rax

  v4 = a2;
  v5 = &off_14033B6C8;
  result = 2 * v4;
  if ( *(&off_14033B6C8 + 2 * v4) )
  {
    if ( (_BYTE)a3 )
      ++*(_BYTE *)(v4 + a1 + 72);
    else
      --*(_BYTE *)(v4 + a1 + 72);
    LOBYTE(v5) = a4;
    return PopQueuePowerRequestCallbacks(a1, v5, a3, a4);
  }
  return result;
}
