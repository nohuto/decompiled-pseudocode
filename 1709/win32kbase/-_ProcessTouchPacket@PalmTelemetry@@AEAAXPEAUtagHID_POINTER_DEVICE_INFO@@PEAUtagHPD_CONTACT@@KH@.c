/*
 * XREFs of ?_ProcessTouchPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1C0115FE8
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C0115CE0 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C011633C (-_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 */

void __fastcall PalmTelemetry::_ProcessTouchPacket(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        __int64 a4,
        int a5)
{
  int v5; // r9d
  int v6; // eax

  if ( !*((_DWORD *)this + 1) )
  {
    v5 = 0;
    v6 = 0;
    if ( a5 )
    {
      v5 = (*((_DWORD *)a3 + 601) >> 2) & 1;
    }
    else
    {
      if ( (*((_DWORD *)a3 + 601) & 4) != 0 )
        return;
      v6 = 1;
    }
    if ( v5 || v6 )
      PalmTelemetry::_TryBuffer(this, a3);
  }
}
