/*
 * XREFs of sub_18007483C @ 0x18007483C
 * Callers:
 *     sub_1800747E4 @ 0x1800747E4 (sub_1800747E4.c)
 * Callees:
 *     sub_18007488C @ 0x18007488C (sub_18007488C.c)
 */

__int64 __fastcall sub_18007483C(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  result = sub_18007488C(a1, 192LL, &v6);
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
