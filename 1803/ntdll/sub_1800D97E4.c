/*
 * XREFs of sub_1800D97E4 @ 0x1800D97E4
 * Callers:
 *     sub_180080B70 @ 0x180080B70 (sub_180080B70.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18008367C @ 0x18008367C (sub_18008367C.c)
 */

void sub_1800D97E4()
{
  void *v0; // rsi
  void *v1; // rdi
  void *v2; // rbx

  RtlAcquireSRWLockExclusive(&stru_18015D3D8);
  v0 = (void *)sub_18008367C(&qword_18015B2E0);
  v1 = (void *)sub_18008367C(&qword_18015B2E8);
  v2 = (void *)sub_18008367C(&qword_18015B2D8);
  RtlReleaseSRWLockExclusive(&stru_18015D3D8);
  if ( v0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
