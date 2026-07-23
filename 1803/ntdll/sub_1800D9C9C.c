/*
 * XREFs of sub_1800D9C9C @ 0x1800D9C9C
 * Callers:
 *     RtlCreateActivationContext @ 0x18004D910 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800D9AD8 @ 0x1800D9AD8 (sub_1800D9AD8.c)
 */

NTSTATUS __fastcall sub_1800D9C9C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  sub_1800D9AD8();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = (_QWORD *)(a1 + 8);
  v3 = qword_18015D4C8;
  if ( *(__int64 **)(qword_18015D4C8 + 8) != &qword_18015D4C8 )
    __fastfail(3u);
  *v2 = qword_18015D4C8;
  *(_QWORD *)(a1 + 16) = &qword_18015D4C8;
  *(_QWORD *)(v3 + 8) = v2;
  qword_18015D4C8 = a1 + 8;
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
