/*
 * XREFs of ACPIEcUnloadPending @ 0x1C009E6D8
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C00023E0 (ACPIEcServiceDevice.c)
 *     ACPIEcDispatchQueries @ 0x1C004CD8C (ACPIEcDispatchQueries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcUnloadPending(_BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1[122] && !a1[456] && !a1[488] )
    a1[121] = 2;
  return result;
}
