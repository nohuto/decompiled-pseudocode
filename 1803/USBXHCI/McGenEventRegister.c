/*
 * XREFs of McGenEventRegister @ 0x1C000FE70
 * Callers:
 *     DriverEntry @ 0x1C00577D0 (DriverEntry.c)
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
    return EtwRegister(&MS_USBXHCI_ETW_PROVIDER, McGenControlCallbackV2, CallbackContext, RegHandle);
}
