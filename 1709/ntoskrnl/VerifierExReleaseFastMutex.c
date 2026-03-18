/*
 * XREFs of VerifierExReleaseFastMutex @ 0x1407C1D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x1407BA314 (ViKeIrqlLogCommon.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
 *     ViExReleaseFastMutexCommon @ 0x1407C2278 (ViExReleaseFastMutexCommon.c)
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
