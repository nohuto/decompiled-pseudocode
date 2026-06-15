/*
 * XREFs of ?TimerCallback@CWatchdogTimer@@SAXPEAXE@Z @ 0x18006F490
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
