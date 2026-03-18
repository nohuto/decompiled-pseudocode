/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1C0085FE0
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0085A70 (ProcessorpFindIdtEntriesApic.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0085C80 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00898E8 (IrqArbpFindSuitableRangeIsa.c)
 *     AcpiUpdateInterruptProperties @ 0x1C009EAD0 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return HalPrivateDispatchTable[62](0LL, a1);
  return result;
}
