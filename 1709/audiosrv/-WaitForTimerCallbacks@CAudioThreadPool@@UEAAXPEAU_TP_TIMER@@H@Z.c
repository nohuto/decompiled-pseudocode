/*
 * XREFs of ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x18001F500
 * Callers:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180018A8C (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D720 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::WaitForTimerCallbacks(CAudioThreadPool *this, struct _TP_TIMER *a2, BOOL a3)
{
  WaitForThreadpoolTimerCallbacks(a2, a3);
}
