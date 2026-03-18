/*
 * XREFs of EngReleaseSemaphore @ 0x1C007B6E0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

void __stdcall EngReleaseSemaphore(HSEMAPHORE hsem)
{
  __int64 v2; // rcx

  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(hsem, &LockRelease);
  if ( hsem )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsem);
    PsLeavePriorityRegion(v2);
  }
}
