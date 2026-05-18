/*
 * XREFs of ?SignalDwmExited@@YA_NXZ @ 0x180001610
 * Callers:
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800023F0 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

bool SignalDwmExited(void)
{
  int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  return (int)RtlPublishWnfStateData(WNF_DWM_RUNNING, 0LL, &v1, 4LL, 0LL) >= 0;
}
