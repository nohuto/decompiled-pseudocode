/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C0056D90
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C0056E40 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C00580B0 (ProcessorpAddInstanceCallback.c)
 *     AcpiUpdateInterruptProperties @ 0x1C007AB60 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C008CDE0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C008D070 (IrqLibFreeMessageTarget.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008D5D0 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTransGetInterruptVector @ 0x1C008D6B0 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1C008D7D0 (IrqTranslateResources.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C00666C0 )
    {
      KeSetEvent((PRKEVENT)Object, 0, 0);
      KeWaitForSingleObject(qword_1C00666C8, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
