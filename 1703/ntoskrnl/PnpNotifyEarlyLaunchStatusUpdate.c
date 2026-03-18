/*
 * XREFs of PnpNotifyEarlyLaunchStatusUpdate @ 0x1407FA354
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1407F8640 (PipInitializeCoreDriversAndElam.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14006EED0 (ExNotifyWithProcessing.c)
 *     PnpDiagnosticTraceElamStatus @ 0x140153DA8 (PnpDiagnosticTraceElamStatus.c)
 */

__int64 __fastcall PnpNotifyEarlyLaunchStatusUpdate(int a1)
{
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  char v5; // [rsp+60h] [rbp+18h] BYREF

  if ( PnpBootDriverCallbackObject )
  {
    PnpDiagnosticTraceElamStatus(&KMPnPEvt_EarlyLaunch_StatusNotification_Start, a1);
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[0] = PnpEarlyLaunchStatusNotificationPreProcess;
    v4 = a1;
    v3[3] = &v4;
    ExNotifyWithProcessing((__int64)PnpBootDriverCallbackObject, 0LL, (__int64)&v5, (__int64)v3);
    return PnpDiagnosticTraceElamStatus(&KMPnPEvt_EarlyLaunch_StatusNotification_Stop, a1);
  }
  return result;
}
