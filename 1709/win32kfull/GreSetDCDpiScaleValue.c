/*
 * XREFs of GreSetDCDpiScaleValue @ 0x1C027A4C4
 * Callers:
 *     GreScalingDispatchEscape @ 0x1C027A3D0 (GreScalingDispatchEscape.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C024C000 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall GreSetDCDpiScaleValue(HDC a1, int a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    DC::vSetDpiScaling(
      v3[0],
      _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)a2), (__m128)COERCE_UNSIGNED_INT((float)a2)).m128_i64[0]);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
}
