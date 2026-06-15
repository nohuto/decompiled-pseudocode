/*
 * XREFs of ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180035E30
 * Callers:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180007B78 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180046AB8 (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::WaitForTimerCallbacks(CAudioThreadPool *this, struct _TP_TIMER *a2, BOOL a3)
{
  WaitForThreadpoolTimerCallbacks(a2, a3);
}
