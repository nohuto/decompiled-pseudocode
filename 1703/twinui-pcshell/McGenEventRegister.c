/*
 * XREFs of McGenEventRegister @ 0x180004CD8
 * Callers:
 *     DllMain @ 0x180004D64 (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister()
{
  if ( Microsoft_Windows_Immersive_ShellHandle )
    return 0;
  else
    return EventRegister(
             &MICROSOFT_TWINUI_PUBLISHER,
             (PENABLECALLBACK)McGenControlCallbackV2,
             &MICROSOFT_TWINUI_PUBLISHER_Context,
             &Microsoft_Windows_Immersive_ShellHandle);
}
