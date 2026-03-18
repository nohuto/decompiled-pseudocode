/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C00A5230
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C00A5180 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012C980 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMQueryDev @ 0x1C0008CD8 (RIMQueryDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(char *a1, char *a2)
{
  int v4; // ebx
  _BYTE *v5; // rdi
  PVOID v6; // rsi
  char *v7; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x6Cu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    RIMLockExclusive((__int64)(v5 + 696));
    if ( v5[73] || v5[75] )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x6Du,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      v4 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v4 >= 0 )
      {
        v6 = Object;
        if ( Object )
          v7 = (char *)Object + 64;
        else
          v7 = 0LL;
        if ( v7[48] == 2 )
          v4 = -1073741811;
        else
          v4 = RIMQueryDev((__int64)v5, (__int64)v7);
        ObfDereferenceObject(v6);
      }
    }
    *((_QWORD *)v5 + 88) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 696, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v5 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x6Eu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v4);
  return (unsigned int)v4;
}
