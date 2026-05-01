/*
 * XREFs of ?ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801500E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180150180 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180305708 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 */

__int64 __fastcall CFullScreenManager::ExitFullScreen(__int64 a1, struct IUnknown *a2, unsigned int a3)
{
  struct IApplicationView **v6; // r9
  int ViewForApplication; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CWinRTApplicationView *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(IUnknown **)(a1 - 72),
                         a2,
                         (struct IImmersiveApplication *)&v12,
                         v6);
  v8 = ViewForApplication;
  if ( ViewForApplication >= 0 )
  {
    ViewForApplication = CFullScreenManager::ExitFullScreenForView(a1, v12, a3);
    v8 = ViewForApplication;
    if ( ViewForApplication >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 268LL;
  }
  else
  {
    v9 = 267LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)ViewForApplication);
LABEL_7:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  return v8;
}
