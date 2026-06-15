/*
 * XREFs of WPP_SF_qixd @ 0x180097124
 * Callers:
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x180096890 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qixd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids, 58LL, (__int64 *)va);
}
