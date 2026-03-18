/*
 * XREFs of ACPISystemPowerDetermineSupportedSystemState @ 0x1C0039F50
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0039BF8 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C003A1F0 (ACPISystemPowerUpdateDeviceCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedSystemState(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  __int64 *v4; // rcx
  int v5; // eax

  v2 = 0;
  v3 = 7;
  if ( a2 != 4 )
  {
    v4 = *(__int64 **)(a1 + 8LL * a2 + 360);
    while ( v4 )
    {
      v5 = v3;
      v3 = *((_DWORD *)v4 + 4);
      v4 = (__int64 *)*v4;
      if ( v3 >= v5 )
        v3 = v5;
    }
  }
  if ( v3 != 7 )
    return (unsigned int)v3;
  return v2;
}
