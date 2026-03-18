/*
 * XREFs of ApiSetEditionHandleRawInput @ 0x1C004E024
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleRawInput(
        unsigned int a1,
        unsigned int a2,
        char a3,
        char a4,
        int a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        int a9,
        __int64 a10)
{
  unsigned int v12; // ebp
  unsigned int v14; // ebx
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // r9

  v12 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      270,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v14 = 0;
  if ( (int)IsEditionHandleRawInputSupported() >= 0 )
  {
    LOBYTE(v17) = a4;
    LOBYTE(v16) = a3;
    v14 = EditionHandleRawInput(a1, v12, v16, v17, a5, a6, a7, a8, a9, a10);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      14,
      271,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v14;
}
