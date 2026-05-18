/*
 * XREFs of ?DoStackCapture@@YAXJI@Z @ 0x1800039E0
 * Callers:
 *     ?WaitForLsa@@YAJXZ @ 0x18000192C (-WaitForLsa@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001DE4 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002330 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000272C (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B20 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180003020 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogon @ 0x1800031F0 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x180003400 (DwmpNotifyUserLogoff.c)
 *     ?StartLaunchAppService@@YAJXZ @ 0x1800036E8 (-StartLaunchAppService@@YAJXZ.c)
 *     DwmpSignalSessionShutdown @ 0x18000413C (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCapture(DWORD a1, DWORD a2)
{
  DoStackCapture(0, a1, a2);
}
