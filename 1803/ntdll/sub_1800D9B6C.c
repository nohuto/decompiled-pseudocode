/*
 * XREFs of sub_1800D9B6C @ 0x1800D9B6C
 * Callers:
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180081B88 @ 0x180081B88 (sub_180081B88.c)
 *     sub_1800D9AD8 @ 0x1800D9AD8 (sub_1800D9AD8.c)
 */

NTSTATUS __fastcall sub_1800D9B6C(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  unsigned int i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  sub_1800D9AD8();
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v2 + 8) != a1 + 8 || *v3 != a1 + 8 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  for ( i = dword_18015D4B0; i && i >= dword_180159788; i = --dword_18015D4B0 )
  {
    v5 = qword_18015D4B8;
    v6 = *(_QWORD *)qword_18015D4B8;
    if ( *(__int64 **)(qword_18015D4B8 + 8) != &qword_18015D4B8 || *(_QWORD *)(v6 + 8) != qword_18015D4B8 )
      __fastfail(3u);
    qword_18015D4B8 = *(_QWORD *)qword_18015D4B8;
    *(_QWORD *)(v6 + 8) = &qword_18015D4B8;
    sub_180081B88(v5 - 8);
  }
  if ( dword_180159788 )
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = (_QWORD *)qword_18015D4C0;
    if ( *(__int64 **)qword_18015D4C0 != &qword_18015D4B8 )
      __fastfail(3u);
    *v7 = &qword_18015D4B8;
    *(_QWORD *)(a1 + 16) = v8;
    *v8 = v7;
    qword_18015D4C0 = a1 + 8;
    dword_18015D4B0 = i + 1;
  }
  else
  {
    sub_180081B88(a1);
  }
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
