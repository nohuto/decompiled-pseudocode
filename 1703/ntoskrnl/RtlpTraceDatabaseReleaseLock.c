/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x140240928
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1402402A0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1402404C0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x140240590 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x140240610 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x140240620 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
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
