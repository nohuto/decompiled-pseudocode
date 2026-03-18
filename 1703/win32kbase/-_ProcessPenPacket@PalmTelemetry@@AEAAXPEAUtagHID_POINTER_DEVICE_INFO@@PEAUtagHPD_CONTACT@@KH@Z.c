/*
 * XREFs of ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1C0117024
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C0116DE8 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     ?_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C0116F34 (-_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 *     ?_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z @ 0x1C0116F98 (-_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z.c)
 */

void __fastcall PalmTelemetry::_ProcessPenPacket(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        int a4)
{
  int v4; // esi

  v4 = 0;
  if ( (*((_DWORD *)a3 + 601) & 2) != 0 )
  {
    if ( *(_DWORD *)this == 1 )
    {
      v4 = 1;
    }
    else
    {
      if ( !*(_DWORD *)this )
      {
        PalmTelemetry::_DiscardOldTouchPackets(this, a4);
        if ( *((_DWORD *)this + 3) )
          *((_DWORD *)this + 519) = a4 - *((_DWORD *)this + 6 * *((unsigned int *)this + 6) + 525);
        else
          *((_DWORD *)this + 519) = 0;
      }
      *((_DWORD *)this + 5) = 0;
      *(_DWORD *)this = 1;
    }
  }
  else
  {
    *((_DWORD *)this + 5) = a4;
    *(_DWORD *)this = 2;
  }
  if ( !*((_DWORD *)this + 1) )
  {
    PalmTelemetry::_BufferPenPacket(this, (__int64)a3);
    *((_DWORD *)this + 2) = v4;
  }
}
