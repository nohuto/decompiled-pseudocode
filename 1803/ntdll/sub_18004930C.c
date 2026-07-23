/*
 * XREFs of sub_18004930C @ 0x18004930C
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180049280 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180083200 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 */

void sub_18004930C()
{
  RtlAcquireSRWLockExclusive(&stru_18015D2A8);
  if ( !--dword_18015CFFC )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&stru_18015D2A8);
}
