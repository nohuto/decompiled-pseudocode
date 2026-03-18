/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x140256C70
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1402565C0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1402567E0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1402568B0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x140256940 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x140256960 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
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
