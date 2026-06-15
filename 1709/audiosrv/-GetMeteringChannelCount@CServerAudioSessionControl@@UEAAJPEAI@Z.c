/*
 * XREFs of ?GetMeteringChannelCount@CServerAudioSessionControl@@UEAAJPEAI@Z @ 0x1800776A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetMeteringChannelCount(
        CServerAudioSessionControl *this,
        unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 384LL))(
           *((_QWORD *)this + 9),
           a2);
}
