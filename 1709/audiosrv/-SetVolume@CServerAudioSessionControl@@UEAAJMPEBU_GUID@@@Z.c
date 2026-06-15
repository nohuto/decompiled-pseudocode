/*
 * XREFs of ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180078400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ValidateAudioLevel @ 0x1800784AC (ValidateAudioLevel.c)
 *     WPP_SF_SSg @ 0x180078EC0 (WPP_SF_SSg.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetVolume(
        CServerAudioSessionControl *this,
        float a2,
        const struct _GUID *a3)
{
  int v3; // edx
  CAudioDGProcess *v6; // rcx
  __int64 v7; // rdx
  double v9; // [rsp+28h] [rbp-20h]

  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = a2;
    WPP_SF_SSg(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, (_DWORD)a3, 0, 0LL, SLOBYTE(v9));
  }
  if ( (unsigned __int8)ValidateAudioLevel(v6) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *))(**((_QWORD **)this + 9) + 312LL))(
             *((_QWORD *)this + 9),
             v7,
             a3);
  AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::SetVolume", 1003, -2147024809);
  return 2147942487LL;
}
