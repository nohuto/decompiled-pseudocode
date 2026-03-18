/*
 * XREFs of IopReleaseDeviceResources @ 0x14055E154
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x1405F10CC (PnpDisableDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x140557B18 (IopQueryDeviceResources.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 */

__int64 __fastcall IopReleaseDeviceResources(__int64 a1, int a2)
{
  __int64 result; // rax
  PVOID v5; // rbx
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v8)(__int64, __int64, PVOID); // rax
  __int64 v9; // rdx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+40h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+58h] BYREF

  if ( !*(_QWORD *)(a1 + 416) && (*(_DWORD *)(a1 + 396) & 0x80u) == 0 )
    return 0LL;
  DataSize = 0;
  v5 = 0LL;
  Data = 0LL;
  if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
  {
    if ( (int)IopQueryDeviceResources(*(struct _DEVICE_OBJECT **)(a1 + 32), 0, (ULONG_PTR *)&Data, &DataSize) < 0 )
    {
      Data = 0LL;
      DataSize = 0;
    }
    else
    {
      v5 = Data;
    }
  }
  result = IopLegacyResourceAllocation(-1, (__int64)PnpDriverObject, *(_QWORD *)(a1 + 32), 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 48);
      KeyHandle = 0LL;
      if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v6, 0x14u, 0, 983103, v5 != 0LL, (__int64)&KeyHandle, 0LL) >= 0 )
      {
        *(_DWORD *)&ValueName.Length = 1441812;
        ValueName.Buffer = (wchar_t *)L"BootConfig";
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( Data )
          ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, Data, DataSize);
        else
          ZwDeleteValueKey(KeyHandle, &ValueName);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ZwClose(KeyHandle);
        v5 = Data;
      }
      if ( v5 )
      {
        PipSetDevNodeFlags(a1, 64);
        v8 = (void (__fastcall *)(__int64, __int64, PVOID))IopAllocateBootResourcesRoutine;
        v9 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 544) = v5;
        v8(4LL, v9, v5);
      }
    }
    return 0LL;
  }
  return result;
}
