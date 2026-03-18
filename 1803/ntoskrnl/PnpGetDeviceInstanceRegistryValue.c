/*
 * XREFs of PnpGetDeviceInstanceRegistryValue @ 0x1407F633C
 * Callers:
 *     sub_1407CA0A0 @ 0x1407CA0A0 (sub_1407CA0A0.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpGetDeviceInstanceRegistryValue(__int64 a1, __int64 a2, void *a3, __int64 a4, _QWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int RegistryValue; // ebx
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF

  Handle = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  RegistryValue = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 0x11u, 0, 131097, 0, (__int64)&Handle, 0LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DeviceAddressCache", 26, a5);
    ZwClose(Handle);
  }
  return (unsigned int)RegistryValue;
}
