/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x14028EFB0
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x14028E900 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x14028EB20 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x14028EBF0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x14028EC80 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x14028ECA0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 */

char __fastcall RtlpTraceDatabaseReleaseLock(__int64 a1)
{
  unsigned __int64 v1; // rbx

  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
  {
    v1 = *(unsigned __int8 *)(a1 + 40);
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 56));
    __writecr8(v1);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 56));
  }
  return 1;
}
