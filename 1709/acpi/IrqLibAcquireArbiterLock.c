/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C000E408
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C0029950 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C00643D0 (ProcessorpAddInstanceCallback.c)
 *     IrqTranslateResources @ 0x1C0089060 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0096A70 (LinkNodepAddLinkNodeWorker.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00A1AC0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00A7C20 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00A7EB0 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00A8250 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C0078700 )
    {
      KeSetEvent(Object, 0, 0);
      KeWaitForSingleObject(qword_1C0078708, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
