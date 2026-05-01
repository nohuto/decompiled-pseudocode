/*
 * XREFs of ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x1800FAB88
 * Callers:
 *     ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1800F4E20 (-v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___::Run @ 0x1801008C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___--Run.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1800FF31C (--$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::_FlushRemovedPendingActivations(ViewEventDispatcher *this)
{
  RTL_SRWLOCK *v1; // rbp
  char **v2; // rsi
  char *v3; // rax
  char *v4; // rbx
  char **v5; // rcx
  char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  HSTRING v10; // rcx
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+58h] [rbp+10h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 224);
  v2 = (char **)((char *)this + 496);
  while ( 1 )
  {
    wil::srwlock::lock_exclusive(v1, &SRWLock);
    if ( !v2 )
      break;
    v3 = *v2;
    if ( !*v2 )
      break;
    v4 = *v2;
    v5 = 0LL;
    while ( v4 != v3 )
    {
      v5 = (char **)v4;
      v4 = *(char **)v4;
      if ( !v4 )
        goto LABEL_11;
    }
    v6 = *(char **)v3;
    if ( v5 )
      *v5 = v6;
    else
      *v2 = v6;
LABEL_11:
    StringRawBuffer = (PCWSTR)v4;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v7 = *((_QWORD *)v4 + 3);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v4 + 2), 0LL);
    ViewManagerInteropTraceLogging::PendingActivationDelete<unsigned __int64 &,unsigned short const *>(
      v4 + 8,
      &StringRawBuffer);
    StringRawBuffer = 0LL;
    if ( v4 )
    {
      v8 = *((_QWORD *)v4 + 4);
      if ( v8 )
      {
        *((_QWORD *)v4 + 4) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = *((_QWORD *)v4 + 3);
      if ( v9 )
      {
        *((_QWORD *)v4 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v10 = (HSTRING)*((_QWORD *)v4 + 2);
      if ( v10 )
        WindowsDeleteString(v10);
      operator delete(v4);
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
