/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x140555F3C
 * Callers:
 *     PipProcessStartPhase2 @ 0x140555E8C (PipProcessStartPhase2.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1400FEB6C (PpMarkDeviceStackExtensionFlag.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  PVOID **v4; // rbx
  PVOID *v5; // rdi
  PVOID *v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 16, 0);
  v4 = (PVOID **)(a1 + 608);
  while ( *v4 != (PVOID *)v4 )
  {
    v5 = *v4;
    if ( (*v4)[1] != v4 || (v6 = (PVOID *)*v5, *((PVOID **)*v5 + 1) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    LOBYTE(v3) = 1;
    IopProcessSetInterfaceState(v5 + 2, v3, 0LL);
    ExFreePoolWithTag(v5[3], 0);
    ExFreePoolWithTag(v5, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
