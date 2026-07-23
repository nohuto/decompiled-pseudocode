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

void sub_1800DFF68()
{
  void *v0; // rsi
  void *v1; // rdi
  void *v2; // rbx

  RtlAcquireSRWLockExclusive(&stru_18015C3A0);
  v0 = (void *)sub_180089230(&qword_18015A2E0);
  v1 = (void *)sub_180089230(&qword_18015A2E8);
  v2 = (void *)sub_180089230(&qword_18015A2D8);
  RtlReleaseSRWLockExclusive(&stru_18015C3A0);
  if ( v0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
