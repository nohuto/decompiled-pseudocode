/*
 * XREFs of McGenEventUnregister @ 0x18007E484
 * Callers:
 *     DllMain @ 0x18004DD08 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister()
{
  __int64 result; // rax

  if ( !Microsoft_Windows_Dwm_UdwmHandle )
    return 0LL;
  result = EtwEventUnregister(Microsoft_Windows_Dwm_UdwmHandle);
  Microsoft_Windows_Dwm_UdwmHandle = 0LL;
  return result;
}
