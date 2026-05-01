/*
 * XREFs of ??1CStartSizingFrame@@QEAA@XZ @ 0x1800B635C
 * Callers:
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1800B6014 (--1CStartExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStartSizingFrame::~CStartSizingFrame(struct _RTL_CRITICAL_SECTION *this)
{
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rcx
  HANDLE OwningThread; // rcx
  __int64 v5; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  ULONG_PTR v7; // rcx

  DeleteCriticalSection(this + 4);
  SpinCount = this[3].SpinCount;
  if ( SpinCount )
  {
    this[3].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  LockSemaphore = this[3].LockSemaphore;
  if ( LockSemaphore )
  {
    this[3].LockSemaphore = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)LockSemaphore + 16LL))(LockSemaphore);
  }
  OwningThread = this[3].OwningThread;
  if ( OwningThread )
  {
    this[3].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  }
  v5 = *(_QWORD *)&this[3].LockCount;
  if ( v5 )
  {
    *(_QWORD *)&this[3].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DebugInfo = this[3].DebugInfo;
  if ( DebugInfo )
  {
    this[3].DebugInfo = 0LL;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(DebugInfo);
  }
  v7 = this[2].SpinCount;
  if ( v7 )
  {
    this[2].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
