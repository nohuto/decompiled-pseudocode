/*
 * XREFs of RIMDirectStartDeviceClassNotifications @ 0x1C00A5880
 * Callers:
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5710 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0009818 (RIMDiscoverDevicesOfInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMDirectStartDeviceClassNotifications(char *a1, __int64 a2)
{
  int v4; // esi
  unsigned int *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x77u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (unsigned int *)Object;
    RIMLockExclusive((__int64)Object + 96);
    *((_QWORD *)v5 + 14) = a2;
    *((_QWORD *)v5 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 24, 0LL);
    KeLeaveCriticalRegion();
    RIMDiscoverDevicesOfInputType(v5);
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x78u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v7);
  return (unsigned int)v4;
}
