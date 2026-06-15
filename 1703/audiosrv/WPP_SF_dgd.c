/*
 * XREFs of WPP_SF_dgd @ 0x180090AA4
 * Callers:
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180090370 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dgd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, 152LL, &v5);
}
