/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C0101DA0
 * Callers:
 *     NtRIMGetPhysicalDeviceRect @ 0x1C00FFAB0 (NtRIMGetPhysicalDeviceRect.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(char *a1, char *a2, CTouchProcessor *a3)
{
  char *v4; // rsi
  int v6; // ebx
  _BYTE *v7; // rdi
  int v8; // edx
  int v9; // edx
  PVOID v10; // rsi
  char *v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm0
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    133,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v16);
  if ( v6 >= 0 )
  {
    v7 = v16;
    RIMLockExclusive((__int64)v16 + 96);
    if ( v7[73] )
    {
      v6 = -1073741637;
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        18,
        135,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v10 = Object;
        if ( Object )
          v11 = (char *)Object + 64;
        else
          v11 = 0LL;
        if ( (*((_DWORD *)v11 + 50) & 0x80u) == 0 )
        {
          v6 = -1073741637;
          LOBYTE(v9) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            18,
            134,
            (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
        }
        else
        {
          v12 = *((_QWORD *)v11 + 59);
          if ( *(_DWORD *)(v12 + 24) == 7 )
            v13 = *(_OWORD *)(v12 + 204);
          else
            v13 = *(_OWORD *)(v12 + 140);
          if ( a3 >= W32UserProbeAddress )
            a3 = W32UserProbeAddress;
          *(_OWORD *)a3 = v13;
        }
        ObfDereferenceObject(v10);
      }
    }
    *((_QWORD *)v7 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x88u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v6);
  return (unsigned int)v6;
}
