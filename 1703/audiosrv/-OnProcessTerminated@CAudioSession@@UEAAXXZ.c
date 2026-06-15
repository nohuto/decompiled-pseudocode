/*
 * XREFs of ?OnProcessTerminated@CAudioSession@@UEAAXXZ @ 0x180014540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::OnProcessTerminated(CAudioSession *this)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 102LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, this);
  }
  CAudioSession::PostStateCheckExpirationWork_VerifyLifetime(this);
}
