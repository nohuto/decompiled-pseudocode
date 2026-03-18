/*
 * XREFs of PnpGetDeviceInstanceRegistryValue @ 0x14074764C
 * Callers:
 *     sub_140722B10 @ 0x140722B10 (sub_140722B10.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DeviceAddressCache", 26, a5);
    ZwClose(Handle);
  }
  return (unsigned int)RegistryValue;
}
