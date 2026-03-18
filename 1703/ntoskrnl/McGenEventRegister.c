/*
 * XREFs of McGenEventRegister @ 0x140167E78
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x1406869D0 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x1408261A8 (PnpDiagInitialize.c)
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
