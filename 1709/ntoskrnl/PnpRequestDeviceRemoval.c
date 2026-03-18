/*
 * XREFs of PnpRequestDeviceRemoval @ 0x1405EDBB0
 * Callers:
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PiProcessQueryDeviceState @ 0x140552C70 (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 *     PipProcessStartPhase2 @ 0x140555E8C (PipProcessStartPhase2.c)
 *     PipDmgEnforceConsoleLock @ 0x1406C31A8 (PipDmgEnforceConsoleLock.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1406CA410 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessHaltDevice @ 0x1406D1AC8 (PiProcessHaltDevice.c)
 *     PnpReallocateResources @ 0x1406D2960 (PnpReallocateResources.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1406D555C (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipProcessRestartPhase2 @ 0x1406D6218 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PnpSetTargetDeviceRemove @ 0x14055BE88 (PnpSetTargetDeviceRemove.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1405EDC78 (PnpRequestDeviceRemovalWorker.c)
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
    return PnpSetTargetDeviceRemove(*(_QWORD **)(a1 + 32), 1, 1, 0, 1, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
