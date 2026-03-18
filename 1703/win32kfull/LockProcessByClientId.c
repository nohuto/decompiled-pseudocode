/*
 * XREFs of LockProcessByClientId @ 0x1C001BB38
 * Callers:
 *     _AllowSetForegroundWindow @ 0x1C00191D0 (_AllowSetForegroundWindow.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C001AA68 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C001AC00 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C001BA94 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C00BA1B0 (NtUserSetActiveProcessForMonitor.c)
 *     xxxWaitForInputIdle @ 0x1C010C2F4 (xxxWaitForInputIdle.c)
 *     GetConsoleDesktop @ 0x1C01C3480 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C01D6BF0 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C01D6D70 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01D88A0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C02118E8 (xxxActivateDebugger.c)
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
