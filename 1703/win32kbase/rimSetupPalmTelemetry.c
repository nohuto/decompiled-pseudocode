/*
 * XREFs of rimSetupPalmTelemetry @ 0x1C0007488
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01173D0 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PalmTelemetry *v2; // rax
  int v3; // edx
  PalmTelemetry *v4; // rbx

  if ( !*(_QWORD *)(a1 + 968) )
  {
    v2 = (PalmTelemetry *)Win32AllocPoolZInit(0x3010uLL);
    v4 = v2;
    if ( v2 )
    {
      PalmTelemetry::_ResetTelemetryData(v2);
      *((_DWORD *)v4 + 4) = 0;
      *(_DWORD *)v4 = 0;
      *((_DWORD *)v4 + 1) = 0;
      *(_QWORD *)(a1 + 968) = v4;
    }
    else
    {
      LOBYTE(v3) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        18,
        11,
        (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
    }
  }
}
