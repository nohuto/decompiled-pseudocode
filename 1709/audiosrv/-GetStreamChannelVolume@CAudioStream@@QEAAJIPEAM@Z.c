/*
 * XREFs of ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x18007CA3C
 * Callers:
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x18008B610 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 */

__int64 __fastcall CAudioStream::GetStreamChannelVolume(CAudioStream *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
      this,
      a2);
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 21) )
  {
    result = 0LL;
    *a3 = *(float *)(*((_QWORD *)this + 14) + 4 * v4);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetStreamChannelVolume", 1274, -2147024809);
    return 2147942487LL;
  }
  return result;
}
