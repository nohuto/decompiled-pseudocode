/*
 * XREFs of AUDIOVOLUMECONTROL_rundown @ 0x180088A90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

__int64 __fastcall AUDIOVOLUMECONTROL_rundown(__int64 a1)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids, a1);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
}
