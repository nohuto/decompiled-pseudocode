/*
 * XREFs of VerifierExReleaseFastMutex @ 0x14082F240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x14082767C (ViKeIrqlLogCommon.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 *     ViExReleaseFastMutexCommon @ 0x14082F7D8 (ViExReleaseFastMutexCommon.c)
 */

void __fastcall VerifierExReleaseFastMutex(const void *a1)
{
  __int64 v2; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViExReleaseFastMutexCommon((ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 3u, (__int64)KeGetCurrentThread(), retaddr);
  ((void (__fastcall *)(const void *))pXdvExReleaseFastMutex)(a1);
  ViKeIrqlLogCommon(v2, 1u);
}
