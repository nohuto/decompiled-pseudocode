/*
 * XREFs of NetPacketDeregisterClient @ 0x1C00F2A30
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueStateUpdates@@YAXXZ @ 0x1C00F299C (-QueueStateUpdates@@YAXXZ.c)
 */

NTSTATUS __fastcall NetPacketDeregisterClient(__int64 a1)
{
  *(_BYTE *)(a1 + 5) = 1;
  QueueStateUpdates();
  return KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&Event);
}
