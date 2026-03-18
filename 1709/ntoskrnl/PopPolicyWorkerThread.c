/*
 * XREFs of PopPolicyWorkerThread @ 0x1400B0E10
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopPolicyWorkerNotify @ 0x1404E8000 (PopPolicyWorkerNotify.c)
 *     PopPolicySystemIdle @ 0x1404E8080 (PopPolicySystemIdle.c)
 *     PopCoalescingNotify @ 0x1406FA190 (PopCoalescingNotify.c)
 *     PopPolicyWorkerAction @ 0x1406FD480 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1406FD630 (PopPolicyWorkerActionPromote.c)
 *     PopPreCriticalBatteryNotify @ 0x140706170 (PopPreCriticalBatteryNotify.c)
 *     PopPolicyTimeChange @ 0x140706C90 (PopPolicyTimeChange.c)
 */

__int64 __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // edx
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
    v8 = v2;
    PopWorkerStatus = v3;
    if ( (v3 & PopWorkerPending) == 0 )
      break;
    _BitScanForward((unsigned int *)&v5, v3 & PopWorkerPending);
    v6 = ~(1 << v5);
    PopWorkerPending &= v6;
    PopWorkerStatus = v6 & v3;
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
