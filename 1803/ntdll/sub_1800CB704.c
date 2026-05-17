/*
 * XREFs of sub_1800CB704 @ 0x1800CB704
 * Callers:
 *     sub_1800420A8 @ 0x1800420A8 (sub_1800420A8.c)
 *     sub_1800CB800 @ 0x1800CB800 (sub_1800CB800.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 * Callees:
 *     sub_1800CC52C @ 0x1800CC52C (sub_1800CC52C.c)
 */

unsigned __int64 __fastcall sub_1800CB704(__int64 a1, _WORD *a2, unsigned int a3, int *a4)
{
  unsigned __int64 result; // rax
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF

  result = (unsigned __int64)a2;
  if ( a1 && *(_WORD *)a1 )
  {
    sub_1800CC52C((_DWORD)a2, a3 >> 1, *(_QWORD *)(a1 + 8), (unsigned int)&v8, (__int64)&v9);
    result = (unsigned int)(1 - v9);
    v7 = a3 + 2 * result;
  }
  else
  {
    v7 = 2;
    if ( a3 < 2 )
      v7 = 0;
    else
      *a2 = 0;
  }
  *a4 = v7;
  return result;
}
