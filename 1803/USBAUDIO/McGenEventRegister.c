/*
 * XREFs of McGenEventRegister @ 0x1C0001A38
 * Callers:
 *     DeviceCreate @ 0x1C0001BE0 (DeviceCreate.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( *RegHandle )
    return 0;
  else
    return EtwRegister(&EXBUSAUD_PROVIDER, McGenControlCallbackV2, CallbackContext, RegHandle);
}
