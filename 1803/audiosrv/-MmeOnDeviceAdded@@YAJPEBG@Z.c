/*
 * XREFs of ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x1800DC450
 * Callers:
 *     s_mmeNotifyDeviceAdded @ 0x1800DC700 (s_mmeNotifyDeviceAdded.c)
 * Callees:
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

__int64 __fastcall MmeOnDeviceAdded(const unsigned __int16 *a1)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_9e638d078ff4336281c180160e3c7edd_Traceguids, a1);
  }
  return 0LL;
}
