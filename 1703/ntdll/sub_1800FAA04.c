/*
 * XREFs of sub_1800FAA04 @ 0x1800FAA04
 * Callers:
 *     sub_1800FBD34 @ 0x1800FBD34 (sub_1800FBD34.c)
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 * Callees:
 *     sub_180047190 @ 0x180047190 (sub_180047190.c)
 */

_QWORD *__fastcall sub_1800FAA04(int a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  _QWORD *result; // rax
  _WORD *v5; // rdx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  v3 = a2;
  if ( a1 < 1 )
    v2 = 4;
  if ( a2 < 1 )
    v3 = 40;
  result = sub_180047190(0x20u, v2, 2u, v3, 2u, &v6);
  if ( result )
  {
    *(_DWORD *)result = v6;
    result[2] = result + 4;
    *((_WORD *)result + 2) = v2;
    *((_WORD *)result + 4) = v3;
    v5 = (_WORD *)result + (unsigned __int16)v2 + 16;
    result[3] = v5;
    *v5 = 0;
    *((_WORD *)result + 5) = 1;
    *(_WORD *)result[2] = 0;
    *((_WORD *)result + 3) = 1;
  }
  return result;
}
