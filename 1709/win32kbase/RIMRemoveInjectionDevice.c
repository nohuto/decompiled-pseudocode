/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C01032D0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  int v4; // esi
  HANDLE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  _DWORD *v9; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x30u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = (HANDLE *)Object;
    RIMLockExclusive((__int64)Object + 96);
    v4 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
    if ( v4 < 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x32u,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      v8 = Object;
      if ( (v5[96] || *((_DWORD *)v5 + 244)) && v5[4] != (HANDLE)PsGetCurrentProcess(v7, v6) )
      {
        v8[62] |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        v8[66] |= 4u;
        qword_1C0193AE8 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v8[62] |= 0x100000u;
        ZwSetEvent(v5[65], 0LL);
        v4 = 0;
      }
      else if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
      {
        v4 = -1073741637;
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x31u,
          (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      }
      else
      {
        if ( v8 )
          v9 = v8 + 16;
        else
          v9 = 0LL;
        v4 = RIMFreeDev(v5, v9);
      }
      ObfDereferenceObject(v8);
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x33u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v4);
  return (unsigned int)v4;
}
