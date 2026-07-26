/*
 * XREFs of NetPacketClientPauseComplete @ 0x1C00FBF00
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueStateUpdates@@YAXXZ @ 0x1C00FBE84 (-QueueStateUpdates@@YAXXZ.c)
 */

void __fastcall NetPacketClientPauseComplete(__int64 a1)
{
  if ( *(_DWORD *)a1 == 7 )
  {
    *(_BYTE *)(a1 + 4) = 1;
    QueueStateUpdates();
  }
}
