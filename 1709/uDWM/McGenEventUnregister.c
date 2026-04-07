/*
 * XREFs of McGenEventUnregister @ 0x180073D40
 * Callers:
 *     DllMain @ 0x180046674 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister()
{
  __int64 result; // rax

  if ( !Microsoft_Windows_Dwm_Udwm_Provider_Context )
    return 0LL;
  result = EtwEventUnregister();
  Microsoft_Windows_Dwm_Udwm_Provider_Context = 0LL;
  return result;
}
