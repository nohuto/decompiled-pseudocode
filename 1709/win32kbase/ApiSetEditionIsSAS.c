/*
 * XREFs of ApiSetEditionIsSAS @ 0x1C00A2508
 * Callers:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00120C0 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsSAS(char a1, __int64 a2)
{
  unsigned int IsSAS; // ebx
  __int64 v5; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x106u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  IsSAS = 0;
  if ( (int)IsEditionIsSASSupported() >= 0 )
  {
    LOBYTE(v5) = a1;
    IsSAS = EditionIsSAS(v5, a2);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x107u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return IsSAS;
}
