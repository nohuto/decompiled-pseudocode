/*
 * XREFs of NetPacketExtensionFree @ 0x1C00F2CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueStateUpdates@@YAXXZ @ 0x1C00F299C (-QueueStateUpdates@@YAXXZ.c)
 */

NTSTATUS __fastcall NetPacketExtensionFree(__int64 a1)
{
  *(_BYTE *)(a1 + 20) = 1;
  QueueStateUpdates();
  return KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&Event);
}
