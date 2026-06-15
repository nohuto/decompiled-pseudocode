/*
 * XREFs of ?GetAllVolumes@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800AE720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetAllVolumes(
        CServerAudioSessionControl *this,
        unsigned int a2,
        float *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 9) + 376LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
