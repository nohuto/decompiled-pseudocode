/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14003B680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::PumpPaused(CSystemAudioDeviceSharedBase *this)
{
  int v2; // ebx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_OWORD *)this - 3);
  EtwEventActivityIdControl(4LL, &v4);
  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 37) + 152LL))((char *)this - 296);
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
        v2);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::PumpPaused", 0x2A3u, v2);
  }
  EtwEventActivityIdControl(4LL, &v4);
  return (unsigned int)v2;
}
