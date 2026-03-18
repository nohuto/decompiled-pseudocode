/*
 * XREFs of RIMIsPrimaryPointerDeviceDown @ 0x1C01024E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMIsPrimaryPointerDeviceDown(char *a1, int *a2)
{
  int *v2; // r14
  int v4; // ebp
  _QWORD *v5; // rbx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    111,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
    {
      v4 = -1073741637;
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        18,
        112,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 87));
      v7 = v5[76];
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 1584);
        if ( v8 )
          *v2 = (*(_DWORD *)(v8 + 2620) >> 2) & 1;
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
    0x71u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v10);
  return (unsigned int)v4;
}
