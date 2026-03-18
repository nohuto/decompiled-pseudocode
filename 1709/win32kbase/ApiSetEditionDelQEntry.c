/*
 * XREFs of ApiSetEditionDelQEntry @ 0x1C01396B4
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011ACDC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionDelQEntry(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x9Cu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsEditionDelQEntrySupported();
  if ( (int)result >= 0 )
    result = EditionDelQEntry(a1, a2, 1LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0x9Du,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}
