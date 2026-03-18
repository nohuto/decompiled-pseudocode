/*
 * XREFs of HvlQueryVsmConnection @ 0x14002F528
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 *     VslConfigureDynamicMemory @ 0x1401ECCA0 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciEnabled @ 0x1401ED178 (VslGetSecurePciEnabled.c)
 *     VslMakeProtectedPageWritable @ 0x1401ED568 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401ED628 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1401ED798 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x1402136C4 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140688124 (VslRelaxQuotas.c)
 *     VslConnectSwInterrupt @ 0x1407F6C58 (VslConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x1408265EC (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x140832A48 (VslpIumPhase0Initialize.c)
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
