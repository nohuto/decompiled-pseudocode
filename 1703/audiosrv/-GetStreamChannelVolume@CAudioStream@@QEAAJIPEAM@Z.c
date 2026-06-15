/*
 * XREFs of ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x18009600C
 * Callers:
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x1800A07F0 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 */

__int64 __fastcall CAudioStream::GetStreamChannelVolume(CAudioStream *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x22u,
      (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids,
      this,
      a2);
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 22) )
  {
    result = 0LL;
    *a3 = *(float *)(*((_QWORD *)this + 14) + 4 * v4);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetStreamChannelVolume", 1328, -2147024809);
    return 2147942487LL;
  }
  return result;
}
