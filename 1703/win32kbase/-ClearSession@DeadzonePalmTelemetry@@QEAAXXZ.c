/*
 * XREFs of ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0116D90
 * Callers:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C00076F4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C0116080 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C01174FC (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 */

void __fastcall DeadzonePalmTelemetry::ClearSession(DeadzonePalmTelemetry *this)
{
  DeadzonePalmTelemetry::_UploadTelemetryData(this, 1);
  *((_DWORD *)this + 1) = 0;
  memset((char *)this + 2060, 0, 0x2800uLL);
  memset((char *)this + 12, 0, 0x800uLL);
  *((_BYTE *)this + 12) = 0;
  *(_DWORD *)this = 0;
}
