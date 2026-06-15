/*
 * XREFs of ?GetMeterChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z @ 0x14003BA20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetMeterChannelCount(CSystemAudioDeviceOffload *this, unsigned int *a2)
{
  int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v6 = *((_OWORD *)this - 4);
  EtwEventActivityIdControl(4LL, &v6);
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14), a2);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x15u,
        (__int64)&WPP_1c5487218bb03e28dff4809d6fd419ee_Traceguids,
        v4);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::GetMeterChannelCount", 0x34Cu, v4);
  }
  EtwEventActivityIdControl(4LL, &v6);
  return (unsigned int)v4;
}
