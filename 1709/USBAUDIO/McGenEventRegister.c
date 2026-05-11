/*
 * XREFs of McGenEventRegister @ 0x1C00018E8
 * Callers:
 *     DeviceCreate @ 0x1C0001AA0 (DeviceCreate.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( EXBUSAUD_PROVIDER_Context )
    return 0;
  else
    return EtwRegister(
             &EXBUSAUD_PROVIDER,
             McGenControlCallbackV2,
             &EXBUSAUD_PROVIDER_Context,
             &EXBUSAUD_PROVIDER_Context);
}
