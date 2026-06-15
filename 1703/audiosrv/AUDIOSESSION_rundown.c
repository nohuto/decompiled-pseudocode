/*
 * XREFs of AUDIOSESSION_rundown @ 0x1800021A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180002200 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

__int64 __fastcall AUDIOSESSION_rundown(CServerAudioSessionControl *this)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, this);
  }
  result = CServerAudioSessionControl::RemoveClientReference(this);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    return WPP_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             51LL,
             &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
             (unsigned int)result);
  }
  return result;
}
