/*
 * XREFs of ?Uninitialize@VirtualDesktopController@@UEAAXXZ @ 0x1801B76D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VirtualDesktopController::Uninitialize(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  PVOID Ptr; // rcx
  PVOID v4; // rcx

  v1 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  Ptr = this[8].Ptr;
  if ( Ptr )
  {
    this[8].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v4 = this[9].Ptr;
  if ( v4 )
  {
    this[9].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
