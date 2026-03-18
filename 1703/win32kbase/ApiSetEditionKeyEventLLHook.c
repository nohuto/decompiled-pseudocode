/*
 * XREFs of ApiSetEditionKeyEventLLHook @ 0x1C004DD10
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionKeyEventLLHook(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        char a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  unsigned __int16 v14; // bp
  unsigned int v16; // ebx
  __int16 v17; // dx
  int v19; // [rsp+20h] [rbp-58h]

  v14 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      274,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v16 = 0;
  if ( (int)IsEditionKeyEventLLHookSupported() >= 0 )
  {
    LOBYTE(v19) = a5;
    v16 = EditionKeyEventLLHook(a1, v14, a3, a4, v19, a6, a7, a8, a9, a10, a11, a12);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      14,
      275,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v16;
}
