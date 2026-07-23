/*
 * XREFs of sub_1800E0260 @ 0x1800E0260
 * Callers:
 *     sub_1800E02F0 @ 0x1800E02F0 (sub_1800E02F0.c)
 *     sub_1800E0420 @ 0x1800E0420 (sub_1800E0420.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

NTSTATUS sub_1800E0260()
{
  NTSTATUS result; // eax

  if ( !qword_18015C4C8 )
  {
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    if ( !qword_18015C4C8 )
    {
      qword_18015C4D0 = (__int64)&qword_18015C4C8;
      qword_18015C4C8 = (__int64)&qword_18015C4C8;
      qword_18015C4C0 = (__int64)&qword_18015C4B8;
      qword_18015C4B8 = (__int64)&qword_18015C4B8;
    }
    return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  }
  return result;
}
