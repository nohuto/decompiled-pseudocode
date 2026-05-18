/*
 * XREFs of ?IsRunningInWininit@@YA_NXZ @ 0x180001574
 * Callers:
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x180002FB0 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 *     DwmpCreateSessionProcess @ 0x180003020 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x180003460 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     <none>
 */

bool IsRunningInWininit(void)
{
  return GetModuleHandleW(L"wininit.exe") != 0LL;
}
