/*
 * XREFs of ACPISystemPowerDetermineSupportedSystemState @ 0x1C00575D0
 * Callers:
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0008EB0 (ACPISystemPowerUpdateDeviceCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedSystemState(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  __int64 *i; // rdx

  v2 = 0;
  v3 = 7;
  if ( a2 != 4 )
  {
    for ( i = *(__int64 **)(a1 + 8LL * a2 + 360); i; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) < v3 )
        v3 = *((_DWORD *)i + 4);
    }
  }
  if ( v3 != 7 )
    return (unsigned int)v3;
  return v2;
}
