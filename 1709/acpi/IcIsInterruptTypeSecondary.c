/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1C0088988
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0088400 (ProcessorpFindIdtEntriesApic.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0088610 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IrqArbAddAllocation @ 0x1C00889C0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009522C (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00A1AC0 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return HalPrivateDispatchTable[62](0LL, a1);
  return result;
}
