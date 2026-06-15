/*
 * XREFs of ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x1800146F0
 * Callers:
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180020FE0 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 * Callees:
 *     WPP_SF_qdd @ 0x180090C54 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::AddClientReference(CAudioSession *this, char a2)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 118);
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)this + 119);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      98LL,
      &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      this,
      *((_DWORD *)this + 118),
      *((_DWORD *)this + 119));
  }
  return 0LL;
}
