/*
 * XREFs of VerifierKeReleaseSpinLock @ 0x140826A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x14082767C (ViKeIrqlLogCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x140827910 (ViKeReleaseSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
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
