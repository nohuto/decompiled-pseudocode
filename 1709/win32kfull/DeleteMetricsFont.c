/*
 * XREFs of DeleteMetricsFont @ 0x1C00825A0
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C007810C (GetScaledLogFontForDpi.c)
 *     ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C0082568 (-ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C0082EEC (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01A11E4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x1C00822BC (GreMarkDeletableFont.c)
 */

__int64 __fastcall DeleteMetricsFont(struct HLFONT__ *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    GreMarkDeletableFont(a1);
    return GreDeleteObject(a1);
  }
  return result;
}
