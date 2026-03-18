/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceSelfManagedIoCleanup@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1C009A9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoCleanup::InvokeCxCallback(
        FxPnpDeviceSurpriseRemoval *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  if ( PrePost )
    ((void (__fastcall *)(WDFDEVICE__ *))Context->u.PrepareHardware.PostCallback)(this->m_Device);
  else
    ((void (__fastcall *)(WDFDEVICE__ *))Context->u.PrepareHardware.PreCallback)(this->m_Device);
  return 0LL;
}
