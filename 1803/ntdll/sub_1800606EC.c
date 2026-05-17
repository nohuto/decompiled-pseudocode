/*
 * XREFs of sub_1800606EC @ 0x1800606EC
 * Callers:
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_18005FF9C @ 0x18005FF9C (sub_18005FF9C.c)
 *     sub_1800605B4 @ 0x1800605B4 (sub_1800605B4.c)
 * Callees:
 *     sub_1800609A8 @ 0x1800609A8 (sub_1800609A8.c)
 */

__int64 __fastcall sub_1800606EC(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // eax
  unsigned int i; // ebx
  int v5; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 45);
  v2 = 0;
  for ( i = 0; v2 < v1; v2 = v7 + v5 )
  {
    v5 = sub_1800609A8(a1, v2, &v7);
    if ( v5 == -1 )
      break;
    i += v7;
  }
  return i;
}
