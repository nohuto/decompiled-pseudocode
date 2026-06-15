/*
 * XREFs of ?GetMute@CSystemAudioDeviceOffloadGraph@@UEAAJPEAE@Z @ 0x14003CFC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetMute(CSystemAudioDeviceOffloadGraph *this, unsigned __int8 *a2)
{
  int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v6 = *((_OWORD *)this - 8);
  EtwEventActivityIdControl(4LL, &v6);
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**((_QWORD **)this + 10) + 32LL))(
         *((_QWORD *)this + 10),
         a2);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_15ea582e738f3272a62e13fe333fda5a_Traceguids, v4);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::GetMute", 0x12Bu, v4);
  }
  EtwEventActivityIdControl(4LL, &v6);
  return (unsigned int)v4;
}
