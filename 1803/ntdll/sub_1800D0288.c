/*
 * XREFs of sub_1800D0288 @ 0x1800D0288
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     <none>
 */

char sub_1800D0288()
{
  char v0; // dl
  char v1; // r8
  char v2; // al

  v0 = 0;
  if ( ((*((_QWORD *)&xmmword_18016F370 + 1) >> 20) & 3) == 1
    || (BYTE10(xmmword_18016F370) & 3) == 1
    || (BYTE11(xmmword_18016F370) & 3) == 1
    || ((*((_QWORD *)&xmmword_18016F370 + 1) >> 28) & 3) == 1
    || (BYTE12(xmmword_18016F370) & 3) == 1
    || (v1 = 0, (BYTE13(xmmword_18016F370) & 3) == 1) )
  {
    v1 = 1;
  }
  if ( (((unsigned __int64)qword_18016F3A8 >> 20) & 3) == 1
    || (BYTE2(qword_18016F3A8) & 3) == 1
    || (BYTE3(qword_18016F3A8) & 3) == 1
    || (((unsigned __int64)qword_18016F3A8 >> 28) & 3) == 1
    || (BYTE4(qword_18016F3A8) & 3) == 1
    || (v2 = 0, (BYTE5(qword_18016F3A8) & 3) == 1) )
  {
    v2 = 1;
  }
  if ( v1 || v2 )
    return 1;
  return v0;
}
