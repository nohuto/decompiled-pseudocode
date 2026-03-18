/*
 * XREFs of ?_DiscardOldTouchPackets@PalmTelemetry@@AEAAXK@Z @ 0x1C0116F98
 * Callers:
 *     ?_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z @ 0x1C0117024 (-_ProcessPenPacket@PalmTelemetry@@AEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@KH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PalmTelemetry::_DiscardOldTouchPackets(PalmTelemetry *this, int a2)
{
  unsigned int v2; // r10d
  int v3; // r8d
  __int64 v4; // r11

  v2 = *((_DWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = (*((_DWORD *)this + 6) - v3 + v2 - 1) % 0x1AA;
      if ( (unsigned int)(a2 - *((_DWORD *)this + 6 * v4 + 525)) > 0x1F4 )
        break;
      if ( ++v3 >= v2 )
        return;
    }
    *((_DWORD *)this + 3) = v3;
    *((_DWORD *)this + 6) = ((int)v4 + 1) % 0x1AAu;
  }
}
