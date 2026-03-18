/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0039F00
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C003A81C (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C003AB48 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceWakeState(__int64 a1)
{
  __int64 *v1; // r8
  int v2; // edx
  int v3; // eax

  v1 = *(__int64 **)(a1 + 360);
  v2 = 5;
  if ( !v1 )
    return (*(_QWORD *)(a1 + 952) & 0x500000000LL) != 0 ? 4u : 0;
  do
  {
    v3 = v2;
    v2 = *((_DWORD *)v1 + 5);
    v1 = (__int64 *)*v1;
    if ( v2 >= v3 )
      v2 = v3;
  }
  while ( v1 );
  if ( v2 == 5 )
    return (*(_QWORD *)(a1 + 952) & 0x500000000LL) != 0 ? 4u : 0;
  return (unsigned int)v2;
}
