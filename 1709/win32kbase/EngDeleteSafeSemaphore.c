/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1C00FBB90
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C0024AA0 (GreDeleteSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  int v1; // edx
  int v2; // r8d
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d

  GreAcquireHmgrSemaphore((int)pssem, v1, v2);
  if ( pssem->lCount == 1 )
  {
    GreDeleteSemaphore((PERESOURCE)pssem->hsem);
    pssem->hsem = 0LL;
  }
  --pssem->lCount;
  GreReleaseHmgrSemaphore(v5, v4, v6);
}
