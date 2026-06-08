/*
 * XREFs of Display_PCT_PTC @ 0x1C00036E8
 * Callers:
 *     InitAcpiPerfStates @ 0x1C002674C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0026A7C (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002614 (WPP_RECORDER_SF_s.c)
 *     DisplayGenAddr @ 0x1C00043A0 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_PCT_PTC(__int64 a1, const char *a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x5Fu,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x60u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          a2);
    }
    DisplayGenAddr(a1, "  ");
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x61u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x62u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          a2);
    }
    result = DisplayGenAddr(a1 + 12, "  ");
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x63u,
               (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
  }
  return result;
}
