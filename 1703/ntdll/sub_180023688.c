/*
 * XREFs of sub_180023688 @ 0x180023688
 * Callers:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_180006A0C @ 0x180006A0C (sub_180006A0C.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     sub_1800FFBCC @ 0x1800FFBCC (sub_1800FFBCC.c)
 */

char __fastcall sub_180023688(__int64 a1, __int64 a2)
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
  v4 = (dword_18015BFDC & 4) == 0
    && (v10 = *(_WORD *)(a1 + 172), v10 <= 0x70u)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)word_1801195E0[v10]
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
    sub_1800FFBCC(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
      *(_QWORD *)(a2 + 8),
      *(unsigned __int16 *)(a1 + 172));
  }
  if ( v4 )
    return 0;
  return v3;
}
