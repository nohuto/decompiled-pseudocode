/*
 * XREFs of ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180018DB0
 * Callers:
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x1800171B0 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 * Callees:
 *     WPP_SF_qdd @ 0x180077200 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::AddClientReference(CAudioSession *this, char a2)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 100);
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)this + 101);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      91LL,
      &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      this,
      *((_DWORD *)this + 100),
      *((_DWORD *)this + 101));
  }
  return 0LL;
}
