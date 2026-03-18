/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C0101400
 * Callers:
 *     NtRIMGetDevicePreparsedData @ 0x1C00FF9D0 (NtRIMGetDevicePreparsedData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0101530 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(char *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // r15
  int v9; // ebx
  _BYTE *v10; // rdi
  int v11; // edx
  __int64 v12; // r9
  int v14; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  v7 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    121,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v10[73] )
    {
      v9 = -1073741637;
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        18,
        122,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      LOBYTE(v12) = a5;
      v9 = RIMGetDevicePreparsedDataLockfree(v7, a3, a4, v12);
    }
    *((_QWORD *)v10 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  v14 = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x7Bu,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v14);
  return (unsigned int)v9;
}
