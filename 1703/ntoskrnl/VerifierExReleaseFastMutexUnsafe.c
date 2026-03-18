/*
 * XREFs of VerifierExReleaseFastMutexUnsafe @ 0x14077FDA0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 *     ViExCheckAPCsDisabled @ 0x14078020C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafe(const void *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(58LL, a1);
  VfDeadlockReleaseResource(a1, 4u, (__int64)KeGetCurrentThread(), retaddr);
  return ((__int64 (__fastcall *)(const void *))pXdvExReleaseFastMutexUnsafe)(a1);
}
