/*
 * XREFs of ?SetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z @ 0x14003D760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::SetVolumeCoefficients(
        CSystemAudioDeviceOffload *this,
        unsigned int a2,
        float *a3,
        __int64 *a4,
        enum AUDIO_CURVE_TYPE a5,
        __int64 *a6)
{
  int v9; // ebx
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF

  v11 = *((_OWORD *)this - 3);
  EtwEventActivityIdControl(4LL, &v11);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD, __int64 *))(**((_QWORD **)this + 14) + 32LL))(
         *((_QWORD *)this + 14),
         a2,
         a3,
         (unsigned int)a5,
         a6);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_280372cfd5753b11ae35f7647d6422a5_Traceguids,
        v9);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::SetVolumeCoefficients", 0x269u, v9);
  }
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v9;
}
