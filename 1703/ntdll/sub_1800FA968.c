/*
 * XREFs of sub_1800FA968 @ 0x1800FA968
 * Callers:
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 * Callees:
 *     sub_180047190 @ 0x180047190 (sub_180047190.c)
 */

_QWORD *__fastcall sub_1800FA968(unsigned int a1)
{
  _QWORD *result; // rax
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  result = sub_180047190(0x18u, 4u, 0x1Cu, 0, 0, &v2);
  if ( result )
  {
    *(_DWORD *)result = v2;
    result[2] = result + 3;
    *((_DWORD *)result + 1) = 4;
  }
  return result;
}
