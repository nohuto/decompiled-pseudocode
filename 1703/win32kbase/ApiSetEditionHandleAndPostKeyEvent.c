/*
 * XREFs of ApiSetEditionHandleAndPostKeyEvent @ 0x1C004DF04
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleAndPostKeyEvent(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        int a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int16 a14)
{
  __int64 v16; // rbx
  unsigned int v18; // edi
  int v19; // edx
  int v21; // [rsp+20h] [rbp-68h]

  v16 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      276,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v18 = 0;
  if ( (int)IsEditionHandleAndPostKeyEventSupported() >= 0 )
  {
    LOBYTE(v21) = a5;
    v18 = EditionHandleAndPostKeyEvent(a1, v16, a3, a4, v21, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v19,
      14,
      277,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v18;
}
