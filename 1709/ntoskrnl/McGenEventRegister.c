/*
 * XREFs of McGenEventRegister @ 0x140145CE0
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x1406B1DD8 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x14083E960 (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
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
