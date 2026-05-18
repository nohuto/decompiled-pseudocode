/*
 * XREFs of ?DoStackCapture@@YAXJI@Z @ 0x180003C6C
 * Callers:
 *     ?WaitForLsa@@YAJXZ @ 0x1800019E4 (-WaitForLsa@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001E9C (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800023F0 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002734 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180002E90 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogon @ 0x180003070 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x180003280 (DwmpNotifyUserLogoff.c)
 *     ?StartLaunchAppService@@YAJXZ @ 0x18000393C (-StartLaunchAppService@@YAJXZ.c)
 *     DwmpSignalSessionShutdown @ 0x18000440C (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCapture(int a1, int a2)
{
  DoStackCapture(0, a1, a2);
}
