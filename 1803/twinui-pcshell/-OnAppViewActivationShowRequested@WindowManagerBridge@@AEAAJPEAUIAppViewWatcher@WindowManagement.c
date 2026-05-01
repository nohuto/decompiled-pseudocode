/*
 * XREFs of ?OnAppViewActivationShowRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewActivationShowRequestedEventArgs@3456@@Z @ 0x1801EC590
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_47b677ddc9425b46c5478666df3ea308___ @ 0x1801E8F48 (Windows--Internal--ComTaskPool--QueueTask__lambda_47b677ddc9425b46c5478666df3ea308___.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewActivationShowRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v11; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    LODWORD(v11) = 0;
    v9[0] = this;
    v9[1] = a3;
    v9[2] = &v11;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_47b677ddc9425b46c5478666df3ea308___(
           v5,
           v4,
           CurrentThreadId,
           (__int64)v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        556LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = (const char *)(unsigned int)v11;
    if ( (int)v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        557LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x231,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v7);
  }
  return result;
}
