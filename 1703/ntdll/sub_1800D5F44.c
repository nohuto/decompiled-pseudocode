/*
 * XREFs of sub_1800D5F44 @ 0x1800D5F44
 * Callers:
 *     sub_18003AAAC @ 0x18003AAAC (sub_18003AAAC.c)
 *     sub_1800D6040 @ 0x1800D6040 (sub_1800D6040.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 * Callees:
 *     sub_1800D6AA4 @ 0x1800D6AA4 (sub_1800D6AA4.c)
 */

__int64 __fastcall sub_1800D5F44(__int64 a1, _WORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 && *(_WORD *)a1 )
  {
    sub_1800D6AA4((_DWORD)a2, a3 >> 1, *(_QWORD *)(a1 + 8), (unsigned int)&v7, (__int64)&v8);
    result = a3 + 2 * (1 - v8);
    *a4 = result;
  }
  else
  {
    if ( a3 >= 2 )
      *a2 = 0;
    result = a3 < 2 ? 0 : 2;
    *a4 = result;
  }
  return result;
}
