/*
 * XREFs of WPP_SF_ii @ 0x1800C6680
 * Callers:
 *     ?GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z @ 0x1800C1410 (-GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_ii(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, 41LL, (__int64 *)va);
}
