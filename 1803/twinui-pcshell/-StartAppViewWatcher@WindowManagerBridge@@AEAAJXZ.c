/*
 * XREFs of ?StartAppViewWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1801EDB60
 * Callers:
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1801EDDD8 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5507c52a3c96750a474d626313f63385___ @ 0x1801E8FFC (Windows--Internal--ComTaskPool--QueueTask__lambda_5507c52a3c96750a474d626313f63385___.c)
 */

__int64 __fastcall WindowManagerBridge::StartAppViewWatcher(WindowManagerBridge *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v9; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    LODWORD(v9) = 0;
    *(_QWORD *)&v7 = this;
    *((_QWORD *)&v7 + 1) = &v9;
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_5507c52a3c96750a474d626313f63385___(
           v3,
           v2,
           CurrentThreadId,
           &v7);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        371LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v5 = (const char *)(unsigned int)v9;
    if ( (int)v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        372LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x178,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v5);
  }
  return result;
}
