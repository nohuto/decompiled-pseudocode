/*
 * XREFs of IoSetDeviceInterfaceState @ 0x1405F53C0
 * Callers:
 *     PiSwDeviceInterfacesUpdateState @ 0x1405C5C8C (PiSwDeviceInterfacesUpdateState.c)
 *     PnpDisableDeviceInterfaces @ 0x1405C7250 (PnpDisableDeviceInterfaces.c)
 *     PiSwDeviceInterfaceSetState @ 0x140646AC0 (PiSwDeviceInterfaceSetState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     IopProcessSetInterfaceState @ 0x1405F4C6C (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v5 = IopProcessSetInterfaceState((__int64)SymbolicLinkName, Enable, 1);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 < 0 )
    return Enable != 0 ? v5 : 0;
  return v5;
}
