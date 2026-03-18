/*
 * XREFs of ApiSetEditionIsSAS @ 0x1C00983D8
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C004E340 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsSAS(char a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int IsSAS; // ebx
  int v5; // edx
  __int64 v6; // rcx

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      250,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  IsSAS = 0;
  if ( (int)IsEditionIsSASSupported() >= 0 )
  {
    LOBYTE(v6) = a1;
    IsSAS = EditionIsSAS(v6, v2);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      14,
      251,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return IsSAS;
}
