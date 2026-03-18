/*
 * XREFs of SetConsoleSwitchInProgress @ 0x1C0090BC0
 * Callers:
 *     xxxRemoteConnect @ 0x1C009F300 (xxxRemoteConnect.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SetConsoleSwitchInProgress(int a1)
{
  int v1; // edx
  unsigned int result; // eax

  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = a1;
  if ( gptiCurrent )
  {
    v1 = 0;
    if ( a1 == 1 )
      v1 = 2;
    result = *((_DWORD *)gptiCurrent + 274) & 0xFFFFFFFD;
    *((_DWORD *)gptiCurrent + 274) = result | v1;
  }
  if ( gpevtVideoportCallout )
  {
    if ( a1 )
      return KeResetEvent(gpevtVideoportCallout);
    else
      return KeSetEvent(gpevtVideoportCallout, 1, 0);
  }
  return result;
}
