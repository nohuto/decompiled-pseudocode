/*
 * XREFs of ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B0B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibilityExperienceManager::UnsubscribeFromServices(
        struct _RTL_CRITICAL_SECTION *this,
        struct IServiceProvider *a2)
{
  HANDLE v3; // rbx
  PRTL_CRITICAL_SECTION_DEBUG v4; // rdi
  PRTL_CRITICAL_SECTION_DEBUG v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // r15
  HANDLE OwningThread; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbp
  PRTL_CRITICAL_SECTION_DEBUG v9; // rax
  unsigned int LockCount; // r13d
  PRTL_CRITICAL_SECTION_DEBUG v11; // rax
  unsigned int RecursionCount; // r12d
  HANDLE v13; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v14; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v15; // rcx

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = this + 7;
  EnterCriticalSection(this + 7);
  OwningThread = this[5].OwningThread;
  if ( OwningThread )
  {
    v3 = this[5].OwningThread;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 8LL))(v3);
  }
  DebugInfo = this[8].DebugInfo;
  v9 = this[9].DebugInfo;
  if ( v9 )
  {
    v4 = this[9].DebugInfo;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v9->Type + 8LL))(v4);
  }
  LockCount = this[5].LockCount;
  v11 = this[6].DebugInfo;
  if ( v11 )
  {
    v5 = this[6].DebugInfo;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v11->Type + 8LL))(v5);
  }
  RecursionCount = this[5].RecursionCount;
  v13 = this[5].OwningThread;
  if ( v13 )
  {
    this[5].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v13 + 16LL))(v13);
  }
  this[8].DebugInfo = 0LL;
  v14 = this[9].DebugInfo;
  if ( v14 )
  {
    this[9].DebugInfo = 0LL;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v14->Type + 16LL))(v14);
  }
  this[5].LockCount = 0;
  v15 = this[6].DebugInfo;
  if ( v15 )
  {
    this[6].DebugInfo = 0LL;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v15->Type + 16LL))(v15);
  }
  this[5].RecursionCount = 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( v5 && RecursionCount )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, _QWORD))(*(_QWORD *)&v5->Type + 48LL))(v5, RecursionCount);
  if ( v4 && LockCount )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, _QWORD))(*(_QWORD *)&v4->Type + 48LL))(v4, LockCount);
  if ( v3 )
    (*(void (__fastcall **)(HANDLE, PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)v3 + 56LL))(v3, DebugInfo);
  if ( v5 )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v5->Type + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v4->Type + 16LL))(v4);
  if ( v3 )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
