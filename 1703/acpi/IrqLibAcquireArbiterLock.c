/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C0005C3C
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C00059E0 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C0063200 (ProcessorpAddInstanceCallback.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0084D20 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTranslateResources @ 0x1C00866E0 (IrqTranslateResources.c)
 *     AcpiUpdateInterruptProperties @ 0x1C009EAD0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00A5170 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00A5400 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00A57A0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C00766A0 )
    {
      KeSetEvent(Object, 0, 0);
      KeWaitForSingleObject(qword_1C00766A8, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
