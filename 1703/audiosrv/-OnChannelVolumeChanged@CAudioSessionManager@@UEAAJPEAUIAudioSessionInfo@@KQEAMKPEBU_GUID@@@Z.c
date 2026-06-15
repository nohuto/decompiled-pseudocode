/*
 * XREFs of ?OnChannelVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180094070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnChannelVolumeChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        float *const a4)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids);
  }
  return 0LL;
}
