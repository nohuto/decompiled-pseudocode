/*
 * XREFs of WPP_SF_Ds @ 0x140037314
 * Callers:
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140036E5C (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400381F0 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 *     ?GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140038500 (-GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z @ 0x140038610 (-GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140038720 (-GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputCon.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140038840 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003B490 (-CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVI.c)
 *     ?GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14003B7D0 (-GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z @ 0x14003B910 (-GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14003BD10 (-GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputContr.c)
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003BFE0 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Ds(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(a5 + v5) );
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, &v7);
}
