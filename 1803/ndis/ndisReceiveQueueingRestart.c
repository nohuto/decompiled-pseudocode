/*
 * XREFs of ndisReceiveQueueingRestart @ 0x1C005028C
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C0101810 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisReceiveQueueingRestart(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_BYTE *)(a1 + 3236) = 0;
  if ( byte_1C0098DC1 == 1 && dword_1C0098DC4 != -1 && *(_DWORD *)(a1 + 3232) && !*(_DWORD *)(a1 + 464) )
    *(_DWORD *)(a1 + 3176) = 1;
  return result;
}
