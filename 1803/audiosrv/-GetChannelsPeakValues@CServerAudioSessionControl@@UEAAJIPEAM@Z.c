/*
 * XREFs of ?GetChannelsPeakValues@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800AE890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetChannelsPeakValues(
        CServerAudioSessionControl *this,
        unsigned int a2,
        float *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 9) + 400LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
