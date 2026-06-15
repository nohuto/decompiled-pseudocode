/*
 * XREFs of ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14003F960
 * Callers:
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400450B4 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::GetPlaybackProtectionApo(CPipeInstance *this, struct IAudioProcessingObject **a2)
{
  int v2; // ebx

  *a2 = 0LL;
  v2 = -2147467263;
  if ( !*((_QWORD *)this + 22)
    || (v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioProcessingObject **))this + 22))(
               *((_QWORD *)this + 22),
               &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
               a2),
        v2 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Fu,
        (__int64)&WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::GetPlaybackProtectionApo", 0x1057u, v2);
  }
  return (unsigned int)v2;
}
