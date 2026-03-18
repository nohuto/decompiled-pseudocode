/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C010F970
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C010F700 (RIMDeviceNotify.c)
 * Callees:
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00276B0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0053FC0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0092DE0 (RawInputManagerDeviceObjectReference.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C010FEA8 (RIMWaitForPriorPnpWorkToComplete.c)
 */

NTSTATUS __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebp

  result = RawInputManagerDeviceObjectReference(*(void **)(a2 + 32));
  v5 = result;
  if ( result >= 0 )
  {
    RIMWaitForPriorPnpWorkToComplete(a1, a2);
    if ( !*(_BYTE *)(a1 + 72) && !*(_BYTE *)(a1 + 73) )
    {
      if ( __CFSHR__(*(_DWORD *)(a2 + 184), 5) || *(_QWORD *)(a2 + 320) || (*(_DWORD *)(a1 + 1028) & 1) != 0 )
        DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, -__CFSHR__(*(_DWORD *)(a2 + 184), 5));
      *(_DWORD *)(a1 + 1028) |= 1u;
      *(_DWORD *)(a2 + 184) |= 0x10u;
      *(_QWORD *)(a2 + 320) = KeGetCurrentThread();
      ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x27u,
        (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
        a1,
        a2);
      CInpPushLock::UnLockExclusive((CInpPushLock *)(a1 + 96));
      KeWaitForSingleObject(*(PVOID *)(a2 + 360), WrUserRequest, 0, 0, 0LL);
      RIMLockExclusive(a1 + 96);
      *(_QWORD *)(a2 + 320) = 0LL;
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x28u,
        (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
        a1,
        a2);
      *(_DWORD *)(a1 + 1028) &= ~1u;
    }
    CompositionObject::Release(*(PVOID *)(a2 + 32));
    return v5;
  }
  return result;
}
