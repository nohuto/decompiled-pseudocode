/*
 * XREFs of McGenEventUnregister @ 0x18007AACC
 * Callers:
 *     DllMain @ 0x18004B160 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister()
{
  __int64 result; // rax

  if ( !Microsoft_Windows_Dwm_Udwm_Provider_Context[0] )
    return 0LL;
  result = EtwEventUnregister(Microsoft_Windows_Dwm_Udwm_Provider_Context[0]);
  Microsoft_Windows_Dwm_Udwm_Provider_Context[0] = 0LL;
  return result;
}
