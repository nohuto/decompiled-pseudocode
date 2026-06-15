/*
 * XREFs of WPP_SF_Sdg @ 0x18006B964
 * Callers:
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x180069CC0 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180072FA0 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z @ 0x180075B00 (-SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800777F0 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z @ 0x180078210 (-SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sdg(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
