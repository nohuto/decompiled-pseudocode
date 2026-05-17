/*
 * XREFs of sub_180078DF4 @ 0x180078DF4
 * Callers:
 *     sub_180078D9C @ 0x180078D9C (sub_180078D9C.c)
 * Callees:
 *     sub_180078E44 @ 0x180078E44 (sub_180078E44.c)
 */

__int64 __fastcall sub_180078DF4(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  result = sub_180078E44(a1, 192LL, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *v6 = a1 + 3264;
    result = 0LL;
    *((_WORD *)v5 + 86) = v2;
    *(_QWORD *)(a1 + 8 * v2 + 1192) = v5;
  }
  return result;
}
