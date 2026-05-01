/*
 * XREFs of ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@@Z @ 0x1801B75D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopController::Initialize(
        RTL_SRWLOCK *this,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktopNotificationService *a3,
        struct IVirtualDesktopDataSourceInternal *a4)
{
  RTL_SRWLOCK *v4; // rbp
  PVOID Ptr; // rcx
  PVOID v10; // rcx
  PVOID v11; // rcx

  v4 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  if ( this[8].Ptr != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IVirtualDesktopManagerInternal *))(*(_QWORD *)a2 + 8LL))(a2);
    Ptr = this[8].Ptr;
    this[8].Ptr = a2;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( this[9].Ptr != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IVirtualDesktopNotificationService *))(*(_QWORD *)a3 + 8LL))(a3);
    v10 = this[9].Ptr;
    this[9].Ptr = a3;
    if ( v10 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( this[10].Ptr != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IVirtualDesktopDataSourceInternal *))(*(_QWORD *)a4 + 8LL))(a4);
    v11 = this[10].Ptr;
    this[10].Ptr = a4;
    if ( v11 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
