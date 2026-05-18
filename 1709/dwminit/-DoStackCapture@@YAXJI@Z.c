/*
 * XREFs of ?DoStackCapture@@YAXJI@Z @ 0x180003CF4
 * Callers:
 *     ?WaitForLsa@@YAJXZ @ 0x180001AAC (-WaitForLsa@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001F64 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800024B0 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x1800027F4 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002AC0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180002F50 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogon @ 0x180003130 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x180003340 (DwmpNotifyUserLogoff.c)
 *     ?StartLaunchAppService@@YAJXZ @ 0x1800039FC (-StartLaunchAppService@@YAJXZ.c)
 *     DwmpSignalSessionShutdown @ 0x1800044EC (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCapture(DWORD a1, DWORD a2)
{
  DoStackCapture(0, a1, a2);
}
