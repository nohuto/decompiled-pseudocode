/*
 * XREFs of ?SetMute@CSystemAudioDeviceOffload@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x14003C370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
        (__int64)&WPP_1c5487218bb03e28dff4809d6fd419ee_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::SetMute", 0x2EBu, v7);
  }
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v7;
}
