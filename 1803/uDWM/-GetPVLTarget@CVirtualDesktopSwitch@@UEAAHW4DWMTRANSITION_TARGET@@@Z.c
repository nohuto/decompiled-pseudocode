/*
 * XREFs of ?GetPVLTarget@CVirtualDesktopSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x18009BBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopSwitch::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v4; // edx
  unsigned int *i; // r8

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CVirtualDesktopSwitch::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( (unsigned int)++v3 >= 2 )
      return v2;
  }
  return `CVirtualDesktopSwitch::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[2 * v3 + 1];
}
