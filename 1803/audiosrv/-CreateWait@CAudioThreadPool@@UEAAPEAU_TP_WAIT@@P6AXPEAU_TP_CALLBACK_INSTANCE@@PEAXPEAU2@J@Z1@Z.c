/*
 * XREFs of ?CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z @ 0x180035E10
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002B280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

PTP_WAIT __fastcall CAudioThreadPool::CreateWait(
        CAudioThreadPool *this,
        void (__stdcall *a2)(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WAIT Wait, TP_WAIT_RESULT WaitResult),
        void *a3)
{
  return CreateThreadpoolWait(a2, a3, (PTP_CALLBACK_ENVIRON)((char *)this + 8));
}
