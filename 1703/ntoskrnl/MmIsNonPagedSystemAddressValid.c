/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x140211F20
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x140767D60 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x14077E600 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14077E6DC (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)VirtualAddress) - 6 <= 1 )
    return 0;
  if ( (unsigned int)MmIsSpecialPoolAddress((unsigned __int64)VirtualAddress) )
    return 1;
  return (unsigned int)MiGetSystemRegionType((unsigned __int64)VirtualAddress) != 1;
}
