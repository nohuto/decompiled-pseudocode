/*
 * XREFs of ApiSetEditionIsCompositionInputWindow @ 0x1C0049760
 * Callers:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0047F3C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsCompositionInputWindow(__int64 a1)
{
  unsigned int IsCompositionInputWindow; // ebx

  IsCompositionInputWindow = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      22,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsEditionIsCompositionInputWindowSupported() >= 0 )
    IsCompositionInputWindow = EditionIsCompositionInputWindow(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      23,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return IsCompositionInputWindow;
}
