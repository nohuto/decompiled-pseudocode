/*
 * XREFs of RIMGetSourceProcessId @ 0x1C0101F60
 * Callers:
 *     NtRIMGetSourceProcessId @ 0x1C00FFB00 (NtRIMGetSourceProcessId.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetSourceProcessId(char *a1, char *a2, CTouchProcessor *a3)
{
  char *v4; // r12
  int v6; // r15d
  int v7; // edi
  _BYTE *v8; // rbx
  int v9; // edx
  PVOID v10; // rcx
  char *v11; // rax
  __int64 v12; // rdx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    137,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v15);
  if ( v7 >= 0 )
  {
    v8 = v15;
    RIMLockExclusive((__int64)v15 + 96);
    if ( v8[73] )
    {
      v7 = -1073741637;
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        18,
        138,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      v7 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, &Object);
      if ( v7 >= 0 )
      {
        v10 = Object;
        if ( Object )
          v11 = (char *)Object + 64;
        else
          v11 = 0LL;
        v12 = *((_QWORD *)v11 + 47);
        if ( v12 )
          v6 = *(_DWORD *)(v12 + 84);
        if ( a3 >= W32UserProbeAddress )
          a3 = W32UserProbeAddress;
        *(_DWORD *)a3 = v6;
        ObfDereferenceObject(v10);
      }
    }
    *((_QWORD *)v8 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v8);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x8Bu,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v7);
  return (unsigned int)v7;
}
