/*
 * XREFs of NetPacketExtensionFree @ 0x1C00FC1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00EBBD4 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 *     ?QueueStateUpdates@@YAXXZ @ 0x1C00FBE84 (-QueueStateUpdates@@YAXXZ.c)
 */

NTSTATUS __fastcall NetPacketExtensionFree(__int64 a1)
{
  *(_BYTE *)(a1 + 20) = 1;
  QueueStateUpdates();
  return KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&Event);
}
