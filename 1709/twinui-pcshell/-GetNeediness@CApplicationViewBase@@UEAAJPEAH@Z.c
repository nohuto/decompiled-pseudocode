/*
 * XREFs of ?GetNeediness@CApplicationViewBase@@UEAAJPEAH@Z @ 0x180084B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewBase::GetNeediness(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 5;
  AcquireSRWLockShared(this + 5);
  *a2 = LOBYTE(this[15].Ptr);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
