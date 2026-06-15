/*
 * XREFs of WPP_SF_qgg @ 0x1800A5248
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18004DA80 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qgg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, 32LL, (__int64 *)va);
}
