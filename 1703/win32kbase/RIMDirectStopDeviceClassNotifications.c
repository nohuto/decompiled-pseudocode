/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1C0096010
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C004FAD0 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0053FC0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0093B28 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
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
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    117,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
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
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x76u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v8);
  return v4;
}
