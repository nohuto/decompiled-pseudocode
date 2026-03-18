/*
 * XREFs of PopPolicyWorkerThread @ 0x140073DA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopPolicySystemIdle @ 0x14051C940 (PopPolicySystemIdle.c)
 *     PopPolicyWorkerNotify @ 0x14051D3D0 (PopPolicyWorkerNotify.c)
 *     PopPolicyWorkerAction @ 0x1405EBDD0 (PopPolicyWorkerAction.c)
 *     PopPolicyTimeChange @ 0x1405EF280 (PopPolicyTimeChange.c)
 *     PopPolicyWorkerActionPromote @ 0x1405EF2E0 (PopPolicyWorkerActionPromote.c)
 *     PopCoalescingNotify @ 0x140761620 (PopCoalescingNotify.c)
 *     PopPreCriticalBatteryNotify @ 0x140769F70 (PopPreCriticalBatteryNotify.c)
 */

__int64 __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // r8d
  int v4; // edi
  __int64 v5; // rbx
  int v6; // eax
  __int64 (*v7)(void); // rax
  KIRQL v8; // si
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  v3 = a1 | PopWorkerStatus;
  v4 = 0;
  while ( 1 )
  {
    PopWorkerStatus = v3;
    v8 = v2;
    if ( (PopWorkerPending & v3) == 0 )
      break;
    _BitScanForward((unsigned int *)&v5, PopWorkerPending & v3);
    v6 = ~(1 << v5);
    PopWorkerStatus = v3 & v6;
    PopWorkerPending &= v6;
    KxReleaseSpinLock(&PopWorkerSpinLock);
    __writecr8(v8);
    v7 = PopWorkerTypes[v5];
    if ( v7 )
      v4 |= v7();
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    v3 = (1 << v5) | PopWorkerStatus;
  }
  PopWorkerPending |= v4;
  KxReleaseSpinLock(&PopWorkerSpinLock);
  result = v8;
  __writecr8(v8);
  return result;
}
