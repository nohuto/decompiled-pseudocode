/*
 * XREFs of McGenEventRegister @ 0x1C001AC48
 * Callers:
 *     RaInitializeDriver @ 0x1C006093C (RaInitializeDriver.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( Microsoft_Windows_StorPortHandle )
    return 0;
  else
    return EtwRegister(
             &StorPortEventProvider,
             McGenControlCallbackV2,
             &StorPortEventProvider_Context,
             &Microsoft_Windows_StorPortHandle);
}
