/*
 * XREFs of NetPacketClientPauseComplete @ 0x1C00F2A10
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueStateUpdates@@YAXXZ @ 0x1C00F299C (-QueueStateUpdates@@YAXXZ.c)
 */

void __fastcall NetPacketClientPauseComplete(__int64 a1)
{
  if ( *(_DWORD *)a1 == 7 )
  {
    *(_BYTE *)(a1 + 4) = 1;
    QueueStateUpdates();
  }
}
