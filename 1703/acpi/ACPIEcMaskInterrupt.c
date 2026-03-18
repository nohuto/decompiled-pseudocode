/*
 * XREFs of ACPIEcMaskInterrupt @ 0x1C004C6C8
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C00023E0 (ACPIEcServiceDevice.c)
 *     ACPIEcGpioServiceRoutine @ 0x1C004C440 (ACPIEcGpioServiceRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcMaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[60](*(unsigned int *)(a1 + 900), 1LL);
  else
    return ACPIVectorDisable(0LL, *(unsigned int **)(a1 + 72));
}
