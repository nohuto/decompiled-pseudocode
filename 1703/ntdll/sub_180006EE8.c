/*
 * XREFs of sub_180006EE8 @ 0x180006EE8
 * Callers:
 *     sub_180006A0C @ 0x180006A0C (sub_180006A0C.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800FFBCC @ 0x1800FFBCC (sub_1800FFBCC.c)
 */

bool __fastcall sub_180006EE8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 v13; // ax

  v5 = a1;
  if ( (dword_18015BFDC & 4) != 0
    || (v13 = *(_WORD *)(a1 + 172), v13 > 0x70u)
    || (a1 = 16 * (unsigned int)(unsigned __int16)word_1801195E0[v13], *(_DWORD *)(v5 + 160) < (unsigned int)a1) )
  {
    v6 = 0;
  }
  else
  {
    a1 = *(unsigned __int16 *)(a2 + 32);
    v6 = (unsigned __int16)a1 < (unsigned __int16)(*(_WORD *)(a2 + 40) >> 2);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
  else
    v10 = 2147353482LL;
  if ( *(_BYTE *)v10
    || ((unsigned int)RtlGetCurrentServiceSessionId(v10, v7, v8, v9)
      ? (v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550)
      : (v11 = 2147353472LL),
        *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( v6 )
      sub_1800FFBCC(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 24LL) + 24LL),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(v5 + 172));
  }
  return v6;
}
