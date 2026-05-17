/*
 * XREFs of sub_180083B3C @ 0x180083B3C
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180083AB0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x1800890C0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180083D60 (RtlUnlockModuleSection.c)
 */

signed __int64 sub_180083B3C()
{
  RtlAcquireSRWLockExclusive(&qword_18015C268);
  if ( !--dword_18015BF8C )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&qword_18015C268);
}
