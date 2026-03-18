/*
 * XREFs of McGenEventRegister @ 0x1C001412C
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0076CF4 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( Microsoft_Windows_DxgKrnlHandle )
    return 0;
  else
    return EtwRegister(
             &DxgkControlGuid,
             McGenControlCallbackV2,
             &DxgkControlGuid_Context,
             &Microsoft_Windows_DxgKrnlHandle);
}
