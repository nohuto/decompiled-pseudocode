/*
 * XREFs of PipRestoreDevNodeState @ 0x140145284
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405C87FC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x1405C9A7C (PnpDeleteLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1405C9BB4 (PnpRequestDeviceRemovalWorker.c)
 *     PnpCancelStopDeviceNode @ 0x14073DEB8 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x14006EB18 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x14006EB64 (PipAreDriversLoadedWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipRestoreDevNodeState(__int64 a1)
{
  KIRQL v2; // al
  int v3; // ebp
  int v4; // r14d
  unsigned __int64 v5; // rbx
  BOOL IsDevNodeDNStarted; // eax
  __int64 v7; // rdx
  BOOL v8; // esi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 300);
  v5 = v2;
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  v7 = *(unsigned int *)(a1 + 388);
  v8 = IsDevNodeDNStarted;
  *(_DWORD *)(a1 + 300) = v3;
  *(_DWORD *)(a1 + 4 * v7 + 308) = v4;
  *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  KxReleaseSpinLock(&PnpSpinLock);
  __writecr8(v5);
  if ( *(_QWORD *)(a1 + 48) )
  {
    PipAreDriversLoadedWorker(v4, v3);
    v9 = PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
    if ( v9 != v12 || PipIsDevNodeDNStarted(a1) != v8 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, v11, 11LL);
      if ( PipIsDevNodeDNStarted(a1) != v8 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v13, *(_QWORD *)(a1 + 48), 26LL);
    }
  }
}
