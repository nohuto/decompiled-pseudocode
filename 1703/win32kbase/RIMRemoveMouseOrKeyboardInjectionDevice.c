/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C0103300
 * Callers:
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  int v2; // esi
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    45,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v2 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 < 0 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      18,
      47,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  }
  else
  {
    v3 = Object;
    v4 = *((_QWORD *)Object + 51);
    RIMLockExclusive(v4 + 96);
    if ( v4 )
    {
      if ( (*(_QWORD *)(v4 + 768) || *(_DWORD *)(v4 + 976))
        && *(_QWORD *)(v4 + 32) != PsGetCurrentProcess(v6, v5, v7, v8) )
      {
        v3[62] |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        v3[66] |= 4u;
        qword_1C018EC88 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
        v3[62] |= 0x100000u;
        ZwSetEvent(*(HANDLE *)(v4 + 520), 0LL);
        v2 = 0;
      }
      else if ( *(_BYTE *)(v4 + 73) || *(_BYTE *)(v4 + 75) )
      {
        v2 = -1073741637;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          3,
          18,
          46,
          (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
      }
      else
      {
        v2 = RIMFreeDev(v4, v3 + 16);
      }
    }
    *(_QWORD *)(v4 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  return (unsigned int)v2;
}
