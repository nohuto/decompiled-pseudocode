/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C0103110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  char *v2; // rdi
  int v4; // esi
  HANDLE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rdi
  _DWORD *v11; // rdx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    48,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = (HANDLE *)Object;
    RIMLockExclusive((__int64)Object + 96);
    v4 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
    if ( v4 < 0 )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        18,
        50,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      v10 = Object;
      if ( (v5[96] || *((_DWORD *)v5 + 244)) && v5[4] != (HANDLE)PsGetCurrentProcess(v7, v6, v8, v9) )
      {
        v10[62] |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        v10[66] |= 4u;
        qword_1C018EC88 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v10[62] |= 0x100000u;
        ZwSetEvent(v5[65], 0LL);
        v4 = 0;
      }
      else if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
      {
        v4 = -1073741637;
        LOBYTE(v6) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          18,
          49,
          (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
      }
      else
      {
        if ( v10 )
          v11 = v10 + 16;
        else
          v11 = 0LL;
        v4 = RIMFreeDev(v5, v11);
      }
      ObfDereferenceObject(v10);
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x33u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v4);
  return (unsigned int)v4;
}
