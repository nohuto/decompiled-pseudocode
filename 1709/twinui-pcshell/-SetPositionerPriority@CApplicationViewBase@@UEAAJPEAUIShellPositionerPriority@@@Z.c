/*
 * XREFs of ?SetPositionerPriority@CApplicationViewBase@@UEAAJPEAUIShellPositionerPriority@@@Z @ 0x180084E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::SetPositionerPriority(RTL_SRWLOCK *this, struct IShellPositionerPriority *a2)
{
  RTL_SRWLOCK *v2; // rsi
  PVOID Ptr; // rcx

  v2 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  if ( this[12].Ptr != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)a2 + 8LL))(a2);
    Ptr = this[12].Ptr;
    this[12].Ptr = a2;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
