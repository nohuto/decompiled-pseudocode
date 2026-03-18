/*
 * XREFs of VerifierExAcquireFastMutexUnsafe @ 0x14077FC50
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x14077FC90 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 */

void __fastcall VerifierExAcquireFastMutexUnsafe(__int64 a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  VerifierExAcquireFastMutexUnsafeNoReboot();
  VfDeadlockAcquireResource(a1, 4u, (__int64)KeGetCurrentThread(), 0, retaddr);
}
