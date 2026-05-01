/*
 * XREFs of ?DisplaySettingsChange@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18002D2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18002D4D0 (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFallbackWindow::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  int v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 1) != 0
    && (*(int (__fastcall **)(struct IImmersiveMonitor *, _QWORD, int *))(*(_QWORD *)a2 + 96LL))(
         a2,
         *(_QWORD *)(a1 + 40),
         &v6) >= 0
    && v6 )
  {
    CFallbackWindow::_SizeWindow((CFallbackWindow *)(a1 - 64), a2);
  }
  return 0LL;
}
