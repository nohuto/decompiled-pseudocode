/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x140219990
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x1407A9970 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x1407C05D0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1407C06AC (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x14006660C (MmIsSpecialPoolAddress.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)VirtualAddress) - 6 <= 1 )
    return 0;
  if ( (unsigned int)MmIsSpecialPoolAddress((unsigned __int64)VirtualAddress) )
    return 1;
  return (unsigned int)MiGetSystemRegionType((unsigned __int64)VirtualAddress) != 1;
}
