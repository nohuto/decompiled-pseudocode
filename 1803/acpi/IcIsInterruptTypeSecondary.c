/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1C0092638
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C007AB60 (AcpiUpdateInterruptProperties.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C008E908 (ProcessorpFindAffinitizedIdtEntries.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1C008ED20 (ProcessorpFindIdtEntriesApic.c)
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00910D4 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return HalPrivateDispatchTable[62](0LL, a1);
  return result;
}
