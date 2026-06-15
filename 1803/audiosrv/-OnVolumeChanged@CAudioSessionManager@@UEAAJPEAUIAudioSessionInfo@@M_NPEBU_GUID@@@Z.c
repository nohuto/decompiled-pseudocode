/*
 * XREFs of ?OnVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800B2D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnVolumeChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        float a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids);
  }
  return 0LL;
}
