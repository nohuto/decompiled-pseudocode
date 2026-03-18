/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x14044FA88
 * Callers:
 *     PipProcessStartPhase2 @ 0x14044F9D8 (PipProcessStartPhase2.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 * Callees:
 *     PpMarkDeviceStackExtensionFlag @ 0x1400801A8 (PpMarkDeviceStackExtensionFlag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  PVOID **v4; // rbx
  PVOID *v6; // rdi
  PVOID **v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 16, 0);
  v4 = (PVOID **)(a1 + 608);
  while ( *v4 != (PVOID *)v4 )
  {
    v6 = *v4;
    v7 = (PVOID **)**v4;
    if ( (*v4)[1] != v4 || v7[1] != v6 )
      __fastfail(3u);
    *v4 = (PVOID *)v7;
    v7[1] = (PVOID *)v4;
    LOBYTE(v3) = 1;
    IopProcessSetInterfaceState(v6 + 2, v3, 0LL);
    ExFreePoolWithTag(v6[3], 0);
    ExFreePoolWithTag(v6, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
