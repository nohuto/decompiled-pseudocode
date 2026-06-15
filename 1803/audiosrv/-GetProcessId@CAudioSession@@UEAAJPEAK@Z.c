/*
 * XREFs of ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800051F0
 * Callers:
 *     ?FindUniqueNonNullAudioSession@CAudioSessionManager@@IEAAJPEAPEAVCAudioSession@@K@Z @ 0x18000431C (-FindUniqueNonNullAudioSession@CAudioSessionManager@@IEAAJPEAPEAVCAudioSession@@K@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetProcessId(CAudioSession *this, unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // ecx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      *((_QWORD *)this + 91));
  }
  v4 = *((_DWORD *)this + 180);
  if ( v4 )
    v5 = *((_DWORD *)this + 69);
  else
    v5 = *((_DWORD *)this + 178);
  *a2 = v5;
  return v4 != 0 ? 0x889000D : 0;
}
