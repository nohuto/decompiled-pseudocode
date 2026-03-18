/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C0099F30
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0099E80 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012D3D0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMQueryDev @ 0x1C00953F4 (RIMQueryDev.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(char *a1, char *a2)
{
  char *v2; // rsi
  int v4; // ebx
  _BYTE *v5; // rdi
  int v6; // edx
  PVOID v7; // rsi
  char *v8; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    108,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    RIMLockExclusive((__int64)(v5 + 696));
    if ( v5[73] || v5[75] )
    {
      v4 = -1073741637;
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        18,
        109,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      v4 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
      if ( v4 >= 0 )
      {
        v7 = Object;
        if ( Object )
          v8 = (char *)Object + 64;
        else
          v8 = 0LL;
        if ( v8[48] == 2 )
          v4 = -1073741811;
        else
          v4 = RIMQueryDev((__int64)v5, (__int64)v8);
        ObfDereferenceObject(v7);
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
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x6Eu,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v4);
  return (unsigned int)v4;
}
