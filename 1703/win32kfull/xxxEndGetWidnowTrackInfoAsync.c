/*
 * XREFs of xxxEndGetWidnowTrackInfoAsync @ 0x1C00B2DE0
 * Callers:
 *     xxxProcessAsyncSendMessage @ 0x1C00CD168 (xxxProcessAsyncSendMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C00B2ED0 (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxEndGetWidnowTrackInfoAsync(__int64 a1)
{
  _BYTE v3[40]; // [rsp+20h] [rbp-38h] BYREF

  xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v3, 0LL, 0);
  return xxxNotifyShellTrackedWindowTrackingInfo(a1, v3);
}
