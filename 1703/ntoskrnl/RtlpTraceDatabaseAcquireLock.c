/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x14024065C
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1402402A0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1402404C0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x140240590 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x140240600 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x140240620 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
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
