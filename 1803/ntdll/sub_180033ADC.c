/*
 * XREFs of sub_180033ADC @ 0x180033ADC
 * Callers:
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 * Callees:
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     LdrRscIsTypeExist @ 0x180033CA0 (LdrRscIsTypeExist.c)
 */

int __fastcall sub_180033ADC(void *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int result; // eax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v6 = sub_180033B60(a1);
  v7 = v6;
  if ( !v6 )
    return 0x80000;
  if ( (int)LdrRscIsTypeExist(v6, *a2, a4, &v9) < 0 )
    return 393216;
  result = v9;
  if ( (*(_DWORD *)(v7 + 20) & 0x100) != 0 )
    result = v9 | 0x100000;
  if ( (*(_BYTE *)(v7 + 16) & 0x10) != 0 )
    return result | 0x200000;
  return result;
}
