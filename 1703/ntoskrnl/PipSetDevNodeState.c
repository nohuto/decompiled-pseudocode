/*
 * XREFs of PipSetDevNodeState @ 0x1400810C0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x14044F9D8 (PipProcessStartPhase2.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PipEnumerateDevice @ 0x1404A758C (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404DB7F0 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1404DFDF8 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessAssignResources @ 0x140559D58 (PnpProcessAssignResources.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14056DC54 (PnpRequestDeviceRemovalWorker.c)
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14059A934 (PnpQueryRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405AD458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 *     PnpRestartDeviceNode @ 0x140695D4C (PnpRestartDeviceNode.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1406A9C98 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1406AA080 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x1406AAFA8 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     PipAreDriversLoadedWorker @ 0x14004D564 (PipAreDriversLoadedWorker.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x14004FB44 (PipIsDevNodeDNStarted.c)
 *     PnpRemoveDeviceActionRequests @ 0x140131F9C (PnpRemoveDeviceActionRequests.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  BOOL v4; // r14d
  int v5; // edi
  char v6; // bp
  KIRQL v7; // al
  int v8; // r8d
  KIRQL v9; // r15
  BOOL IsDevNodeDNStarted; // eax
  __int64 v11; // rcx
  int v12; // r8d
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v8 = *(_DWORD *)(a1 + 300);
  v9 = v7;
  if ( v8 != a2 )
  {
    v4 = PipAreDriversLoadedWorker(v8, *(_DWORD *)(a1 + 304));
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    v11 = *(unsigned int *)(a1 + 388);
    v5 = IsDevNodeDNStarted;
    *(_DWORD *)(a1 + 304) = v12;
    v6 = 1;
    *(_DWORD *)(a1 + 300) = a2;
    *(_DWORD *)(a1 + 4 * v11 + 308) = v12;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KxReleaseSpinLock(&PnpSpinLock);
  result = v9;
  __writecr8(v9);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304)) != v4
        || (result = PipIsDevNodeDNStarted(a1), (_DWORD)result != v5) )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v14, v15, 11LL);
        result = PipIsDevNodeDNStarted(a1);
        if ( (_DWORD)result != v5 )
          result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v16, *(_QWORD *)(a1 + 48), 26LL);
      }
    }
  }
  if ( a2 == 788 )
    return PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
  return result;
}
