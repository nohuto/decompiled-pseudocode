/*
 * XREFs of sub_1800403C4 @ 0x1800403C4
 * Callers:
 *     sub_1800402E4 @ 0x1800402E4 (sub_1800402E4.c)
 *     sub_180040BF8 @ 0x180040BF8 (sub_180040BF8.c)
 * Callees:
 *     sub_180040464 @ 0x180040464 (sub_180040464.c)
 */

__int64 __fastcall sub_1800403C4(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int16 *v4; // rcx
  unsigned __int64 *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // rdx

  *a2 = 0LL;
  *a3 = 0LL;
  result = sub_180040464(a1, a2, a3, a3);
  if ( (int)result >= 0 )
  {
    if ( v4 )
    {
      v7 = *((_QWORD *)v4 + 1);
      *v5 = (unsigned __int64)*v4 >> 1;
      *v6 = v7;
    }
  }
  return result;
}
