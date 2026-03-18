/*
 * XREFs of HvlQueryVsmConnection @ 0x140084C68
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 *     VslConfigureDynamicMemory @ 0x14022F5A8 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14022F970 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciEnabled @ 0x14022FA00 (VslGetSecurePciEnabled.c)
 *     VslMakeProtectedPageWritable @ 0x14022FEA8 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14022FFB4 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x140230128 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x140257910 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140718C84 (VslRelaxQuotas.c)
 *     VslConnectSwInterrupt @ 0x1408B7998 (VslConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x1408C90D8 (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x1408DE2A4 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  char result; // al

  result = HvlpVsmVtlCallVa;
  if ( HvlpVsmVtlCallVa )
  {
    if ( a1 )
      *a1 = HvlpVsmVtlCallVa;
    return 1;
  }
  return result;
}
