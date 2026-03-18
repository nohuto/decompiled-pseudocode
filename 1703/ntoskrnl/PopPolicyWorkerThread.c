/*
 * XREFs of PopPolicyWorkerThread @ 0x1400702C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopPolicyWorkerNotify @ 0x1404C5490 (PopPolicyWorkerNotify.c)
 *     PopPolicySystemIdle @ 0x1404C55E0 (PopPolicySystemIdle.c)
 *     PopPolicyWorkerAction @ 0x1405767C0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14057A2B0 (PopPolicyWorkerActionPromote.c)
 *     PopPolicyTimeChange @ 0x14057A440 (PopPolicyTimeChange.c)
 *     PopCoalescingNotify @ 0x1406C95B0 (PopCoalescingNotify.c)
 *     PopPreCriticalBatteryNotify @ 0x1406CEBA0 (PopPreCriticalBatteryNotify.c)
 */

__int64 __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // edx
  int v4; // edi
  KIRQL v5; // si
  __int64 v6; // rbx
  int v7; // eax
  __int64 (*v8)(void); // rax
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  v3 = a1 | PopWorkerStatus;
  v4 = 0;
  while ( 1 )
  {
    v5 = v2;
    PopWorkerStatus = v3;
    if ( (v3 & PopWorkerPending) == 0 )
      break;
    _BitScanForward((unsigned int *)&v6, v3 & PopWorkerPending);
    v7 = ~(1 << v6);
    PopWorkerPending &= v7;
    PopWorkerStatus = v7 & v3;
    KxReleaseSpinLock(&PopWorkerSpinLock);
    __writecr8(v5);
    v8 = PopWorkerTypes[v6];
    if ( v8 )
      v4 |= v8();
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    v3 = (1 << v6) | PopWorkerStatus;
  }
  PopWorkerPending |= v4;
  KxReleaseSpinLock(&PopWorkerSpinLock);
  result = v5;
  __writecr8(v5);
  return result;
}
