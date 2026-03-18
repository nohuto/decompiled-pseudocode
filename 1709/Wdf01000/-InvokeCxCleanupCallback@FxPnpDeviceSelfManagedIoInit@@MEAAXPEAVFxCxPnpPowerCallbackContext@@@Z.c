/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceSelfManagedIoInit@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1C009AC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPnpDeviceSelfManagedIoInit::InvokeCxCleanupCallback(
        FxPnpDeviceSelfManagedIoRestart *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *))Context->u.PrepareHardware.CleanupCallback)(this->m_Device);
}
