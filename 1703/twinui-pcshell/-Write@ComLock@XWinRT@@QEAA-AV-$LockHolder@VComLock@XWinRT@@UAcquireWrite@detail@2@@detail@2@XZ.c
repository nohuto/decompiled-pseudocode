/*
 * XREFs of ?Write@ComLock@XWinRT@@QEAA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ @ 0x180162424
 * Callers:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::ComLock::Write(__int64 a1, __int64 a2)
{
  bool v2; // zf

  v2 = *(_DWORD *)a1 == 1;
  *(_QWORD *)a2 = a1;
  if ( v2 )
  {
    if ( !*(_DWORD *)(a1 + 8) )
      *(_DWORD *)(a1 + 8) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  }
  *(_DWORD *)(a2 + 8) = 0;
  return a2;
}
