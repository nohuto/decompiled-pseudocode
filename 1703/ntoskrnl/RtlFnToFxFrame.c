/*
 * XREFs of RtlFnToFxFrame @ 0x1400076D8
 * Callers:
 *     RtlpWow64CtxToAmd64 @ 0x14042421C (RtlpWow64CtxToAmd64.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlFnToFxFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r11
  char v3; // r9
  unsigned int v5; // r10d
  __int16 v6; // bx
  __int64 v7; // rax
  __int16 result; // ax
  bool v9; // cl

  v2 = (_QWORD *)(a1 + 32);
  *(_WORD *)a1 = *(_WORD *)a2;
  v3 = 0;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 4);
  v5 = 0;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 12);
  *(_WORD *)(a1 + 12) = *(_WORD *)(a2 + 16);
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 18);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 20);
  *(_WORD *)(a1 + 20) = *(_WORD *)(a2 + 24);
  v6 = *(_WORD *)(a2 + 8);
  do
  {
    v7 = 10 * v5;
    *v2 = *(_QWORD *)(v7 + a2 + 28);
    v2 += 2;
    *((_WORD *)v2 - 4) = *(_WORD *)(v7 + a2 + 36);
    result = v6 & 0xC000;
    v9 = (v6 & 0xC000) != 0xC000;
    v6 *= 4;
    v3 = v9 + 2 * v3;
    ++v5;
  }
  while ( v5 < 8 );
  *(_BYTE *)(a1 + 4) = v3;
  return result;
}
