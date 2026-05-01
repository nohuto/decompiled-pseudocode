/*
 * XREFs of ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801D10C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180094148 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800F8074 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801D0764 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     ?WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ @ 0x1801E14B4 (-WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::v_PublishServices(
        ViewEventDispatcher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  CCriticalFailureHandler *v4; // rcx
  int SiHostProcessHandle; // ebx
  __int64 v6; // rdx
  unsigned __int64 *v8; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF

  SiHostProcessHandle = ViewManagerBridge::WaitForViewManagerConnection(*((ViewManagerBridge **)this + 49));
  v11 = SiHostProcessHandle;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v4, &v11);
    SiHostProcessHandle = v11;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( SiHostProcessHandle < 0 )
  {
    if ( SiHostProcessHandle != -2147024882 && SiHostProcessHandle != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        &v11,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x3E5u,
        v8,
        v9);
      SiHostProcessHandle = v11;
    }
    if ( SiHostProcessHandle < 0 )
    {
      v6 = 998LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)SiHostProcessHandle);
      return (unsigned int)SiHostProcessHandle;
    }
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 62,
    0LL);
  SiHostProcessHandle = GetSiHostProcessHandle(0x200u, (void **)this + 62);
  if ( SiHostProcessHandle < 0 )
  {
    v6 = 1001LL;
    goto LABEL_9;
  }
  ViewEventDispatcher::_PerformCrashRecovery((RTL_SRWLOCK *)this - 15);
  return 0LL;
}
