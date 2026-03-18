/*
 * XREFs of ApiSetEditionGetThreadPointerHookData @ 0x1C0139FFC
 * Callers:
 *     ?GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0121960 (-GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetThreadPointerHookData(__int64 a1, unsigned __int16 a2)
{
  __int64 ThreadPointerHookData; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xA2u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  ThreadPointerHookData = 0LL;
  if ( (int)IsEditionGetThreadPointerHookDataSupported() >= 0 )
    ThreadPointerHookData = EditionGetThreadPointerHookData(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xA3u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return ThreadPointerHookData;
}
