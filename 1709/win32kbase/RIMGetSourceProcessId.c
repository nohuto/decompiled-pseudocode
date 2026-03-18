/*
 * XREFs of RIMGetSourceProcessId @ 0x1C0102740
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x1C0100060 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, _DWORD *a3)
{
  int v6; // r15d
  int v7; // edi
  _BYTE *v8; // rbx
  PVOID v9; // rdx
  char *v10; // rax
  __int64 v11; // rcx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x89u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v14);
  if ( v7 >= 0 )
  {
    v8 = v14;
    RIMLockExclusive((__int64)v14 + 96);
    if ( v8[73] )
    {
      v7 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x8Au,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      v7 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v7 >= 0 )
      {
        v9 = Object;
        if ( Object )
          v10 = (char *)Object + 64;
        else
          v10 = 0LL;
        v11 = *((_QWORD *)v10 + 47);
        if ( v11 )
          v6 = *(_DWORD *)(v11 + 84);
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (_DWORD *)MmUserProbeAddress;
        *a3 = v6;
        ObfDereferenceObject(v9);
      }
    }
    *((_QWORD *)v8 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v8);
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x8Bu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v7);
  return (unsigned int)v7;
}
