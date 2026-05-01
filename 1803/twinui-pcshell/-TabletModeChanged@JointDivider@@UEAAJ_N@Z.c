/*
 * XREFs of ?TabletModeChanged@JointDivider@@UEAAJ_N@Z @ 0x1802E3920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall JointDivider::TabletModeChanged(HWND *this, char a2)
{
  if ( !a2 )
    ShowWindow(this[3], 0);
  return 0LL;
}
