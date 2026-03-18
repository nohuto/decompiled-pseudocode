/*
 * XREFs of PpDeviceRegistration @ 0x1405CC4FC
 * Callers:
 *     PnpCleanupDeviceRegistryValues @ 0x1405C9DB0 (PnpCleanupDeviceRegistryValues.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PpDevCfgProcessDevices @ 0x1406246C4 (PpDevCfgProcessDevices.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PiDeviceRegistration @ 0x1405CC58C (PiDeviceRegistration.c)
 */

__int64 __fastcall PpDeviceRegistration(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  v6 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  }
  LOBYTE(a2) = v6;
  v9 = PiDeviceRegistration(a1, a2, a3);
  if ( !a4 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v9;
}
