/*
 * XREFs of sub_18007007C @ 0x18007007C
 * Callers:
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 *     sub_18006FF54 @ 0x18006FF54 (sub_18006FF54.c)
 * Callees:
 *     sub_180032C68 @ 0x180032C68 (sub_180032C68.c)
 */

_QWORD *__fastcall sub_18007007C(int a1)
{
  unsigned int v1; // ebx
  _QWORD *result; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 4;
  if ( a1 >= 1 )
    v1 = a1;
  result = sub_180032C68(0x10u, v1, 0xCu, 0, 0, &v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    result[1] = result + 2;
    *((_WORD *)result + 2) = 0;
    *((_WORD *)result + 3) = v1;
  }
  return result;
}
