/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C0056E18
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C007AB60 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C008CDE0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C008D070 (IrqLibFreeMessageTarget.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008D5D0 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTransGetInterruptVector @ 0x1C008D6B0 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1C008D7D0 (IrqTranslateResources.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent((PRKEVENT)Object, 0, 0);
}
