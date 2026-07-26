/*
 * XREFs of ndisReceiveQueueingPaused @ 0x1C0050D58
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00FA564 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReceiveQueueingPaused(__int64 a1)
{
  bool v1; // zf

  v1 = *(_DWORD *)(a1 + 3176) == 1;
  *(_BYTE *)(a1 + 3236) = 1;
  if ( v1 )
    *(_DWORD *)(a1 + 3176) = 2;
}
