/*
 * XREFs of Controller_SetControllerGone @ 0x1C0009748
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001640 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_DisableController @ 0x1C0007A24 (Controller_DisableController.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001B250 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C001CD00 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C001D540 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C001D970 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 */

void __fastcall Controller_SetControllerGone(__int64 a1, char a2)
{
  if ( a2 && !*(_BYTE *)(a1 + 333) )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xC6u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      64LL,
      "A register read returned all FFs. Controller is considered physically removed",
      0LL,
      0LL);
  }
  *(_BYTE *)(a1 + 333) = 1;
  Controller_ReportFatalError(a1, a2 != 0 ? 16 : 8, a2 == 0 ? 0x100D : 0, 0LL, 0LL, 0LL);
}
