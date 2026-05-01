/*
 * XREFs of ?GetMonitor@MonitorFrame@@QEBA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18012C254
 * Callers:
 *     ?DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18012D790 (-DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall MonitorFrame::GetMonitor(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
