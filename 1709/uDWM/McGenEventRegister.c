/*
 * XREFs of McGenEventRegister @ 0x180044FD8
 * Callers:
 *     DllMain @ 0x180046674 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventRegister(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( Microsoft_Windows_Dwm_Udwm_Provider_Context )
    return 0LL;
  else
    return EtwEventRegister(
             &Microsoft_Windows_Dwm_Udwm_Provider,
             McGenControlCallbackV2,
             &Microsoft_Windows_Dwm_Udwm_Provider_Context,
             &Microsoft_Windows_Dwm_Udwm_Provider_Context,
             a5,
             a6);
}
