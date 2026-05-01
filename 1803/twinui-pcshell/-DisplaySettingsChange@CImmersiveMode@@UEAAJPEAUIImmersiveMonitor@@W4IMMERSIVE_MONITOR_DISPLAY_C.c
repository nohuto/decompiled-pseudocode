/*
 * XREFs of ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801179C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ @ 0x180117C98 (-MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180118380 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180118980 (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall CImmersiveMode::DisplaySettingsChange(__int64 a1, struct IUnknown *a2, char a3)
{
  CImmersiveMode *v5; // rcx
  __int64 v6; // rbx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x20) != 0 )
  {
    if ( ((int (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[2].QueryInterface)(a2, &v8) >= 0 )
    {
      v5 = (CImmersiveMode *)(a1 - 136);
      if ( v8 )
        CImmersiveMode::_RegisterDesktopVisibilitySource(v5, a2);
      else
        CImmersiveMode::_UnregisterDesktopVisibilitySource(v5, a2);
    }
  }
  else if ( (a3 & 1) != 0 )
  {
    v6 = 0LL;
    if ( *(_QWORD *)(a1 + 304) )
    {
      while ( !(unsigned int)SHIsSameObject(**(struct IUnknown ***)(*(_QWORD *)(a1 + 296) + 8 * v6), a2) )
      {
        if ( (unsigned __int64)++v6 >= *(_QWORD *)(a1 + 304) )
          return 0LL;
      }
      CImmersiveMode::CDesktopVisibilityChangeSource::MonitorRectChanged(*(CImmersiveMode::CDesktopVisibilityChangeSource **)(*(_QWORD *)(a1 + 296) + 8 * v6));
    }
  }
  return 0LL;
}
