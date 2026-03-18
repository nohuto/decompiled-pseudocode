/*
 * XREFs of HvlQueryVsmConnection @ 0x14011D9FC
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecurePciEnabled @ 0x14015D4C0 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x1401F1B00 (VslConfigureDynamicMemory.c)
 *     VslMakeProtectedPageWritable @ 0x1401F2388 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401F2494 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1401F2608 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x14021B6A8 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x1406B4054 (VslRelaxQuotas.c)
 *     VslConnectSwInterrupt @ 0x140856048 (VslConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x140857940 (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
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
