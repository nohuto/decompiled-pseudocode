/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceD0Entry@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1C009AC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPnpDeviceD0Entry::InvokeCxCleanupCallback(
        FxPnpDeviceD0Entry *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.PrepareHardware.CleanupCallback)(
    this->m_Device,
    (unsigned int)this->m_PreviousState);
}
