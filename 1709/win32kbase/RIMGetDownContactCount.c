/*
 * XREFs of RIMGetDownContactCount @ 0x1C0102390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetDownContactCount(char *a1, _DWORD *a2)
{
  int v4; // ebp
  _DWORD *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x72u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  *a2 = 0;
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x73u,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 174));
      *a2 = v5[150];
      *((_QWORD *)v5 + 88) = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 174, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_QWORD *)v5 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 24, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x74u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v7);
  return (unsigned int)v4;
}
