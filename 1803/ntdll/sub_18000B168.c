/*
 * XREFs of sub_18000B168 @ 0x18000B168
 * Callers:
 *     sub_18000B108 @ 0x18000B108 (sub_18000B108.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 */

_BYTE *__fastcall sub_18000B168(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // r9d
  _BYTE *v3; // r8
  int v5; // ecx
  int v6; // eax

  v2 = 0;
  while ( 1 )
  {
    v3 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( (*v3 & 0x20) == 0 )
      break;
    v5 = (unsigned __int8)v3[2];
    v6 = v5 + 1;
    if ( (v5 & 1) == 0 )
      v6 = (unsigned __int8)v3[2];
    ++v2;
    a1 = &v3[2 * v6 + 4];
    if ( v2 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
