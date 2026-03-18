/*
 * XREFs of ApiSetEditionImmActivateThreadsLayout @ 0x1C013A218
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C00725C0 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xFEu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionImmActivateThreadsLayoutSupported() >= 0 )
    v4 = EditionImmActivateThreadsLayout(a1, 0LL, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xFFu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v4;
}
