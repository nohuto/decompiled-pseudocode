/*
 * XREFs of ?GetShowInSwitchers@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x18001C230
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180021C40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWinRTApplicationView::GetShowInSwitchers(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  *a2 = LOBYTE(this[26].Ptr) != 0;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
