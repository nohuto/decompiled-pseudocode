/*
 * XREFs of PpmRemoveIdleStates @ 0x1402735D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRemoveIdleStates(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx
  _DWORD v5[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1 = *(void **)(a1 + 23808);
  if ( v1 )
  {
    v5[0] = 1310721;
    memset(&v5[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v5, *(_DWORD *)(a1 + 36));
    LOBYTE(v3) = 1;
    ((void (__fastcall *)(__int64, _DWORD *))off_140398788[0])(v3, v5);
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 23808) = 0LL;
    KxReleaseSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 23816) = 0LL;
    ExFreePoolWithTag(v1, 0x694D5050u);
  }
  return 0LL;
}
