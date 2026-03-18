/*
 * XREFs of LockProcessByClientId @ 0x1C00907F8
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x1C0042E30 (NtUserSetActiveProcessForMonitor.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C008D1A8 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C008DD20 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0090754 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     _AllowSetForegroundWindow @ 0x1C0110E60 (_AllowSetForegroundWindow.c)
 *     xxxWaitForInputIdle @ 0x1C0115464 (xxxWaitForInputIdle.c)
 *     GetConsoleDesktop @ 0x1C01C61A0 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C01E3390 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C01E3510 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01E51F0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C0212DFC (xxxActivateDebugger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS v3; // edi

  v3 = PsLookupProcessByProcessId(a1, a2);
  if ( v3 < 0 || (unsigned int)PsGetProcessSessionId(*a2) == gSessionId )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  *a2 = 0LL;
  return 3221225473LL;
}
