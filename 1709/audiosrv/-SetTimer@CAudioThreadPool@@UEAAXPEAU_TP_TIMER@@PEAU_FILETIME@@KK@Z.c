/*
 * XREFs of ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x18001F510
 * Callers:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180018A8C (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180018B30 (-StartInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D720 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D870 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SetTimer(
        CAudioThreadPool *this,
        struct _TP_TIMER *a2,
        struct _FILETIME *a3,
        DWORD a4,
        DWORD a5)
{
  SetThreadpoolTimer(a2, a3, a4, a5);
}
