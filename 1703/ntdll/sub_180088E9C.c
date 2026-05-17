/*
 * XREFs of sub_180088E9C @ 0x180088E9C
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_1800397BC @ 0x1800397BC (sub_1800397BC.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_180088F00 @ 0x180088F00 (sub_180088F00.c)
 */

__int64 __fastcall sub_180088E9C(__int64 a1)
{
  int v2; // edi

  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 6;
  v2 = sub_180088F00(a1);
  if ( v2 >= 0 )
  {
    sub_1800397BC(a1, 1u);
    sub_18003CA5C(*(_QWORD *)(a1 + 48), a1 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 7;
  }
  return (unsigned int)v2;
}
