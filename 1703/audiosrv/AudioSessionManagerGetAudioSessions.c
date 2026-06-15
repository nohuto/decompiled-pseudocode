/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x180094870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  int v8; // ebx

  v4 = *a1;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x45u, (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, *v4);
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v4[1] + 112LL))(v4[1]) )
    v8 = -2147024891;
  else
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)*v4 + 136LL))(
           *v4,
           v4[1],
           a2,
           a3,
           a4);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x46u, (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, v8);
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetAudioSessions", 2061, v8);
  return (unsigned int)v8;
}
