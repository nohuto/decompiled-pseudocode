/*
 * XREFs of VerifierKeReleaseSpinLock @ 0x140777870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViKeReleaseSpinLockCommon @ 0x140778690 (ViKeReleaseSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLock(__int64 a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ViKeReleaseSpinLockCommon();
  VfDeadlockReleaseResource(a1, 5LL, KeGetCurrentThread(), retaddr);
  LOBYTE(v5) = a2;
  ((void (__fastcall *)(__int64, __int64))pXdvKeReleaseSpinLock)(a1, v5);
  return ViKeIrqlLogCommon(v4, 1LL);
}
