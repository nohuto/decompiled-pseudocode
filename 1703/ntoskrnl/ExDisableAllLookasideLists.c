/*
 * XREFs of ExDisableAllLookasideLists @ 0x14025D298
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140765668 (VfInitSystemNoRebootNeeded.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 ExDisableAllLookasideLists()
{
  KIRQL v0; // al
  __int64 *v1; // rdx
  KIRQL v2; // bl
  KIRQL v3; // al
  __int64 *v4; // rdx
  KIRQL v5; // bl
  __int64 result; // rax

  ExMinimumLookasideDepth = 0;
  v0 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  v1 = (__int64 *)ExNPagedLookasideListHead;
  v2 = v0;
  while ( v1 != &ExNPagedLookasideListHead )
  {
    *((_DWORD *)v1 - 12) = -65536;
    v1 = (__int64 *)*v1;
  }
  KxReleaseSpinLock(&ExNPagedLookasideLock);
  __writecr8(v2);
  v3 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  v4 = (__int64 *)ExPagedLookasideListHead;
  v5 = v3;
  while ( v4 != &ExPagedLookasideListHead )
  {
    *((_DWORD *)v4 - 12) = -65536;
    v4 = (__int64 *)*v4;
  }
  KxReleaseSpinLock(&ExPagedLookasideLock);
  result = v5;
  __writecr8(v5);
  return result;
}
