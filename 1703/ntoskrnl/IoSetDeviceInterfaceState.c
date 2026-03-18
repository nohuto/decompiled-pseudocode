/*
 * XREFs of IoSetDeviceInterfaceState @ 0x140461410
 * Callers:
 *     PiSwDeviceInterfacesUpdateState @ 0x14045FAB8 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404612DC (PiSwDeviceInterfaceSetState.c)
 *     PnpDisableDeviceInterfaces @ 0x14056E2A4 (PnpDisableDeviceInterfaces.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  LOBYTE(v5) = 1;
  LOBYTE(v6) = Enable;
  v7 = IopProcessSetInterfaceState(SymbolicLinkName, v6, v5);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v7 < 0 )
    return Enable != 0 ? v7 : 0;
  return v7;
}
