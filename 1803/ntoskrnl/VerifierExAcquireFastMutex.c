/*
 * XREFs of VerifierExAcquireFastMutex @ 0x14082F110
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     ViExAcquireFastMutexCommon @ 0x14082F6B4 (ViExAcquireFastMutexCommon.c)
 */

void __fastcall VerifierExAcquireFastMutex(ULONG_PTR a1)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  ViExAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  VfDeadlockAcquireResource(a1, 3u, (__int64)KeGetCurrentThread(), 0, retaddr);
}
