/*
 * XREFs of ApiSetEditionGetAppImeCompatFlags @ 0x1C0139D94
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C012D678 (NlsKbdSendIMEProc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetAppImeCompatFlags(__int64 a1)
{
  unsigned int AppImeCompatFlags; // ebx

  AppImeCompatFlags = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x108u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionGetAppImeCompatFlagsSupported() >= 0 )
    AppImeCompatFlags = EditionGetAppImeCompatFlags(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x109u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return AppImeCompatFlags;
}
