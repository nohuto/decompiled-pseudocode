/*
 * XREFs of sub_1800EF244 @ 0x1800EF244
 * Callers:
 *     sub_1800EB148 @ 0x1800EB148 (sub_1800EB148.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EF244(int a1)
{
  int v2; // r8d
  int v3; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // ecx
  __int64 result; // rax

  v2 = a1 & 1 | 8;
  if ( (a1 & 2) == 0 )
    v2 = a1 & 1;
  v3 = v2 | 0x8000000;
  if ( (a1 & 0x20000000) == 0 )
    v3 = v2;
  v5 = v3 | 0x20;
  if ( (a1 & 0x10000000) == 0 )
    v5 = v3;
  v6 = v5 | 0x40000;
  if ( (a1 & 0x40000000) == 0 )
    v6 = v5;
  v7 = v6 | 0x100;
  if ( (a1 & 0x100) == 0 )
    v7 = v6;
  v8 = a1 & 0xE00 | v7;
  if ( (a1 & 0xE00) == 0 )
    v8 = v7;
  result = v8 | 0x8000000;
  if ( (a1 & 0x200) == 0 )
    return v8;
  return result;
}
