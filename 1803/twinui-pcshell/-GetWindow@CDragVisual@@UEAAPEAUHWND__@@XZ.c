/*
 * XREFs of ?GetWindow@CDragVisual@@UEAAPEAUHWND__@@XZ @ 0x180096C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CDragVisual::GetWindow(CDragVisual *this)
{
  return (HWND)*((_QWORD *)this + 16);
}
