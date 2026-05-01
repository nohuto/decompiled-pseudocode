/*
 * XREFs of ?InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18014DA10
 * Callers:
 *     <none>
 * Callees:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18014D34C (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@.c)
 */

__int64 __fastcall FullScreenPositioner::InitializePosition(
        struct IImmersiveMonitor **this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  FullScreenPositioner::ControlGainedHelper(this - 12, a2, (int)a3);
  return 0LL;
}
