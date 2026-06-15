/*
 * XREFs of ?TimerCallback@?$CWatchdogTimer@$01@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x14003A430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWatchdogTimer<2>::TimerCallback(PTP_CALLBACK_INSTANCE Instance, __int64 Context, PTP_TIMER Timer)
{
  CWatchdogTimer<2>::OnHang(Context);
}
