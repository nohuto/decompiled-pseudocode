/*
 * XREFs of ?OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801ECC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1801EDDD8 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::OnWindowEnumerationCompleted(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v4 = this + 31;
    AcquireSRWLockExclusive(this + 31);
    LOBYTE(this[25].Ptr) = 1;
    v5 = WindowManagerBridge::WindowManagerWatcherConnected((WindowManagerBridge *)this);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        794LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31D,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v6);
  }
  return result;
}
