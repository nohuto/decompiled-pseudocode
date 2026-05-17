/*
 * XREFs of sub_180011560 @ 0x180011560
 * Callers:
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 *     sub_18007203C @ 0x18007203C (sub_18007203C.c)
 * Callees:
 *     sub_1800114B4 @ 0x1800114B4 (sub_1800114B4.c)
 *     sub_180012820 @ 0x180012820 (sub_180012820.c)
 *     sub_1800623C8 @ 0x1800623C8 (sub_1800623C8.c)
 */

__int64 __fastcall sub_180011560(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // ebp
  _QWORD *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rdi

  v5 = a3 >> 12;
  v6 = sub_180012820();
  v7 = (a2 - (unsigned int)((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) - ((unsigned int)v6 & *(_DWORD *)a1)) >> 12;
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    return sub_1800623C8(a1, v6, v7, (unsigned int)v5);
  v8 = *(_QWORD **)(a1 + 72);
  v9 = v8[1] >> *(_BYTE *)(a1 + 11);
  if ( v9 <= 8 )
    v9 = 8LL;
  v10 = v8[1] >> *(_BYTE *)(a1 + 12);
  if ( v10 <= 8 )
    v10 = 8LL;
  result = v8[2];
  if ( (dword_18015A43C & 0x20) != 0 )
    result += v8[3];
  v12 = result + v5;
  if ( result + v5 > v9 )
  {
    result = sub_1800114B4();
    if ( (int)result < 0 )
      return sub_1800623C8(a1, v6, v7, (unsigned int)v5);
  }
  if ( v12 > v10 )
    return sub_1800623C8(a1, v6, v7, (unsigned int)v5);
  return result;
}
