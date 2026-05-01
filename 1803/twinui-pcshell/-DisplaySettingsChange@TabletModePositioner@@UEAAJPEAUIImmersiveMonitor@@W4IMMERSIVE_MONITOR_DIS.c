/*
 * XREFs of ?DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802C61E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsOurMonitor@TabletModePositioner@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1802C8428 (-IsOurMonitor@TabletModePositioner@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x1802C869C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 */

__int64 __fastcall TabletModePositioner::DisplaySettingsChange(
        __int64 a1,
        struct IImmersiveMonitor *a2,
        unsigned int a3)
{
  TabletModePositioner *v6; // rsi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 80) != 1 )
    return 2147947423LL;
  if ( *(_DWORD *)(a1 + 84) == 1 )
  {
    v6 = (TabletModePositioner *)(a1 - 152);
    if ( TabletModePositioner::IsOurMonitor((TabletModePositioner *)(a1 - 152), a2) )
    {
      if ( (a3 & 0x10) != 0 )
      {
        v7 = TabletModePositioner::LayoutEnvironmentChanged(v6);
        if ( v7 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68D,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v7);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 48LL))(*(_QWORD *)(a1 + 160), a3);
    }
  }
  return 0LL;
}
