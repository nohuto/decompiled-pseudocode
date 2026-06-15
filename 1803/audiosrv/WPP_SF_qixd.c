/*
 * XREFs of WPP_SF_qixd @ 0x1800B6B20
 * Callers:
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800B60F0 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qixd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids, 50LL, (__int64 *)va);
}
