/*
 * XREFs of KeRundownApcQueues @ 0x1404B9854
 * Callers:
 *     sub_1402C0DB0 @ 0x1402C0DB0 (sub_1402C0DB0.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 * Callees:
 *     KiFlushQueueApc @ 0x140041320 (KiFlushQueueApc.c)
 *     KeForceResumeThread @ 0x140041924 (KeForceResumeThread.c)
 *     KiAcquireReleaseThreadLock @ 0x140041D0C (KiAcquireReleaseThreadLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

ULONG_PTR __fastcall KeRundownApcQueues(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rsi
  ULONG_PTR result; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  void (*v9)(void); // rax
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1, a2);
  KeForceResumeThread(a1);
  KeLeaveCriticalRegionThread(a1);
  LOBYTE(v3) = 1;
  v4 = KiFlushQueueApc(a1, v3);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    v7 = (_QWORD *)v4;
    do
    {
      v8 = v7 - 2;
      v7 = (_QWORD *)*v7;
      v9 = (void (*)(void))v8[5];
      if ( v9 )
        v9();
      else
        ExFreePoolWithTag(v8, 0);
    }
    while ( v7 != v5 );
  }
  result = KiFlushQueueApc(a1, 0LL);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
