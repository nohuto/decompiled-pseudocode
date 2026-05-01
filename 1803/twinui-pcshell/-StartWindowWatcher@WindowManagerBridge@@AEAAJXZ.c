/*
 * XREFs of ?StartWindowWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1801EDC18
 * Callers:
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1801ED80C (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3c23c103e221e9d7edb5a529b76dd87c___ @ 0x1801E8E9C (Windows--Internal--ComTaskPool--QueueTask__lambda_3c23c103e221e9d7edb5a529b76dd87c___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::StartWindowWatcher(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+58h] [rbp+10h]

  try
  {
    v2 = this + 31;
    AcquireSRWLockExclusive(this + 31);
    v12 = v2;
    LODWORD(v11) = 0;
    *(_QWORD *)&v9 = this;
    *((_QWORD *)&v9 + 1) = &v11;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_3c23c103e221e9d7edb5a529b76dd87c___(
           v5,
           v4,
           CurrentThreadId,
           &v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        746LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = (const char *)(unsigned int)v11;
    if ( (int)v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        747LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F0,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v7);
  }
  return result;
}
