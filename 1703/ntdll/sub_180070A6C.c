/*
 * XREFs of sub_180070A6C @ 0x180070A6C
 * Callers:
 *     sub_180070900 @ 0x180070900 (sub_180070900.c)
 *     sub_18007098C @ 0x18007098C (sub_18007098C.c)
 * Callees:
 *     sub_180070B0C @ 0x180070B0C (sub_180070B0C.c)
 */

__int64 __fastcall sub_180070A6C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int16 *v4; // rcx
  unsigned __int64 *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // rdx

  *a2 = 0LL;
  *a3 = 0LL;
  result = sub_180070B0C(a1, a2, a3, a3);
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
