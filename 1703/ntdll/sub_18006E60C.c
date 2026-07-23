/*
 * XREFs of sub_18006E60C @ 0x18006E60C
 * Callers:
 *     sub_18006CFF8 @ 0x18006CFF8 (sub_18006CFF8.c)
 *     sub_18006E4FC @ 0x18006E4FC (sub_18006E4FC.c)
 * Callees:
 *     sub_180047190 @ 0x180047190 (sub_180047190.c)
 */

_QWORD *__fastcall sub_18006E60C(int a1)
{
  unsigned int v1; // ebx
  _QWORD *result; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1;
  if ( a1 < 1 )
    v1 = 4;
  result = sub_180047190(0x10u, v1, 0xCu, 0, 0, &v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    result[1] = result + 2;
    *((_WORD *)result + 2) = 0;
    *((_WORD *)result + 3) = v1;
  }
  return result;
}
