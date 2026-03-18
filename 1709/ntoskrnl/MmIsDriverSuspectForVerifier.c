/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x1407A24A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ViIsDriverSuspectForVerifier @ 0x1407A24EC (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x1407A2530 (VfDriverLock.c)
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
