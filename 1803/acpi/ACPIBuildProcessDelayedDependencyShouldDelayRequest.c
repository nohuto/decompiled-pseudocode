/*
 * XREFs of ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C000C534
 * Callers:
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C000C1D4 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C000C2A0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 * Callees:
 *     AreDependenciesSatisfied @ 0x1C00123FC (AreDependenciesSatisfied.c)
 */

bool __fastcall ACPIBuildProcessDelayedDependencyShouldDelayRequest(__int64 a1)
{
  _QWORD *v1; // rsi
  bool v2; // bl
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( (*(_DWORD *)(a1 + 20) & 0x20) == 0 )
    return 0;
  v1 = *(_QWORD **)(a1 + 40);
  v2 = 1;
  if ( (v1[1] & 0xA00000000000LL) == 0 )
  {
    v2 = 0;
    if ( v1[75] )
      v2 = (unsigned __int8)AreDependenciesSatisfied(v1[89]) == 0;
    for ( i = 0LL; !v2 && (unsigned int)i <= 5; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i > 4 )
        v4 = v1[50];
      else
        v4 = v1[i + 45];
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( *(_QWORD *)(v5 + 96) )
          v2 = (unsigned __int8)AreDependenciesSatisfied(*(_QWORD *)(v5 + 32)) == 0;
      }
    }
  }
  return v2;
}
