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

signed __int64 __fastcall sub_1800D97E4(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3D8, a2, a3, a4);
  v4 = sub_18008367C(&qword_18015B2E0);
  v5 = sub_18008367C((__int64 *)&qword_18015B2E8);
  v6 = sub_18008367C((__int64 *)&qword_18015B2D8);
  result = RtlReleaseSRWLockExclusive(&qword_18015D3D8);
  if ( v4 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v5 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( v6 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return result;
}
