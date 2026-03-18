/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01034C8
 * Callers:
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(char *a1)
{
  int v2; // esi
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x2Du,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v2 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x2Fu,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  }
  else
  {
    v3 = Object;
    v4 = *((_QWORD *)Object + 51);
    RIMLockExclusive(v4 + 96);
    if ( v4 )
    {
      if ( (*(_QWORD *)(v4 + 768) || *(_DWORD *)(v4 + 976)) && *(_QWORD *)(v4 + 32) != PsGetCurrentProcess(v6, v5) )
      {
        v3[62] |= 0x40000u;
        RIMLockExclusive((__int64)&gObListLock);
        v3[66] |= 4u;
        qword_1C0193AE8 = 0LL;
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
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x2Eu,
          (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
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
