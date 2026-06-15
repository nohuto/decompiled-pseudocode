/*
 * XREFs of ??_ESpatialAudioConfigureDevice@@UEAAPEAXI@Z @ 0x1800C8110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall SpatialAudioConfigureDevice::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  __int64 v4; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  HANDLE LockSemaphore; // rcx

  v4 = *(_QWORD *)&this[15].LockCount;
  if ( v4 )
  {
    *(_QWORD *)&this[15].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  DebugInfo = this[15].DebugInfo;
  if ( DebugInfo )
  {
    this[15].DebugInfo = 0LL;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(DebugInfo);
  }
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
