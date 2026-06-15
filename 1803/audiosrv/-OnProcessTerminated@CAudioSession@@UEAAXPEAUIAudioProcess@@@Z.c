/*
 * XREFs of ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x1800ABD20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::OnProcessTerminated(struct _TP_WORK **this, struct IAudioProcess *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 83LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this);
  }
  CAudioSession::PostStateCheckExpirationWork_VerifyLifetime(this);
}
