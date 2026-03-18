/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C010F4A8
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C000B9F4 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C000BFC8 (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C000C0AC (RIMCloseDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+38h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x16u,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  *(_DWORD *)(a2 + 184) &= ~2u;
  v4 = RIMCloseDev(a2);
  v7 = v4;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    0x13u,
    0x17u,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
    a1,
    a2,
    v7);
  return v4;
}
