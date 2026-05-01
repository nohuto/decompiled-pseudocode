/*
 * XREFs of ??_GAgileApplicationViewChangeListenerConverter@@UEAAPEAXI@Z @ 0x1800773B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall AgileApplicationViewChangeListenerConverter::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  HANDLE OwningThread; // rcx
  __int64 v5; // rcx
  HANDLE LockSemaphore; // rcx

  OwningThread = this[2].OwningThread;
  if ( OwningThread )
  {
    this[2].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  }
  v5 = *(_QWORD *)&this[2].LockCount;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  DeleteCriticalSection(this + 1);
  HIDWORD(this->SpinCount) = -1073741823;
  LockSemaphore = this->LockSemaphore;
  if ( LockSemaphore )
  {
    this->LockSemaphore = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)LockSemaphore + 16LL))(LockSemaphore);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
