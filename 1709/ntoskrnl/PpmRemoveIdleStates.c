/*
 * XREFs of PpmRemoveIdleStates @ 0x14023BFE0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
    ((void (__fastcall *)(__int64, _DWORD *))off_1403533E8[0])(v3, v5);
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 23808) = 0LL;
    KxReleaseSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 23816) = 0LL;
    ExFreePoolWithTag(v1, 0x694D5050u);
  }
  return 0LL;
}
