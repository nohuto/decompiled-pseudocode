/*
 * XREFs of Display_PCT_PTC @ 0x1C0002A58
 * Callers:
 *     InitAcpiPerfStates @ 0x1C001C13C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C001C2C4 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002830 (WPP_RECORDER_SF_s.c)
 *     DisplayGenAddr @ 0x1C0002BA8 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Display_PCT_PTC(__int64 a1, const char *a2)
{
  const char *v2; // rdi
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
        (_DWORD)a2,
        2,
        95,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x60u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
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
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x62u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
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
               (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
    }
  }
  return result;
}
