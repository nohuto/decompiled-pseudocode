/*
 * XREFs of ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x18002A980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PTP_TIMER __fastcall CAudioThreadPool::CreateTimer(
        CAudioThreadPool *this,
        void (*a2)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *),
        void *a3)
{
  return CreateThreadpoolTimer(a2, a3, (PTP_CALLBACK_ENVIRON)((char *)this + 8));
}
