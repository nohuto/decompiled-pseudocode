/*
 * XREFs of sub_1800D9AD8 @ 0x1800D9AD8
 * Callers:
 *     sub_1800D9B6C @ 0x1800D9B6C (sub_1800D9B6C.c)
 *     sub_1800D9C9C @ 0x1800D9C9C (sub_1800D9C9C.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 */

NTSTATUS sub_1800D9AD8()
{
  NTSTATUS result; // eax

  if ( !qword_18015D4C8 )
  {
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    if ( !qword_18015D4C8 )
    {
      qword_18015D4D0 = (__int64)&qword_18015D4C8;
      qword_18015D4C8 = (__int64)&qword_18015D4C8;
      qword_18015D4C0 = (__int64)&qword_18015D4B8;
      qword_18015D4B8 = (__int64)&qword_18015D4B8;
    }
    return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  }
  return result;
}
