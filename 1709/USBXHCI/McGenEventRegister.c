/*
 * XREFs of McGenEventRegister @ 0x1C00172B4
 * Callers:
 *     DriverEntry @ 0x1C005A740 (DriverEntry.c)
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
