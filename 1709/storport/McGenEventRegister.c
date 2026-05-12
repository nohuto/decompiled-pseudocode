/*
 * XREFs of McGenEventRegister @ 0x1C000FFA4
 * Callers:
 *     RaInitializeDriver @ 0x1C005FCBC (RaInitializeDriver.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( StorPortEventProvider_Context )
    return 0;
  else
    return EtwRegister(
             &StorPortEventProvider,
             McGenControlCallbackV2,
             &StorPortEventProvider_Context,
             &StorPortEventProvider_Context);
}
