/*
 * XREFs of RIMGetDownContactCount @ 0x1C0101BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMGetDownContactCount(char *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  int v4; // ebp
  _DWORD *v5; // rdi
  int v6; // edx
  int v8; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    114,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  *v2 = 0;
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
        115,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 174));
      *v2 = v5[150];
      *((_QWORD *)v5 + 88) = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 174, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_QWORD *)v5 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 24, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  v8 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x74u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v8);
  return (unsigned int)v4;
}
