/*
 * XREFs of ?DisplaySettingsChange@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18014FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180152600 (-_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall CFullScreenManager::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 72) && (a3 & 0x20) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v9);
    if ( v5 < 0 )
    {
      v6 = 339LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    if ( !v9 )
    {
      v5 = CFullScreenManager::_EvictAppsOnMonitor((CFullScreenManager *)(a1 - 120), a2);
      if ( v5 < 0 )
      {
        v6 = 342LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
