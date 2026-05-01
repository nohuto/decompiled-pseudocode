/*
 * XREFs of ?DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18014D4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z @ 0x18014DA94 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::DisplaySettingsChange(__int64 a1, __int64 a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 108)
    && *(_QWORD *)(a1 + 80)
    && (*(int (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(a1 + 72) + 96LL))(*(_QWORD *)(a1 + 72), a2, &v4) >= 0
    && v4 )
  {
    FullScreenPositioner::PositionView(a1 - 104, *(_QWORD *)(a1 + 80), 0LL);
  }
  return 0LL;
}
