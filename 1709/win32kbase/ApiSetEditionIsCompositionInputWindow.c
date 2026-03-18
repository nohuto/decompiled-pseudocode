/*
 * XREFs of ApiSetEditionIsCompositionInputWindow @ 0x1C0017B70
 * Callers:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C00172B8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0124780 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsCompositionInputWindow(__int64 a1)
{
  unsigned int IsCompositionInputWindow; // ebx

  IsCompositionInputWindow = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x1Au,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionIsCompositionInputWindowSupported() >= 0 )
    IsCompositionInputWindow = EditionIsCompositionInputWindow(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x1Bu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return IsCompositionInputWindow;
}
