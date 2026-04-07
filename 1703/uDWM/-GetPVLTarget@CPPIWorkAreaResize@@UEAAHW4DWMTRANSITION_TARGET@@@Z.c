/*
 * XREFs of ?GetPVLTarget@CPPIWorkAreaResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800966E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPPIWorkAreaResize::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // edx
  unsigned int *i; // r9

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CTabletModeTransition::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( ++v3 )
      return v2;
  }
  return `CTabletModeTransition::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
}
