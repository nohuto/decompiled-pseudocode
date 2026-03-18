/*
 * XREFs of McGenEventRegister @ 0x1800C6E08
 * Callers:
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800C6C78 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister()
{
  if ( Microsoft_Windows_Dwm_CoreHandle )
    return 0;
  else
    return EventRegister(
             &Microsoft_Windows_Dwm_Core_Provider,
             (PENABLECALLBACK)McGenControlCallbackV2,
             &Microsoft_Windows_Dwm_Core_Provider_Context,
             &Microsoft_Windows_Dwm_CoreHandle);
}
