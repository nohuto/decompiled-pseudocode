/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14025699C
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1402565C0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1402567E0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1402568B0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x140256920 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x140256960 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall RtlpTraceDatabaseAcquireLock(__int64 a1)
{
  int v1; // eax
  KSPIN_LOCK *v3; // rcx

  v1 = *(_DWORD *)(a1 + 4);
  v3 = (KSPIN_LOCK *)(a1 + 56);
  if ( (v1 & 4) != 0 )
    *(_BYTE *)(a1 + 40) = KeAcquireSpinLockRaiseToDpc(v3);
  else
    ExAcquireFastMutex((PFAST_MUTEX)v3);
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return 1;
}
