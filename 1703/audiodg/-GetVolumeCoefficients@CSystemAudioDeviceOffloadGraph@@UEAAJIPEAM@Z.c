/*
 * XREFs of ?GetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAM@Z @ 0x14003E530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetVolumeCoefficients(
        CSystemAudioDeviceOffloadGraph *this,
        unsigned int a2,
        float *a3)
{
  int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF

  v8 = *(_OWORD *)((char *)this - 120);
  EtwEventActivityIdControl(4LL, &v8);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 10) + 40LL))(
         *((_QWORD *)this + 10),
         a2,
         a3);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_a5f12e58a0d33d0e52fe5d67144dcfb4_Traceguids, v6);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::GetVolumeCoefficients", 0xA7u, v6);
  }
  EtwEventActivityIdControl(4LL, &v8);
  return (unsigned int)v6;
}
