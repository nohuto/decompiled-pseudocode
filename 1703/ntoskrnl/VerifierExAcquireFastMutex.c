/*
 * XREFs of VerifierExAcquireFastMutex @ 0x14077FBF0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 *     ViExAcquireFastMutexCommon @ 0x140780168 (ViExAcquireFastMutexCommon.c)
 */

void __fastcall VerifierExAcquireFastMutex(__int64 a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  ViExAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  VfDeadlockAcquireResource(a1, 3u, (__int64)KeGetCurrentThread(), 0, retaddr);
}
