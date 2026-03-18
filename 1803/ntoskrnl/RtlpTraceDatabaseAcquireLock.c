/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14028ECDC
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x14028E900 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x14028EB20 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x14028EBF0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x14028EC60 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x14028ECA0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

char __fastcall RtlpTraceDatabaseAcquireLock(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 56);
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
    *(_BYTE *)(a1 + 40) = KeAcquireSpinLockRaiseToDpc(v2);
  else
    ExAcquireFastMutex((PFAST_MUTEX)v2);
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return 1;
}
