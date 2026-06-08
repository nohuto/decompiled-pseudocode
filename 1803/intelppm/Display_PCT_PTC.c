/*
 * XREFs of Display_PCT_PTC @ 0x1C0002944
 * Callers:
 *     InitAcpiPerfStates @ 0x1C0021124 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C00212B4 (InitAcpiThrottleStates.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C0002B38 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_s @ 0x1C000374C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Display_PCT_PTC(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // edx
  __int64 result; // rax
  int v6; // edx

  if ( a1 )
  {
    v2 = a2;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        2,
        95,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_s(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        2,
        96,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
        v2);
    }
    DisplayGenAddr(a1, "  ");
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        2,
        97,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_s(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        2,
        98,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
        v2);
    }
    result = DisplayGenAddr(a1 + 12, "  ");
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v6) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v6,
               2,
               99,
               (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    }
  }
  return result;
}
