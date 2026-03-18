/*
 * XREFs of RIMWaitForPriorPnpWorkToComplete @ 0x1C010E850
 * Callers:
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C010E2E0 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

__int64 __fastcall RIMWaitForPriorPnpWorkToComplete(__int64 a1, __int64 a2)
{
  unsigned __int16 i; // r9

  for ( i = 34; ; i = 36 )
  {
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      i,
      (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
      a1,
      a2);
    if ( (*(_DWORD *)(a2 + 184) & 0x10) == 0 )
      break;
    ++*(_DWORD *)(a1 + 1024);
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x23u,
      (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
      a1,
      a2);
    *(_QWORD *)(a1 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    KeWaitForSingleObject(*(PVOID *)(a1 + 1016), UserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 96);
  }
  return WPP_RECORDER_SF_qq(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x25u,
           (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
           a1,
           a2);
}
