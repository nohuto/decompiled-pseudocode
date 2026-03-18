/*
 * XREFs of VerifierExReleaseFastMutexUnsafe @ 0x1407C1D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
 *     ViExCheckAPCsDisabled @ 0x1407C220C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafe(const void *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0x3AuLL, (ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 4u, (__int64)KeGetCurrentThread(), retaddr);
  return ((__int64 (__fastcall *)(const void *))pXdvExReleaseFastMutexUnsafe)(a1);
}
