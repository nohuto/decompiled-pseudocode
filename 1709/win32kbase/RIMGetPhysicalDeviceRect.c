/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C0102590
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1C0100010 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, _OWORD *a3)
{
  int v6; // ebx
  _BYTE *v7; // rdi
  PVOID v8; // rsi
  char *v9; // rcx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v12; // [rsp+78h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x85u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v12);
  if ( v6 >= 0 )
  {
    v7 = v12;
    RIMLockExclusive((__int64)v12 + 96);
    if ( v7[73] )
    {
      v6 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x87u,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v8 = Object;
        if ( Object )
          v9 = (char *)Object + 64;
        else
          v9 = 0LL;
        if ( (*((_DWORD *)v9 + 50) & 0x80u) == 0 )
        {
          v6 = -1073741637;
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x12u,
            0x86u,
            (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
        }
        else
        {
          if ( (unsigned __int64)a3 >= MmUserProbeAddress )
            a3 = (_OWORD *)MmUserProbeAddress;
          *a3 = *(_OWORD *)(*((_QWORD *)v9 + 59) + 140LL);
        }
        ObfDereferenceObject(v8);
      }
    }
    *((_QWORD *)v7 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x88u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v6);
  return (unsigned int)v6;
}
