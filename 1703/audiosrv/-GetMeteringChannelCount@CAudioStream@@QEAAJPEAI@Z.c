/*
 * XREFs of ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x180095CF8
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x18008BCE0 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x18008C550 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioStream::GetMeteringChannelCount(CAudioStream *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x28u,
      (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids,
      *((_DWORD *)this + 23));
  }
  *a2 = *((_DWORD *)this + 23);
  return 0LL;
}
