/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x140256470
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140814224 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x1408169D0 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x14082DAE0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14082DBBC (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x14004C860 (MmIsSpecialPoolAddress.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // ebx
  unsigned __int64 v2; // r8
  int v3; // eax

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  if ( (unsigned int)(SystemRegionType - 6) <= 1 )
  {
    LOBYTE(v3) = 0;
  }
  else if ( (unsigned int)MmIsSpecialPoolAddress(v2) )
  {
    LOBYTE(v3) = 1;
  }
  else
  {
    return SystemRegionType != 1;
  }
  return v3;
}
