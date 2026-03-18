/*
 * XREFs of VerifierExAcquireFastMutexUnsafe @ 0x1407C1C40
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x1407C1C80 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 */

void __fastcall VerifierExAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  VerifierExAcquireFastMutexUnsafeNoReboot(a1);
  VfDeadlockAcquireResource(a1, 4u, (__int64)KeGetCurrentThread(), 0, retaddr);
}
