/*
 * XREFs of sub_1801046E8 @ 0x1801046E8
 * Callers:
 *     sub_180102178 @ 0x180102178 (sub_180102178.c)
 * Callees:
 *     sub_1801058BC @ 0x1801058BC (sub_1801058BC.c)
 *     sub_180105B24 @ 0x180105B24 (sub_180105B24.c)
 */

__int64 __fastcall sub_1801046E8(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  qword_18015D878 = 0LL;
  result = sub_180105B24(&unk_18015D838, 2 * (a4 >> 20), a3, 0LL);
  if ( (int)result >= 0 )
  {
    result = sub_1801058BC(&unk_18015D880, v6, v7, a4 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
