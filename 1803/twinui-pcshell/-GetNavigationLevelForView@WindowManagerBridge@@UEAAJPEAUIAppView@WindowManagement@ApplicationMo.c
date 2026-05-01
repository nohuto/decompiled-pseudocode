/*
 * XREFs of ?GetNavigationLevelForView@WindowManagerBridge@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4NavigationLevel@ViewManagerInterop@Shell@56@@Z @ 0x1801EC260
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_626ddba6f2cfb3d62932ab101c24d000___ @ 0x1801E90A8 (Windows--Internal--ComTaskPool--QueueTask__lambda_626ddba6f2cfb3d62932ab101c24d000___.c)
 */

__int64 __fastcall WindowManagerBridge::GetNavigationLevelForView(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a2,
        enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v10; // [rsp+38h] [rbp-20h]
  enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v13; // [rsp+60h] [rbp+8h] BYREF

  try
  {
    *(_DWORD *)a3 = 0;
    LODWORD(v13) = 0;
    *(_QWORD *)&v9 = this;
    *((_QWORD *)&v9 + 1) = &v13;
    v10 = a2;
    v11 = a3;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_626ddba6f2cfb3d62932ab101c24d000___(
           v5,
           v4,
           CurrentThreadId,
           &v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        291LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = (const char *)(unsigned int)v13;
    if ( (int)v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        292LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x128,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v7);
  }
  return result;
}
