/*
 * XREFs of ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x18014FE60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x18014FF10 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180305708 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 */

__int64 __fastcall CFullScreenManager::EnterFullScreen(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4)
{
  struct IApplicationView **v8; // r9
  int ViewForApplication; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CWinRTApplicationView *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(IUnknown **)(a1 - 72),
                         a2,
                         (struct IImmersiveApplication *)&v14,
                         v8);
  v10 = ViewForApplication;
  if ( ViewForApplication >= 0 )
  {
    ViewForApplication = CFullScreenManager::EnterFullScreenForView(a1, v14, a3, a4);
    v10 = ViewForApplication;
    if ( ViewForApplication >= 0 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v11 = 259LL;
  }
  else
  {
    v11 = 258LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)ViewForApplication);
LABEL_7:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  return v10;
}
