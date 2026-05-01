/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18017C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180092D6C (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     ?ExperienceManager_RegisteredWithLightDismiss@QuickConnectTelemetry@@SAXXZ @ 0x18017B81C (-ExperienceManager_RegisteredWithLightDismiss@QuickConnectTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::OnClientWindowReadyForPresentationChanged(
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (SingleViewLightDismissHelper *)(this + 34),
         (struct ILightDismissNotification *)(this + 1),
         this[12]);
  v5 = v3;
  if ( v3 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_RegisteredWithLightDismiss(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x313,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
