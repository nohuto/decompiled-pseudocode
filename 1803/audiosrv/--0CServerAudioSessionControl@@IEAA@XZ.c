/*
 * XREFs of ??0CServerAudioSessionControl@@IEAA@XZ @ 0x180004E3C
 * Callers:
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800048E0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002FE5C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
CServerAudioSessionControl *__fastcall CServerAudioSessionControl::CServerAudioSessionControl(
        CServerAudioSessionControl *this)
{
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
  *((_DWORD *)this + 6) = 0;
  ATL::CCriticalSection::CCriticalSection((CServerAudioSessionControl *)((char *)this + 32));
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 84) = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, 0LL);
  }
  return this;
}
