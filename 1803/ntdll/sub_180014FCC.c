/*
 * XREFs of sub_180014FCC @ 0x180014FCC
 * Callers:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 *     sub_180061610 @ 0x180061610 (sub_180061610.c)
 * Callees:
 *     sub_1800FE558 @ 0x1800FE558 (sub_1800FE558.c)
 */

char __fastcall sub_180014FCC(__int64 a1, __int64 a2)
{
  char v3; // di
  bool v4; // bl
  _DWORD *HotpatchInformation; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 v10; // ax

  if ( !*(_WORD *)(a2 + 32) )
    return 0;
  v3 = 1;
  v4 = (dword_18015D040 & 4) == 0
    && (v10 = *(_WORD *)(a1 + 172), v10 <= 0x70u)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)word_180118FE0[v10]
    && *(_WORD *)(a2 + 32) < (unsigned int)(*(_WORD *)(a2 + 40) >> 2);
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
  else
    v6 = 2147353482LL;
  if ( *(_BYTE *)v6
    || ((v7 = NtCurrentPeb()->HotpatchInformation) == 0LL || !*v7
      ? (v8 = 2147353472LL)
      : (v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 550),
        *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( !v4 )
      return v3;
    sub_1800FE558(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
      *(_QWORD *)(a2 + 8),
      *(unsigned __int16 *)(a1 + 172));
  }
  if ( v4 )
    return 0;
  return v3;
}
