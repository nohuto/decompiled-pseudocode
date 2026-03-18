/*
 * XREFs of VerifierExReleaseFastMutexUnsafe @ 0x14082F2D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 *     ViExCheckAPCsDisabled @ 0x14082F76C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafe(const void *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0x3AuLL, (ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 4u, (__int64)KeGetCurrentThread(), retaddr);
  return ((__int64 (__fastcall *)(const void *))pXdvExReleaseFastMutexUnsafe)(a1);
}
