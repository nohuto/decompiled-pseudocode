/*
 * XREFs of NetPacketExtensionWaitForReady @ 0x1C00FC1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00EBBD4 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

NTSTATUS NetPacketExtensionWaitForReady()
{
  return KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&Event);
}
