/*
 * XREFs of VerifierExTryToAcquireFastMutex @ 0x14082F370
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x14082F818 (ViExTryToAcquireFastMutexCommon.c)
 */

char __fastcall VerifierExTryToAcquireFastMutex(ULONG_PTR a1)
{
  char v2; // bl
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViExTryToAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  if ( v2 )
    VfDeadlockAcquireResource(a1, 3u, (__int64)KeGetCurrentThread(), 1u, retaddr);
  return v2;
}
