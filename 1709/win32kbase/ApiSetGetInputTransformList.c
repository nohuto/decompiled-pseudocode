/*
 * XREFs of ApiSetGetInputTransformList @ 0x1C013BFC0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01212B0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetGetInputTransformList(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int InputTransformList; // ebx
  __int64 v9; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x76u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  InputTransformList = 0;
  if ( (int)IsGetInputTransformListSupported() >= 0 )
  {
    LOBYTE(v9) = 1;
    InputTransformList = GetInputTransformList(a1, a2, a3, v9, a5);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x77u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return InputTransformList;
}
