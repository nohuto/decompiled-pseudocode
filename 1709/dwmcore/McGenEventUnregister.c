/*
 * XREFs of McGenEventUnregister @ 0x18018DD84
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800BFF28 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister()
{
  ULONG result; // eax

  if ( !Microsoft_Windows_Dwm_Core_Provider_Context )
    return 0;
  result = EventUnregister(Microsoft_Windows_Dwm_Core_Provider_Context);
  Microsoft_Windows_Dwm_Core_Provider_Context = 0LL;
  return result;
}
