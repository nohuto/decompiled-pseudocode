/*
 * XREFs of sub_18004930C @ 0x18004930C
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180049280 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180083200 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall sub_18004930C(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2A8, a2, a3, a4);
  if ( !--dword_18015CFFC )
    RtlUnlockModuleSection((__int64)RtlAllocateMemoryZone, v4, v5, v6);
  return RtlReleaseSRWLockExclusive(&qword_18015D2A8);
}
