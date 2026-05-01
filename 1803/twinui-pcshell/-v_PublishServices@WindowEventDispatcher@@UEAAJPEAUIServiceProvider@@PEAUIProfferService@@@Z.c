/*
 * XREFs of ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801DAA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180094148 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800F8074 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::v_PublishServices(
        WindowEventDispatcher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  int v4; // eax
  CCriticalFailureHandler *v5; // rcx
  int SiHostProcessHandle; // eax
  const char *v7; // r9
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned __int64 *v10; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 24LL))(*((_QWORD *)this + 23));
    v13 = v4;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v5, &v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v4 = v13;
    }
    if ( v4 < 0 && v4 != -2147024882 && v4 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v5,
        &v13,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0xE6u,
        v10,
        v11);
      v4 = v13;
    }
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        231LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v4);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 43,
      0LL);
    SiHostProcessHandle = GetSiHostProcessHandle(0x200u, (void **)this + 43);
    v8 = SiHostProcessHandle;
    if ( SiHostProcessHandle >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)SiHostProcessHandle);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xED,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v7);
  }
  return result;
}
