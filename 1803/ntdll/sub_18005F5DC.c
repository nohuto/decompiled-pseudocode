/*
 * XREFs of sub_18005F5DC @ 0x18005F5DC
 * Callers:
 *     sub_18005F458 @ 0x18005F458 (sub_18005F458.c)
 *     sub_18005F570 @ 0x18005F570 (sub_18005F570.c)
 *     sub_18007E9DC @ 0x18007E9DC (sub_18007E9DC.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

_BYTE *__fastcall sub_18005F5DC(_BYTE *a1, char a2, int a3)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x38uLL);
  if ( a3 == -1 )
    *a1 = 1;
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
