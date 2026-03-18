/*
 * XREFs of ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0115C88
 * Callers:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0097144 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C0114BF0 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C0116408 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
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
