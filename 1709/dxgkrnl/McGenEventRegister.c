/*
 * XREFs of McGenEventRegister @ 0x1C0014234
 * Callers:
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C01AC23C (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
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
