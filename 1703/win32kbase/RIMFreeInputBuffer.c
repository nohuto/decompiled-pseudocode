/*
 * XREFs of RIMFreeInputBuffer @ 0x1C01012C0
 * Callers:
 *     NtRIMFreeInputBuffer @ 0x1C00FF990 (NtRIMFreeInputBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RIMFreeUserMem @ 0x1C0105640 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(char *a1, __int64 a2)
{
  __int64 v2; // r14
  int v4; // ebp
  _QWORD *v5; // rdi
  int v6; // edx
  int v8; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    91,
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
        92,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 87));
      RIMFreeUserMem(v5, v2);
      v5[88] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 87, 0LL);
      KeLeaveCriticalRegion();
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v8 = v4;
  return WPP_RECORDER_SF_D(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x5Du,
           (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
           v8);
}
