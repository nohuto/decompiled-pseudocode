/*
 * XREFs of ApiSetEditionRawInputRequestedForKeyboard @ 0x1C013B5BC
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C012F200 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionRawInputRequestedForKeyboard(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x112u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionRawInputRequestedForKeyboardSupported() >= 0 )
    v2 = EditionRawInputRequestedForKeyboard(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x113u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v2;
}
