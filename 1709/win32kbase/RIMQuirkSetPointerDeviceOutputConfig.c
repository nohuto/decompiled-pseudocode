/*
 * XREFs of RIMQuirkSetPointerDeviceOutputConfig @ 0x1C0115BF4
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutputConfig@@PEAUCRegionConfig@@@Z @ 0x1C0090768 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C01060B0 (RIMGetMonitorPhysicalSize.c)
 *     ApiSetUseDisplaySizeFromRegistry @ 0x1C013D460 (ApiSetUseDisplaySizeFromRegistry.c)
 */

_OWORD *__fastcall RIMQuirkSetPointerDeviceOutputConfig(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  _OWORD *result; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&v7 = 0LL;
  if ( (unsigned int)ApiSetUseDisplaySizeFromRegistry(&v7) )
  {
    v4 = v7;
  }
  else
  {
    v4 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    v7 = v4;
  }
  *(_OWORD *)(a2 + 160) = v4;
  result = (_OWORD *)RIMGetMonitorPhysicalSize((__int64)v6, *(_QWORD *)(a1 + 784));
  *(_OWORD *)(a2 + 176) = *result;
  return result;
}
