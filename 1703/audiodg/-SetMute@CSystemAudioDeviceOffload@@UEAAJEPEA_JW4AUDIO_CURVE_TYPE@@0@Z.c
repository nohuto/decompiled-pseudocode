/*
 * XREFs of ?SetMute@CSystemAudioDeviceOffload@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x14003D680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::SetMute(
        CSystemAudioDeviceOffload *this,
        char a2,
        __int64 *a3,
        enum AUDIO_CURVE_TYPE a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v9 = *(_OWORD *)((char *)this - 56);
  EtwEventActivityIdControl(4LL, &v9);
  LOBYTE(v6) = a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14), v6);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_280372cfd5753b11ae35f7647d6422a5_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::SetMute", 0x2EBu, v7);
  }
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v7;
}
