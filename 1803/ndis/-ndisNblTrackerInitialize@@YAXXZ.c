/*
 * XREFs of ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C011C20C
 * Callers:
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_i @ 0x1C0067A44 (WPP_SF_i_ea_1C0067A44.c)
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C00EFF30 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C011C2E0 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 */

void ndisNblTrackerInitialize(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned __int64 v2; // r8
  unsigned __int64 *PoolWithTag; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  ndisNblTrackerReadConfiguration();
  qword_1C0099828 = (__int64)&ndisNblTrackerList;
  ndisNblTrackerList = (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
  KeInitializeSpinLock(&ndisNblTrackerListLock);
  if ( ndisNblTrackerMode >= NdisTrackNblRuntimeCheck )
  {
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = (void *)ExAllocateTimer(ndisNblTrackerWatchdogTimer, 0LL, 8LL);
    if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v4[1] = -1LL;
      v4[0] = 0LL;
      v2 = 10000LL * ndisNblTrackerNblTimeoutMilliseconds;
      if ( v2 > 0x7FFFFFFF )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_i(v1, v0, v2);
        v2 = 0x7FFFFFFFLL;
      }
      ((void (__fastcall *)(void *, __int64, unsigned __int64, _QWORD *))ExSetTimer)(
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp,
        -(__int64)v2,
        v2,
        v4);
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      {
        ndisCalculateIdealNblTrackerHistoryBufferSize();
        PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(
                                            NonPagedPoolNx,
                                            8LL * ndisNblTrackerHistorySize,
                                            0x6B74444Eu);
        ndisNblTrackerHistoryBuffer = PoolWithTag;
        if ( PoolWithTag )
          memset(PoolWithTag, 0, 8LL * ndisNblTrackerHistorySize);
        else
          ndisNblTrackerMode = NdisTrackNblRuntimeCheck;
      }
    }
    else
    {
      ndisNblTrackerMode = NdisTrackNblLogOnly;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_(0xDu, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids);
    }
  }
}
