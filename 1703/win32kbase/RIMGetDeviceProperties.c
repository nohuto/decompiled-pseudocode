/*
 * XREFs of RIMGetDeviceProperties @ 0x1C0101670
 * Callers:
 *     NtRIMGetDeviceProperties @ 0x1C00FFA50 (NtRIMGetDeviceProperties.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C01017A0 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall RIMGetDeviceProperties(char *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r15
  int v8; // ebx
  _BYTE *v9; // rdi
  int v10; // edx
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  v6 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    124,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v9[73] )
    {
      v8 = -1073741637;
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        18,
        125,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      LOBYTE(v11) = a4;
      v8 = RIMGetDevicePropertiesLockfree(v6, a3, v11);
    }
    *((_QWORD *)v9 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v9);
  }
  v13 = v8;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x7Eu,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v13);
  return (unsigned int)v8;
}
