/*
 * XREFs of ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1801E1A24
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801CE960 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D8740 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     PdcNotificationClientRegister @ 0x1802F9FCC (PdcNotificationClientRegister.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConnectedStandbyHelper::Initialize(
        ConnectedStandbyHelper *this,
        struct IWindowDispatcherConnectedStandby *a2)
{
  __int64 v3; // rcx
  CCriticalFailureHandler *v4; // rcx
  int v5; // ebx
  int v6; // edi
  unsigned __int64 *v8; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 (__fastcall *v11)(ConnectedStandbyHelper *, unsigned int); // [rsp+40h] [rbp-20h]
  __int64 (__fastcall *v12)(CToastCenterExperienceManager *, struct CSingleViewShellExperience *); // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  int v14; // [rsp+70h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+18h] BYREF

  *((_QWORD *)this + 3) = a2;
  memset_0(&v10, 0, 0x20uLL);
  v10 = 1;
  v11 = lambda_f2dcd8ae08335fe0e2886b29354d7ff7_::_lambda_invoker_cdecl_;
  v12 = CToastCenterExperienceManager::OnVisibilityRevokedChanged;
  v5 = PdcNotificationClientRegister(v3, &v10, this, (char *)this + 32) | 0x10000000;
  v14 = v5;
  v6 = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v15) >= 0 )
    {
      switch ( v15 )
      {
        case 2u:
          v5 = -2023406815;
          goto LABEL_11;
        case 3u:
          v5 = -2023406814;
          goto LABEL_11;
        case 4u:
          v5 = -2147418094;
          goto LABEL_11;
        case 5u:
          v5 = -2147022986;
LABEL_11:
          v6 = v5;
          v14 = v5;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v6 < 0 )
  {
    CCriticalFailureHandler::HandleFailure(
      v4,
      &v14,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      0x1Fu,
      v8,
      v9);
    v5 = v14;
  }
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
