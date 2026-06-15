/*
 * XREFs of ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z @ 0x180078210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_Sdg @ 0x18006B964 (WPP_SF_Sdg.c)
 *     ValidateAudioLevel @ 0x1800784AC (ValidateAudioLevel.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetChannelVolume(
        CServerAudioSessionControl *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  CAudioDGProcess *v7; // rcx
  __int64 v8; // r8
  unsigned int v10; // [rsp+20h] [rbp-28h]
  double v11; // [rsp+28h] [rbp-20h]

  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = a3;
    v10 = a2;
    WPP_SF_Sdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x20u,
      (__int64)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
      0LL);
  }
  if ( (unsigned __int8)ValidateAudioLevel(v7) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct _GUID *, unsigned int, double))(**((_QWORD **)this + 9) + 344LL))(
             *((_QWORD *)this + 9),
             a2,
             v8,
             a4,
             v10,
             COERCE_DOUBLE(*(_QWORD *)&v11));
  AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::SetChannelVolume", 1190, -2147024809);
  return 2147942487LL;
}
