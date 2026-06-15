/*
 * XREFs of ?TimerCallback@CWatchdogTimer@@SAXPEAXE@Z @ 0x14003B9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CWatchdogTimer::TimerCallback(CWatchdogTimer *a1)
{
  CWatchdogTimer::ReportHang(a1);
}
