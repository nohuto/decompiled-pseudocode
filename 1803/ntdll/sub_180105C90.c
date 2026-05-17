/*
 * XREFs of sub_180105C90 @ 0x180105C90
 * Callers:
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

unsigned __int64 __fastcall sub_180105C90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // r8

  if ( ((a3 + 4111) & 0xFFFFFFFFFFFFF000uLL) - a3 >= 16
                                                   * (unsigned __int64)(WORD1(qword_18015A440) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2)) )
    return 0LL;
  v4 = ((a3 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
  v5 = (__int64)(v4 - a3) >> 4;
  v6 = (WORD1(qword_18015A440) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2)) - v5;
  *(_WORD *)(a3 + 2) = WORD1(qword_18015A440) ^ WORD1(a3) ^ v5;
  memset((void *)v4, 0, 0x20uLL);
  *(_WORD *)(v4 + 2) = v6;
  *(_WORD *)(v4 + 4) = v5;
  *(_QWORD *)v4 ^= v4 ^ qword_18015A440;
  v7 = v4 + 16LL * v6;
  if ( v7 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    *(_WORD *)(v7 + 4) = WORD2(v7) ^ v6 ^ WORD2(qword_18015A440);
  return v4;
}
