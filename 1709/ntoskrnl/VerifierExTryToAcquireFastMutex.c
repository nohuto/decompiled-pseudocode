/*
 * XREFs of VerifierExTryToAcquireFastMutex @ 0x1407C1E30
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1407C22B8 (ViExTryToAcquireFastMutexCommon.c)
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
