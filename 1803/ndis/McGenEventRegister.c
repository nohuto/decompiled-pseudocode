/*
 * XREFs of McGenEventRegister @ 0x1C001604C
 * Callers:
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
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
    return EtwRegister(ProviderId, McGenControlCallbackV2, CallbackContext, RegHandle);
}
