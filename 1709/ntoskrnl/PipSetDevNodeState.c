/*
 * XREFs of PipSetDevNodeState @ 0x1400E0004
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x14045077C (PnpRestartDeviceNode.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x140553034 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140553144 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 *     PnpProcessAssignResources @ 0x140553D98 (PnpProcessAssignResources.c)
 *     PipProcessStartPhase2 @ 0x140555E8C (PipProcessStartPhase2.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14055EA44 (PnpQueryRemoveLockedDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1405EDC78 (PnpRequestDeviceRemovalWorker.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1406D4B78 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1406D4F60 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x1406D6218 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x1400DF750 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400DF79C (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14015ABF0 (PnpRemoveDeviceActionRequests.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
