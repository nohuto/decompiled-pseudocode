/*
 * XREFs of ndisReceiveQueueingRestart @ 0x1C004F944
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C0104EDC (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisReceiveQueueingRestart(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_BYTE *)(a1 + 3236) = 0;
  if ( byte_1C0097F01 == 1 && dword_1C0097F04 != -1 && *(_DWORD *)(a1 + 3232) && !*(_DWORD *)(a1 + 464) )
    *(_DWORD *)(a1 + 3176) = 1;
  return result;
}
