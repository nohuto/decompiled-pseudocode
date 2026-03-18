/*
 * XREFs of RtlpHpVsChunkCoalesce @ 0x140245060
 * Callers:
 *     RtlpHpVsChunkFree @ 0x140245480 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsFreeChunkRemove @ 0x140245ED0 (RtlpHpVsFreeChunkRemove.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkCoalesce(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v9; // r12d
  unsigned int v10; // edi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  int v17; // [rsp+6Ch] [rbp+14h]
  unsigned __int64 v18; // [rsp+70h] [rbp+18h]

  v5 = RtlpHeapKey;
  v6 = a3;
  v7 = a3 ^ RtlpHeapKey ^ *(_QWORD *)a3;
  v9 = WORD1(v7);
  v10 = WORD1(v7);
  v18 = HIDWORD(RtlpHeapKey);
  *(_BYTE *)(a3 + 6) = BYTE6(RtlpHeapKey) ^ BYTE6(a3) ^ ((v17 & 0xFF00FFFF) >> 16);
  if ( WORD2(v7) )
  {
    v11 = a3 - 16LL * WORD2(v7);
    v12 = v11 ^ v5 ^ *(_QWORD *)v11;
    if ( (v12 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, a2, a3 - 16LL * WORD2(v7));
      v6 = v11;
      v10 += WORD1(v12);
    }
  }
  v13 = v6 + 16LL * v10;
  if ( v13 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v14 = v13 ^ v5 ^ *(_QWORD *)v13;
    if ( (v14 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove(a1, a2, v13);
      v10 += WORD1(v14);
    }
  }
  if ( v9 != v10 )
  {
    v15 = v6 + 16LL * v10;
    *(_WORD *)(v6 + 2) = WORD1(RtlpHeapKey) ^ v10 ^ WORD1(v6);
    if ( v15 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v15 + 4) = v18 ^ WORD2(v15) ^ v10;
  }
  *a4 = v10;
  return v6;
}
