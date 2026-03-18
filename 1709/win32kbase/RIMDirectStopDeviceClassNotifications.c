/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1C009E5A0
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C001A520 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0009DB8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016C80 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMDirectStopDeviceClassNotifications(char *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  char *v5; // rdi
  unsigned int v6; // eax
  unsigned int v8; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x75u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v3 = 0;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    do
    {
      v6 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v5, v3++);
      v4 = v6;
    }
    while ( v3 <= 2 );
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v5 + 96));
    ObfDereferenceObject(v5);
  }
  v8 = v4;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x76u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v8);
  return v4;
}
