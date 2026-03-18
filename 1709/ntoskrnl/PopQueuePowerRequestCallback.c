/*
 * XREFs of PopQueuePowerRequestCallback @ 0x1400B0968
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400B4DB8 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400B4F20 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PopQueuePowerRequestCallbacks @ 0x1400B09A8 (PopQueuePowerRequestCallbacks.c)
 */

__int64 __fastcall PopQueuePowerRequestCallback(__int64 a1, int a2, char a3, char a4)
{
  __int64 v4; // r10
  __int64 (__fastcall **v5)(); // rdx
  __int64 result; // rax

  v4 = a2;
  v5 = &off_140353748;
  result = 2 * v4;
  if ( *(&off_140353748 + 2 * v4) )
  {
    if ( a3 )
      ++*(_BYTE *)(v4 + a1 + 72);
    else
      --*(_BYTE *)(v4 + a1 + 72);
    LOBYTE(v5) = a4;
    return PopQueuePowerRequestCallbacks(a1, v5);
  }
  return result;
}
