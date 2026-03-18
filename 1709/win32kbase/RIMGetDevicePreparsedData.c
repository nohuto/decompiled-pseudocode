/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C0101B80
 * Callers:
 *     NtRIMGetDevicePreparsedData @ 0x1C00FFF10 (NtRIMGetDevicePreparsedData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0101CB0 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(char *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v9; // ebx
  _BYTE *v10; // rdi
  __int64 v11; // r9
  int v13; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x79u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v10[73] )
    {
      v9 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x7Au,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      LOBYTE(v11) = a5;
      v9 = RIMGetDevicePreparsedDataLockfree(a2, a3, a4, v11);
    }
    *((_QWORD *)v10 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  v13 = v9;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x7Bu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v13);
  return (unsigned int)v9;
}
