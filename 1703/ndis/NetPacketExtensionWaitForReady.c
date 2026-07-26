/*
 * XREFs of NetPacketExtensionWaitForReady @ 0x1C00F2D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NetPacketExtensionWaitForReady()
{
  return KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&Event);
}
