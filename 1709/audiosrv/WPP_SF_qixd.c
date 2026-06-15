/*
 * XREFs of WPP_SF_qixd @ 0x18007DC58
 * Callers:
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x18007D370 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qixd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids, 57LL, (__int64 *)va);
}
