/*
 * XREFs of ?OnWindowWatcherStopped@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801ECD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d40e3235fe7936b35ba580e7f9781c22___ @ 0x1801E94D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_d40e3235fe7936b35ba580e7f9781c22___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::OnWindowWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  __int128 v11; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v13; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+20h]

  try
  {
    v4 = this + 31;
    AcquireSRWLockExclusive(this + 31);
    v14 = v4;
    LODWORD(v13) = 0;
    *(_QWORD *)&v11 = this;
    *((_QWORD *)&v11 + 1) = &v13;
    CurrentThreadId = GetCurrentThreadId();
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_d40e3235fe7936b35ba580e7f9781c22___(
           v7,
           v6,
           CurrentThreadId,
           &v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        829LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v9 = (const char *)(unsigned int)v13;
    if ( (int)v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        830LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x342,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v9);
  }
  return result;
}
