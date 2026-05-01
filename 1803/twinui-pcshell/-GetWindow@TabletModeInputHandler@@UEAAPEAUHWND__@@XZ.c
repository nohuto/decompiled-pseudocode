/*
 * XREFs of ?GetWindow@TabletModeInputHandler@@UEAAPEAUHWND__@@XZ @ 0x180097260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall TabletModeInputHandler::GetWindow(TabletModeInputHandler *this)
{
  return (HWND)*((_QWORD *)this + 3);
}
