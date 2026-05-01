/*
 * XREFs of ?GetFrameWindow@ViewWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x180050B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall ViewWrapperBase::GetFrameWindow(ViewWrapperBase *this)
{
  return (HWND)*((_QWORD *)this + 33);
}
