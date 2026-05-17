/*
 * XREFs of sub_1800113A0 @ 0x1800113A0
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_18010486C @ 0x18010486C (sub_18010486C.c)
 *     sub_180104BE8 @ 0x180104BE8 (sub_180104BE8.c)
 * Callees:
 *     sub_180011428 @ 0x180011428 (sub_180011428.c)
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 *     sub_1800633D4 @ 0x1800633D4 (sub_1800633D4.c)
 */

__int64 __fastcall sub_1800113A0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  __int64 v8; // rax

  v3 = 0;
  if ( !(_WORD)a2 )
  {
    v8 = sub_18006316C(&unk_18015D838, 2 * ((unsigned __int64)(a2 - qword_18015D878) >> 20));
    if ( !v8 )
      return sub_1800633D4(a1, a2, a3);
    v3 = v8 - 1;
  }
  if ( v3 != 2 )
    return sub_180011428(a1 + 120LL * v3 + 112, a2);
  return sub_1800633D4(a1, a2, a3);
}
