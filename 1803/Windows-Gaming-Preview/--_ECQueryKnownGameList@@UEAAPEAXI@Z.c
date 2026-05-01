/*
 * XREFs of ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003D570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CQueryKnownGameList::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rcx
  char *v6; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CQueryKnownGameList::`vftable';
  DeleteCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    this[18].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  LockSemaphore = this[18].LockSemaphore;
  if ( LockSemaphore )
    operator delete(LockSemaphore);
  v6 = (char *)this->LockSemaphore;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  operator delete(this->OwningThread);
  this->RecursionCount = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
