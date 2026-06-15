/*
 * XREFs of ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180024220
 * Callers:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180014400 (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180016FF0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::WaitForTimerCallbacks(CAudioThreadPool *this, struct _TP_TIMER *a2, BOOL a3)
{
  WaitForThreadpoolTimerCallbacks(a2, a3);
}
