/*
 * XREFs of RIMGetDeviceProperties @ 0x1C0101E10
 * Callers:
 *     NtRIMGetDeviceProperties @ 0x1C00FFFA0 (NtRIMGetDeviceProperties.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C0101F40 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall RIMGetDeviceProperties(char *a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // ebx
  _BYTE *v9; // rdi
  __int64 v10; // r8
  int v12; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x7Cu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v9[73] )
    {
      v8 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x7Du,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      LOBYTE(v10) = a4;
      v8 = RIMGetDevicePropertiesLockfree(a2, a3, v10);
    }
    *((_QWORD *)v9 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v9);
  }
  v12 = v8;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x7Eu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v12);
  return (unsigned int)v8;
}
