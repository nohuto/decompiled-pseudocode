/*
 * XREFs of WPP_SF_qq @ 0x1400424CC
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000CC90 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids, a2, (__int64 *)va);
}
