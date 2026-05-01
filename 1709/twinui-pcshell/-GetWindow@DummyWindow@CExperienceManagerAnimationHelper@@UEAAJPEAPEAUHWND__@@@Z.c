/*
 * XREFs of ?GetWindow@DummyWindow@CExperienceManagerAnimationHelper@@UEAAJPEAPEAUHWND__@@@Z @ 0x1801DB060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CExperienceManagerAnimationHelper::DummyWindow::GetWindow(
        CExperienceManagerAnimationHelper::DummyWindow *this,
        HWND *a2)
{
  *a2 = (HWND)*((_QWORD *)this + 3);
  return 0LL;
}
