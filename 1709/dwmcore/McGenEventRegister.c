/*
 * XREFs of McGenEventRegister @ 0x18018F244
 * Callers:
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x18018EF54 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister()
{
  if ( Microsoft_Windows_Dwm_Core_Provider_Context[0] )
    return 0;
  else
    return EventRegister(
             &Microsoft_Windows_Dwm_Core_Provider,
             (PENABLECALLBACK)McGenControlCallbackV2,
             Microsoft_Windows_Dwm_Core_Provider_Context,
             Microsoft_Windows_Dwm_Core_Provider_Context);
}
