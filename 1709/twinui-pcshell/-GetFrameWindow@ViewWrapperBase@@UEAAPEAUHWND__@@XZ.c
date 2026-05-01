/*
 * XREFs of ?GetFrameWindow@ViewWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x18013DA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall ViewWrapperBase::GetFrameWindow(ViewWrapperBase *this)
{
  return (HWND)*((_QWORD *)this + 33);
}
