/*
 * XREFs of ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C013AE00
 * Callers:
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0139240 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0139A88 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 * Callees:
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z @ 0x1C013B2D4 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@HK@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C013B5A0 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::Send2FingerTap(CPTPEngine *this, struct PTPInput *a2, int a3)
{
  __int128 v4; // [rsp+40h] [rbp-48h]
  __int64 v5; // [rsp+50h] [rbp-38h]
  __int128 v6; // [rsp+60h] [rbp-28h] BYREF
  __int64 v7; // [rsp+70h] [rbp-18h]

  *((_QWORD *)this + 407) = *(_QWORD *)a2;
  CPTPEngine::SendMouseDownAtPoint(
    this,
    8u,
    *((_DWORD *)a2 + 6) - a3,
    *((_DWORD *)a2 + 6),
    *(struct tagPOINT *)((char *)a2 + 28),
    0,
    *((_DWORD *)this + 100));
  LODWORD(v4) = 2;
  v7 = v5;
  v6 = v4;
  CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v6);
}
