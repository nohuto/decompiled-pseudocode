/*
 * XREFs of rimSetupPalmTelemetry @ 0x1C009B674
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01162DC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PalmTelemetry *v2; // rax
  PalmTelemetry *v3; // rbx

  if ( !*(_QWORD *)(a1 + 968) )
  {
    v2 = (PalmTelemetry *)Win32AllocPoolZInit(0x3010uLL, 1986358098LL);
    v3 = v2;
    if ( v2 )
    {
      PalmTelemetry::_ResetTelemetryData(v2);
      *((_DWORD *)v3 + 4) = 0;
      *(_DWORD *)v3 = 0;
      *((_DWORD *)v3 + 1) = 0;
      *(_QWORD *)(a1 + 968) = v3;
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0xBu,
        (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
    }
  }
}
