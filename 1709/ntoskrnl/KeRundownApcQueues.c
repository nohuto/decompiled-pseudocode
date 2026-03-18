/*
 * XREFs of KeRundownApcQueues @ 0x1404D6A74
 * Callers:
 *     ExpLicensingWorker @ 0x140158B10 (ExpLicensingWorker.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KiFlushQueueApc @ 0x1400A9BF4 (KiFlushQueueApc.c)
 *     KeForceResumeThread @ 0x1400AA148 (KeForceResumeThread.c)
 *     KiAcquireReleaseThreadLock @ 0x1400AA4F0 (KiAcquireReleaseThreadLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  _QWORD *result; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  void (*v7)(void); // rax
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1);
  KeForceResumeThread(a1);
  KeLeaveCriticalRegionThread(a1);
  v2 = KiFlushQueueApc(a1, 1);
  v3 = v2;
  if ( v2 )
  {
    v5 = v2;
    do
    {
      v6 = v5 - 2;
      v5 = (_QWORD *)*v5;
      v7 = (void (*)(void))v6[5];
      if ( v7 )
        v7();
      else
        ExFreePoolWithTag(v6, 0);
    }
    while ( v5 != v3 );
  }
  result = KiFlushQueueApc(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
