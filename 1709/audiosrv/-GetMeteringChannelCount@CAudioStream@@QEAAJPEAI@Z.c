/*
 * XREFs of ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x18007C934
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x180071630 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x180071E30 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioStream::GetMeteringChannelCount(CAudioStream *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x27u,
      (__int64)&WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
      *((_DWORD *)this + 22));
  }
  *a2 = *((_DWORD *)this + 22);
  return 0LL;
}
