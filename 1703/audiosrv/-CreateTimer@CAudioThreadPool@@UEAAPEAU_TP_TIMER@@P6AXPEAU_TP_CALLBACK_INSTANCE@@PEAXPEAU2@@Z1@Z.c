/*
 * XREFs of ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180024250
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180015990 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180017144 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
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
