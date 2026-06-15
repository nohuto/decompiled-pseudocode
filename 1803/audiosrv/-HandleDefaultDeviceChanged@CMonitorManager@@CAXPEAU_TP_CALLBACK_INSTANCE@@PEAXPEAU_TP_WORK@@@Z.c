/*
 * XREFs of ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800DF6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800DEDF8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 */

void __fastcall CMonitorManager::HandleDefaultDeviceChanged(
        PTP_CALLBACK_INSTANCE Instance,
        CMonitorManager **Context,
        PTP_WORK Work)
{
  CMonitorManager::DoHandleDefaultDeviceChanged(Context[1], (struct IMMDevice *)Context);
  DefaultChangedContext::`scalar deleting destructor'((DefaultChangedContext *)Context);
}
