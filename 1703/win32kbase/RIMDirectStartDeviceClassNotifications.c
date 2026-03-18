/*
 * XREFs of RIMDirectStartDeviceClassNotifications @ 0x1C009A540
 * Callers:
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C009A3C0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0093588 (RIMDiscoverDevicesOfInputType.c)
 */

__int64 __fastcall RIMDirectStartDeviceClassNotifications(char *a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // esi
  char *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    119,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    *((_QWORD *)v5 + 14) = v2;
    *((_QWORD *)v5 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 96, 0LL);
    KeLeaveCriticalRegion();
    RIMDiscoverDevicesOfInputType(v5);
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x78u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v7);
  return (unsigned int)v4;
}
