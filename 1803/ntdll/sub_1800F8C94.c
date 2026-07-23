/*
 * XREFs of sub_1800F8C94 @ 0x1800F8C94
 * Callers:
 *     sub_1800FA128 @ 0x1800FA128 (sub_1800FA128.c)
 *     sub_1800FADB0 @ 0x1800FADB0 (sub_1800FADB0.c)
 * Callees:
 *     sub_180032C68 @ 0x180032C68 (sub_180032C68.c)
 */

_QWORD *__fastcall sub_1800F8C94(int a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  _QWORD *result; // rax
  _WORD *v5; // rcx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = 4;
  v3 = 40;
  if ( a1 >= 1 )
    v2 = a1;
  if ( a2 >= 1 )
    v3 = a2;
  result = sub_180032C68(0x20u, v2, 2u, v3, 2u, &v6);
  if ( result )
  {
    *(_DWORD *)result = v6;
    result[2] = result + 4;
    *((_WORD *)result + 4) = v3;
    *((_WORD *)result + 2) = v2;
    v5 = (_WORD *)result + (unsigned __int16)v2 + 16;
    result[3] = v5;
    *v5 = 0;
    *((_WORD *)result + 5) = 1;
    *(_WORD *)result[2] = 0;
    *((_WORD *)result + 3) = 1;
  }
  return result;
}
