/*
 * XREFs of ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180091E00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ValidateAudioLevel @ 0x180090594 (ValidateAudioLevel.c)
 *     WPP_SF_SSg @ 0x1800927E0 (WPP_SF_SSg.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetVolume(
        CServerAudioSessionControl *this,
        float a2,
        const struct _GUID *a3)
{
  int v3; // edx
  __int64 v6; // rdx
  double v8; // [rsp+28h] [rbp-20h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = a2;
    WPP_SF_SSg(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, (_DWORD)a3, 0, 0LL, SLOBYTE(v8));
  }
  if ( ValidateAudioLevel(a2) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *))(**((_QWORD **)this + 9) + 320LL))(
             *((_QWORD *)this + 9),
             v6,
             a3);
  AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::SetVolume", 1003, -2147024809);
  return 2147942487LL;
}
