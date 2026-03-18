/*
 * XREFs of RIMOnCheckPointerDeviceMonitors @ 0x1C0102650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMOnCheckPointerDeviceMonitors(char *a1, __int64 a2)
{
  __int64 v2; // r14
  int v4; // ebp
  _QWORD *v5; // rbx
  int v6; // edx
  __int64 i; // rdx
  __int64 v8; // rax
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    72,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) )
    {
      v4 = -1073741637;
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        18,
        73,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 87));
      for ( i = v5[69]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && (*(_DWORD *)(i + 184) & 0x1000) == 0 )
        {
          v8 = *(_QWORD *)(i + 472);
          if ( *(_QWORD *)(v8 + 288) == v2 )
          {
            *(_QWORD *)(v8 + 288) = 0LL;
            *(_DWORD *)(*(_QWORD *)(i + 472) + 876LL) = 0;
          }
        }
      }
      v5[88] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 87, 0LL);
      KeLeaveCriticalRegion();
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v10 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x4Au,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v10);
  return (unsigned int)v4;
}
