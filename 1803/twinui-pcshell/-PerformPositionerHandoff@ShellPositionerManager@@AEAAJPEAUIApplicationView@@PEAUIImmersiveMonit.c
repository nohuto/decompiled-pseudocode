/*
 * XREFs of ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x1802B9864
 * Callers:
 *     ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1802B8DF0 (-ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHEL.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x1802B9924 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateViewArrayForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIObjectArray@@@Z @ 0x1802B931C (-CreateViewArrayForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIObjectArray@@.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@2@Z @ 0x1802B9968 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::PerformPositionerHandoff(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  ShellPositionerManager *v10; // rcx
  int ViewArrayForView; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  struct IObjectArray *v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v15[1] = (struct IObjectArray *)-2LL;
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)v15);
  ViewArrayForView = ShellPositionerManager::CreateViewArrayForView(v10, a2, v15);
  v12 = ViewArrayForView;
  if ( ViewArrayForView < 0 )
  {
    v13 = 638LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)ViewArrayForView);
    goto LABEL_6;
  }
  ViewArrayForView = ShellPositionerManager::PerformPositionerHandoff(a1, v15[0], a3, a4, a5, a6);
  v12 = ViewArrayForView;
  if ( ViewArrayForView < 0 )
  {
    v13 = 639LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)v15);
  return v12;
}
