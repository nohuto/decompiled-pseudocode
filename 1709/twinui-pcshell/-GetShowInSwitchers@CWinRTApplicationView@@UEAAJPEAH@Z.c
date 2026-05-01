/*
 * XREFs of ?GetShowInSwitchers@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x180083280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWinRTApplicationView::GetShowInSwitchers(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 5;
  AcquireSRWLockShared(this + 5);
  *a2 = LOBYTE(this[24].Ptr) != 0;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
