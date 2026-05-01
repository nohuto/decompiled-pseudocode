/*
 * XREFs of ?TabletModeChanged@TouchKeyboardExperienceManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1800967C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::TabletModeChanged(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 360) = a2;
  return 0LL;
}
