/*
 * XREFs of PnpRequestDeviceRemoval @ 0x14056DB8C
 * Callers:
 *     PipProcessStartPhase2 @ 0x14044F9D8 (PipProcessStartPhase2.c)
 *     PiProcessQueryDeviceState @ 0x1404A79A4 (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x1404DFDF8 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14069FAF0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessHaltDevice @ 0x1406A6BB4 (PiProcessHaltDevice.c)
 *     PnpReallocateResources @ 0x1406A7CA0 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x1406AAFA8 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14056DC54 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSetTargetDeviceRemove @ 0x14056E408 (PnpSetTargetDeviceRemove.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  int v8; // r8d
  __int64 result; // rax

  if ( a1 )
  {
    PnpAcquireDependencyRelationsLock(1);
    LOBYTE(v8) = a2;
    PnpRequestDeviceRemovalWorker(a1, a1, v8, 2, 0);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    return PnpSetTargetDeviceRemove(*(PVOID *)(a1 + 32), 1, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
