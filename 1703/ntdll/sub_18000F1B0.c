/*
 * XREFs of sub_18000F1B0 @ 0x18000F1B0
 * Callers:
 *     sub_18000C7C0 @ 0x18000C7C0 (sub_18000C7C0.c)
 *     sub_18000C9D0 @ 0x18000C9D0 (sub_18000C9D0.c)
 *     sub_180080558 @ 0x180080558 (sub_180080558.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

_BYTE *__fastcall sub_18000F1B0(_BYTE *a1, char a2, int a3)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x38uLL);
  if ( a3 == -1 )
    *a1 |= 1u;
  else
    a1[2] = a3;
  *((_QWORD *)a1 + 2) = 0LL;
  a1[1] = a2;
  *((_QWORD *)a1 + 4) = a1 + 24;
  *((_QWORD *)a1 + 3) = a1 + 24;
  result = a1 + 40;
  *((_QWORD *)a1 + 6) = a1 + 40;
  *((_QWORD *)a1 + 5) = a1 + 40;
  return result;
}
