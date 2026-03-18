/*
 * XREFs of PpmRemoveIdleStates @ 0x140229130
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRemoveIdleStates(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx
  _DWORD v5[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1 = *(void **)(a1 + 23936);
  if ( v1 )
  {
    v5[0] = 1310721;
    memset(&v5[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v5, *(_DWORD *)(a1 + 36));
    LOBYTE(v3) = 1;
    ((void (__fastcall *)(__int64, _DWORD *))off_14033B3B8[0])(v3, v5);
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 23936) = 0LL;
    KxReleaseSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 23944) = 0LL;
    ExFreePoolWithTag(v1, 0x694D5050u);
  }
  return 0LL;
}
