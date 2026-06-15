/*
 * XREFs of ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x1800B595C
 * Callers:
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x1800C1160 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 */

__int64 __fastcall CAudioStream::GetStreamChannelVolume(CAudioStream *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
      this,
      a2);
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 23) )
  {
    result = 0LL;
    *a3 = *(float *)(*((_QWORD *)this + 14) + 4 * v4);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetStreamChannelVolume", 1368, -2147024809);
    return 2147942487LL;
  }
  return result;
}
