/*
 * XREFs of PiQueryAndAllocateBootResources @ 0x140557908
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x140557B18 (IopQueryDeviceResources.c)
 */

__int64 __fastcall PiQueryAndAllocateBootResources(__int64 a1)
{
  PVOID v2; // rbx
  int DeviceResources; // esi
  int v4; // eax
  HANDLE v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h]

  v2 = 0LL;
  DeviceResources = 0;
  Data = 0LL;
  KeyHandle = 0LL;
  if ( !*(_QWORD *)(a1 + 544) )
  {
    DeviceResources = IopQueryDeviceResources(*(_QWORD *)(a1 + 32));
    if ( DeviceResources < 0 )
      Data = 0LL;
    else
      v2 = Data;
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v4 = CmOpenDeviceRegKey(
           *(__int64 *)&PiPnpRtlCtx,
           *(_QWORD *)(a1 + 48),
           0x14u,
           0,
           983103,
           v2 != 0LL,
           (__int64)&KeyHandle,
           0LL);
    v5 = KeyHandle;
    if ( v4 < 0 )
      v5 = 0LL;
    KeyHandle = v5;
    if ( v5 )
    {
      if ( !*(_QWORD *)(a1 + 544) )
      {
        *(_DWORD *)&ValueName.Length = 1441812;
        ValueName.Buffer = (wchar_t *)L"BootConfig";
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( Data )
          ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, Data, 0);
        else
          ZwDeleteValueKey(KeyHandle, &ValueName);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v2 = Data;
        if ( !Data )
          goto LABEL_11;
        DeviceResources = ((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
                            4LL,
                            *(_QWORD *)(a1 + 32),
                            Data);
        if ( DeviceResources >= 0 )
          PipSetDevNodeFlags(a1, 64);
      }
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DeviceResources;
}
