/*
 * XREFs of ProcessorConfigure @ 0x1C00AF55C
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00AF1F8 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     <none>
 */

__int64 ProcessorConfigure()
{
  ProcessorReserveIdtEntries = (__int64)ProcessorpReserveIdtEntriesApic;
  ProcessorFindIdtEntries = (__int64)ProcessorpFindIdtEntriesApic;
  return KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)ProcessorpAddInstanceCallback, 0LL, 0) == 0LL
       ? 0xC0000001
       : 0;
}
