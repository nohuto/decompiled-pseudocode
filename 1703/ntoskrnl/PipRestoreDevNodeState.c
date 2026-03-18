/*
 * XREFs of PipRestoreDevNodeState @ 0x140131B50
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14056DC54 (PnpRequestDeviceRemovalWorker.c)
 *     PnpDeleteLockedDeviceNode @ 0x14057015C (PnpDeleteLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x1406A9870 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     PipAreDriversLoadedWorker @ 0x14004D564 (PipAreDriversLoadedWorker.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x14004FB44 (PipIsDevNodeDNStarted.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
