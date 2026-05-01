/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800AD2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExperienceManager_RegisteredWithLightDismiss@QuickConnectTelemetry@@SAXXZ @ 0x1800A9FC4 (-ExperienceManager_RegisteredWithLightDismiss@QuickConnectTelemetry@@SAXXZ.c)
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018D9A4 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::OnClientWindowReadyForPresentationChanged(
        CQuickConnectExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
         (char *)this + 272,
         2050LL,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
         *((_QWORD *)this + 12));
  v4 = v3;
  if ( v3 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_RegisteredWithLightDismiss();
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v3);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x313,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)v4);
    return v4;
  }
}
