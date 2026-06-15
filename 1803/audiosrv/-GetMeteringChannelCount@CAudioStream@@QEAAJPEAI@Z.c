/*
 * XREFs of ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x1800B5850
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800A9810 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800A9F90 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioStream::GetMeteringChannelCount(CAudioStream *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      37LL,
      &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
      *((unsigned int *)this + 24));
  }
  *a2 = *((_DWORD *)this + 24);
  return 0LL;
}
