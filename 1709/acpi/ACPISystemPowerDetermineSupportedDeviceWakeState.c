/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0028454
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0020DA8 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C00281D0 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceWakeState(__int64 a1)
{
  __int64 *v1; // r8
  int v2; // edx
  int v4; // eax

  v1 = *(__int64 **)(a1 + 360);
  v2 = 5;
  if ( !v1 )
    return (*(_QWORD *)(a1 + 952) & 0x500000000LL) != 0 ? 4u : 0;
  do
  {
    v4 = *((_DWORD *)v1 + 5);
    v1 = (__int64 *)*v1;
    if ( v4 < v2 )
      v2 = v4;
  }
  while ( v1 );
  if ( v2 == 5 )
    return (*(_QWORD *)(a1 + 952) & 0x500000000LL) != 0 ? 4u : 0;
  return (unsigned int)v2;
}
