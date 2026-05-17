/*
 * XREFs of sub_18005DFE4 @ 0x18005DFE4
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_1800173E0 @ 0x1800173E0 (sub_1800173E0.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_18005DDCC @ 0x18005DDCC (sub_18005DDCC.c)
 *     sub_18005E1FC @ 0x18005E1FC (sub_18005E1FC.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_180083574 @ 0x180083574 (sub_180083574.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_18005DFE4(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *a1 >> 8;
  v2 = 2LL;
  if ( (unsigned __int8)v1 < 2u )
    v2 = (unsigned __int8)v1;
  return (char *)&unk_1801608C0 + 16 * v2;
}
