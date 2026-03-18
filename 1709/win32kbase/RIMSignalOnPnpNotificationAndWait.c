/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C010E2E0
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C010E070 (RIMDeviceNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C010E850 (RIMWaitForPriorPnpWorkToComplete.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2)
{
  ObReferenceObjectByPointer(*(PVOID *)(a2 + 32), 3u, ExRawInputManagerObjectType, 0);
  RIMWaitForPriorPnpWorkToComplete(a1, a2);
  if ( !*(_BYTE *)(a1 + 72) && !*(_BYTE *)(a1 + 73) )
  {
    if ( __CFSHR__(*(_DWORD *)(a2 + 184), 5) || *(_QWORD *)(a2 + 320) || (*(_DWORD *)(a1 + 1028) & 1) != 0 )
      DbgkWerCaptureLiveKernelDump(
        L"win32kbase.sys",
        356LL,
        -__CFSHR__(*(_DWORD *)(a2 + 184), 5),
        *(_QWORD *)(a2 + 320),
        -(*(_DWORD *)(a1 + 1028) & 1),
        0LL,
        0LL,
        0LL,
        0);
    *(_DWORD *)(a1 + 1028) |= 1u;
    *(_DWORD *)(a2 + 184) |= 0x10u;
    *(_QWORD *)(a2 + 320) = KeGetCurrentThread();
    ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x27u,
      (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
      a1,
      a2);
    *(_QWORD *)(a1 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    KeWaitForSingleObject(*(PVOID *)(a2 + 360), WrUserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 96);
    *(_QWORD *)(a2 + 320) = 0LL;
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x28u,
      (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
      a1,
      a2);
    *(_DWORD *)(a1 + 1028) &= ~1u;
  }
  ObfDereferenceObject(*(PVOID *)(a2 + 32));
  return 0LL;
}
