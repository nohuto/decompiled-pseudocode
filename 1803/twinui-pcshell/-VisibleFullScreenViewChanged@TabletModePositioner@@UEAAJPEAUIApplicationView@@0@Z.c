/*
 * XREFs of ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x1802CF9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18001F2C0 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1802CA728 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x1802CA768 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1802CA9E0 (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1802CE7AC (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1802CEB84 (-TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::VisibleFullScreenViewChanged(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  IUnknown *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // edi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (IUnknown *)((char *)this - 192);
  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 192)) )
    return 0LL;
  if ( v7 )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 56) + 40LL))(*(_QWORD *)(v6 + 56)) )
    {
      v8 = TabletModePositioner::SwitchToEmptyLayoutHelper(v4);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x565,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
    }
  }
  if ( !a2 )
    return 0LL;
  TabletModePositioner::TryClearFullScreenCachedAppLayout((TabletModePositioner *)v4, a2);
  if ( a3
    || !TabletModePositioner::ShouldShowLauncher((TabletModePositioner *)v4)
    && !TabletModePositioner::ShouldShowSnapAssist((TabletModePositioner *)v4, 0) )
  {
    return 0LL;
  }
  v11 = TabletModePositioner::ShowLauncherOrSnapAssistInHole((IUnknown **)v4, 0);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x572,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
