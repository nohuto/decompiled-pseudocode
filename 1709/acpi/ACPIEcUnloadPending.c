/*
 * XREFs of ACPIEcUnloadPending @ 0x1C00A16B4
 * Callers:
 *     ACPIEcDispatchQueries @ 0x1C004C1CC (ACPIEcDispatchQueries.c)
 *     ACPIEcServiceDevice @ 0x1C004C618 (ACPIEcServiceDevice.c)
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
