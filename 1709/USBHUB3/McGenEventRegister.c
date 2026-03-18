/*
 * XREFs of McGenEventRegister @ 0x1C0001250
 * Callers:
 *     DriverEntry @ 0x1C0077010 (DriverEntry.c)
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
    return EtwRegister(&MS_USBHUB3_ETW_PROVIDER, McGenControlCallbackV2, CallbackContext, RegHandle);
}
