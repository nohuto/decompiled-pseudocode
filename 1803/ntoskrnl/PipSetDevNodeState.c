/*
 * XREFs of PipSetDevNodeState @ 0x140146914
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405C87FC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1405C9BB4 (PnpRequestDeviceRemovalWorker.c)
 *     PipProcessStartPhase2 @ 0x1405CA7BC (PipProcessStartPhase2.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x1405CCC58 (PnpProcessAssignResources.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1405D1930 (PipEnumerateCompleted.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1405D39C8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1405D5A08 (PnpStartDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IopLegacyResourceAllocation @ 0x140650B94 (IopLegacyResourceAllocation.c)
 *     PnpRestartDeviceNode @ 0x140651E64 (PnpRestartDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140727C3C (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14073E2DC (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14073E6BC (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x14073FEE4 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x14006EB18 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x14006EB64 (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14014D264 (PnpRemoveDeviceActionRequests.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
