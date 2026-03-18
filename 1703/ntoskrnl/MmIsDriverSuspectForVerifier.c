/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x1407624C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     ViIsDriverSuspectForVerifier @ 0x14076250C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140762550 (VfDriverLock.c)
 */

__int64 __fastcall MmIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  VfDriverLock();
  IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(v1);
  ViDriversLoadLockOwner = 0LL;
  v3 = IsDriverSuspectForVerifier;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v3;
}
