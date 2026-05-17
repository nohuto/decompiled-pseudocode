/*
 * XREFs of sub_1800173E0 @ 0x1800173E0
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 * Callees:
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 */

_BOOL8 sub_1800173E0()
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_18015D2E8 & 1) == 0 || (dword_18015D2E8 & 2) == 0 || !NtCurrentPeb()->ProcessHeap )
    return 0LL;
  v3 = xmmword_18015A790;
  v1 = (_QWORD *)sub_18005DFE4(&v3);
  return v2 != *v1;
}
