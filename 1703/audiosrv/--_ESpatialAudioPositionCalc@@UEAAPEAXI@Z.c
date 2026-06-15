/*
 * XREFs of ??_ESpatialAudioPositionCalc@@UEAAPEAXI@Z @ 0x1800CC950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall SpatialAudioPositionCalc::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  HANDLE LockSemaphore; // rcx

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
