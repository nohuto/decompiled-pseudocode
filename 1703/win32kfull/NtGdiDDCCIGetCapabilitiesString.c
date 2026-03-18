/*
 * XREFs of NtGdiDDCCIGetCapabilitiesString @ 0x1C0249150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDDCCIGetCapabilitiesString(CMonitorAPI *a1, char *a2, unsigned int a3)
{
  if ( a3 )
    return CMonitorAPI::DdcciGetCapabilitiesString(a1, a1, a2, a3);
  else
    return 3221225485LL;
}
