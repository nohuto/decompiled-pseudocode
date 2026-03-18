/*
 * XREFs of ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C0114BF0
 * Callers:
 *     RIMActivatePointerDeviceDeadzone @ 0x1C0104C10 (RIMActivatePointerDeviceDeadzone.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0115C88 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 */

void __fastcall RIMDeadzone::ActivateTelemetrySession(RIMDeadzone *this, int a2)
{
  _DWORD *v2; // rsi
  unsigned __int64 v5; // rcx
  DeadzonePalmTelemetry *v6; // rcx

  v2 = (_DWORD *)*((_QWORD *)this + 7);
  if ( v2 && a2 && *((_DWORD *)this + 4) == 2 )
  {
    v2[1] = 0;
    memset(v2 + 515, 0, 0x2800uLL);
    memset(v2 + 3, 0, 0x800uLL);
    *((_BYTE *)v2 + 12) = 0;
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *v2 = v5;
    v2[2] = v5;
  }
  v6 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
  if ( v6 && !a2 && *((_DWORD *)this + 4) == 2 )
    DeadzonePalmTelemetry::ClearSession(v6);
}
