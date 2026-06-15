/*
 * XREFs of ?PersistanceTimerCallback@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180074C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPerStreamVolumeAudioSession::PersistanceTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        volatile signed __int32 *a2,
        struct _TP_TIMER *a3)
{
  _InterlockedIncrement(a2 + 10);
  (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *((_QWORD *)a2 + 143),
    a3);
}
