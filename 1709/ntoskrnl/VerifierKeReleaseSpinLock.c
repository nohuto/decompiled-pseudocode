/*
 * XREFs of VerifierKeReleaseSpinLock @ 0x1407B9730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x1407BA314 (ViKeIrqlLogCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1407BA570 (ViKeReleaseSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLock(ULONG_PTR a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ViKeReleaseSpinLockCommon(a1);
  VfDeadlockReleaseResource(a1, 5LL, KeGetCurrentThread(), retaddr);
  LOBYTE(v5) = a2;
  ((void (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseSpinLock)(a1, v5);
  return ViKeIrqlLogCommon(v4, 1LL);
}
