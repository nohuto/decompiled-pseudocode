/*
 * XREFs of ApiSetPerformTargetingWithinPwnd @ 0x1C013D298
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01225D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetPerformTargetingWithinPwnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  int v7; // edx

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      126,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsPerformTargetingWithinPwndSupported();
  if ( (int)result >= 0 )
    result = PerformTargetingWithinPwnd(a1, v4, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v7,
             14,
             127,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
