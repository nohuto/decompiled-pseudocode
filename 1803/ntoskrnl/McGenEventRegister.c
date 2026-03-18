/*
 * XREFs of McGenEventRegister @ 0x1401867E4
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x1407168A8 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x1408C9A90 (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
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
