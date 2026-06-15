/*
 * XREFs of ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x1400630C4
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003EF70 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 */

void __fastcall AEWMILOG_PERFORMANCE(__int64 a1, void *a2, __int64 a3, char a4)
{
  _QWORD v4[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v4, 0, 80);
    HIDWORD(v4[5]) = 0x20000;
    LOWORD(v4[0]) = 80;
    v4[6] = 0LL;
    LODWORD(v4[7]) = 0;
    *(_OWORD *)&v4[3] = AEWMIGUID_PERFORMANCE;
    BYTE5(v4[0]) = 4;
    BYTE4(v4[0]) = a4;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v4);
  }
}
