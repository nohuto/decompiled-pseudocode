/*
 * XREFs of ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x180125F30
 * Callers:
 *     ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18011FD10 (-v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___::Run @ 0x18012B230 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___--Run.c)
 * Callees:
 *     ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180129C90 (--$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::_FlushRemovedPendingActivations(ViewEventDispatcher *this)
{
  RTL_SRWLOCK *v1; // rsi
  char **v2; // r14
  char *v3; // rax
  char *v4; // rbx
  char **v5; // rcx
  char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  HSTRING v10; // rcx
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 296);
  v2 = (char **)((char *)this + 568);
  while ( 1 )
  {
    AcquireSRWLockExclusive(v1);
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
    if ( v1 )
      ReleaseSRWLockExclusive(v1);
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
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
