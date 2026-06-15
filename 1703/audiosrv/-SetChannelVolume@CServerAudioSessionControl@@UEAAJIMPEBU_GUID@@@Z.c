/*
 * XREFs of ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z @ 0x180091BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdg @ 0x1800877E4 (WPP_SF_Sdg.c)
 *     ValidateAudioLevel @ 0x180090594 (ValidateAudioLevel.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetChannelVolume(
        CServerAudioSessionControl *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  __int64 v7; // r8
  unsigned int v9; // [rsp+20h] [rbp-28h]
  double v10; // [rsp+28h] [rbp-20h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v10 = a3;
    v9 = a2;
    WPP_SF_Sdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x20u,
      (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
      0LL);
  }
  if ( ValidateAudioLevel(a3) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct _GUID *, unsigned int, double))(**((_QWORD **)this + 9) + 352LL))(
             *((_QWORD *)this + 9),
             a2,
             v7,
             a4,
             v9,
             COERCE_DOUBLE(*(_QWORD *)&v10));
  AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::SetChannelVolume", 1190, -2147024809);
  return 2147942487LL;
}
