/*
 * XREFs of ?OnChannelVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x18007A4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnChannelVolumeChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        float *const a4)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, (__int64)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids);
  }
  return 0LL;
}
