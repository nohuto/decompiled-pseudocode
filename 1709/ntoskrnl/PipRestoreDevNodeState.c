/*
 * XREFs of PipRestoreDevNodeState @ 0x140158A08
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x14055D620 (PnpDeleteLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1405EDC78 (PnpRequestDeviceRemovalWorker.c)
 *     PnpCancelStopDeviceNode @ 0x1406D4754 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x1400DF750 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400DF79C (PipAreDriversLoadedWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipRestoreDevNodeState(__int64 a1)
{
  unsigned __int64 v2; // rbx
  BOOL v3; // ebp
  BOOL IsDevNodeDNStarted; // eax
  __int64 v5; // rdx
  int v6; // r8d
  BOOL v7; // esi
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  v5 = *(unsigned int *)(a1 + 388);
  *(_DWORD *)(a1 + 300) = v6;
  v7 = IsDevNodeDNStarted;
  *(_DWORD *)(a1 + 4 * v5 + 308) = v8;
  *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  KxReleaseSpinLock(&PnpSpinLock);
  __writecr8(v2);
  if ( *(_QWORD *)(a1 + 48)
    && (PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304)) != v3 || PipIsDevNodeDNStarted(a1) != v7) )
  {
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v9, v10, 11LL);
    if ( PipIsDevNodeDNStarted(a1) != v7 )
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *(_QWORD *)(a1 + 48), 26LL);
  }
}
