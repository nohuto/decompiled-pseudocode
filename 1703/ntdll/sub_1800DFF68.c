/*
 * XREFs of sub_1800DFF68 @ 0x1800DFF68
 * Callers:
 *     sub_180085EDC @ 0x180085EDC (sub_180085EDC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180089230 @ 0x180089230 (sub_180089230.c)
 */

signed __int64 sub_1800DFF68()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive(&qword_18015C3A0);
  v0 = sub_180089230(&qword_18015A2E0);
  v1 = sub_180089230((__int64 *)&qword_18015A2E8);
  v2 = sub_180089230((__int64 *)&qword_18015A2D8);
  result = RtlReleaseSRWLockExclusive(&qword_18015C3A0);
  if ( v0 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  return result;
}
