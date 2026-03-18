/*
 * XREFs of ApiSetEditionPostMouseWheelToForeground @ 0x1C013BEE4
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostMouseWheelToForeground(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8,
        __int64 *a9)
{
  __int64 v11; // rsi
  __int64 result; // rax
  int v14; // edx
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h] BYREF

  v11 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      46,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionPostMouseWheelToForegroundSupported();
  if ( (int)result >= 0 )
  {
    v16 = 0LL;
    if ( a8 )
      v16 = *a8;
    v15 = 0LL;
    if ( a9 )
      v15 = *a9;
    result = EditionPostMouseWheelToForeground(
               a1,
               v11,
               a3,
               a4,
               a5,
               a6,
               a7,
               (unsigned __int64)&v16 & -(__int64)(a8 != 0LL),
               (unsigned __int64)&v15 & -(__int64)(a9 != 0LL));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v14,
             14,
             47,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
