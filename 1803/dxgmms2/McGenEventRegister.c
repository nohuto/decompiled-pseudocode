/*
 * XREFs of McGenEventRegister @ 0x1C00160C4
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0082538 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( DxgkControlGuid_Context )
    return 0;
  else
    return EtwRegister(&DxgkControlGuid, McGenControlCallbackV2, &DxgkControlGuid_Context, &DxgkControlGuid_Context);
}
