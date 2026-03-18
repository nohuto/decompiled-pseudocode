/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C000E3E4
 * Callers:
 *     IrqTranslateResources @ 0x1C0089060 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0096A70 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00A1AC0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00A7C20 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00A7EB0 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00A8250 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent(Object, 0, 0);
}
