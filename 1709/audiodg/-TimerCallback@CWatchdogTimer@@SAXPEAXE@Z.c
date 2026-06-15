/*
 * XREFs of ?TimerCallback@CWatchdogTimer@@SAXPEAXE@Z @ 0x14003BA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CWatchdogTimer::TimerCallback(CWatchdogTimer *a1)
{
  CWatchdogTimer::OnHang(a1);
}
