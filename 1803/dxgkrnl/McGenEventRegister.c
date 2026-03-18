/*
 * XREFs of McGenEventRegister @ 0x1C0030F00
 * Callers:
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C01A1600 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
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
