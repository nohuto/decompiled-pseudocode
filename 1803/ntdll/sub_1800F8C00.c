/*
 * XREFs of sub_1800F8C00 @ 0x1800F8C00
 * Callers:
 *     sub_1800FADB0 @ 0x1800FADB0 (sub_1800FADB0.c)
 * Callees:
 *     sub_180032C68 @ 0x180032C68 (sub_180032C68.c)
 */

_QWORD *__fastcall sub_1800F8C00(unsigned int a1)
{
  _QWORD *result; // rax
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  result = sub_180032C68(0x18u, 4u, 0x1Cu, 0, 0, &v2);
  if ( result )
  {
    *(_DWORD *)result = v2;
    result[2] = result + 3;
    *((_DWORD *)result + 1) = 4;
  }
  return result;
}
