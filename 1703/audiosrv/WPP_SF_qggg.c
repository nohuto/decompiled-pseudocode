/*
 * XREFs of WPP_SF_qggg @ 0x180087ADC
 * Callers:
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180086C70 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qggg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, 25LL, (__int64 *)va);
}
