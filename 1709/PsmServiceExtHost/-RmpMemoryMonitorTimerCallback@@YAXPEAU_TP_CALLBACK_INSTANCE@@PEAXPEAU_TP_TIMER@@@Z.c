/*
 * XREFs of ?RmpMemoryMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18001FB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RmpMemoryMonitorTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, HANDLE *a2, struct _TP_TIMER *a3)
{
  SetEvent(a2[2]);
}
