/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C0005C20
 * Callers:
 *     LinkNodepAddLinkNodeWorker @ 0x1C0084D20 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTranslateResources @ 0x1C00866E0 (IrqTranslateResources.c)
 *     AcpiUpdateInterruptProperties @ 0x1C009EAD0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00A5170 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00A5400 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00A57A0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent(Object, 0, 0);
}
