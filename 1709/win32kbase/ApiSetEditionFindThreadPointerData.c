/*
 * XREFs of ApiSetEditionFindThreadPointerData @ 0x1C0004570
 * Callers:
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0004480 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0007400 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01198A0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionFindThreadPointerData(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // di
  __int64 ThreadPointerData; // rbx
  __int16 v5; // dx

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      140,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  ThreadPointerData = 0LL;
  if ( (int)IsEditionFindThreadPointerDataSupported() >= 0 )
    ThreadPointerData = EditionFindThreadPointerData(a1, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      14,
      141,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  return ThreadPointerData;
}
