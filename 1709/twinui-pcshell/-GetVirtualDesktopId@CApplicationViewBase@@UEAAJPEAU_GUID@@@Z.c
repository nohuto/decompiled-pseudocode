/*
 * XREFs of ?GetVirtualDesktopId@CApplicationViewBase@@UEAAJPEAU_GUID@@@Z @ 0x180084BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewBase::GetVirtualDesktopId(CApplicationViewBase *this, struct _GUID *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = (RTL_SRWLOCK *)((char *)this + 40);
  AcquireSRWLockShared((PSRWLOCK)this + 5);
  *a2 = *(struct _GUID *)((char *)this + 104);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
