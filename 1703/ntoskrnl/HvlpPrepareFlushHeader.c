/*
 * XREFs of HvlpPrepareFlushHeader @ 0x1401EBDF8
 * Callers:
 *     HvlpFastFlushAddressSpaceTb @ 0x1401EBA50 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFlushRangeListTb @ 0x1401EBCA8 (HvlpFlushRangeListTb.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1401EBE4C (HvlpSlowFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpAffinityToVirtualAffinity @ 0x1401EA3B0 (HvlpAffinityToVirtualAffinity.c)
 */

__int64 __fastcall HvlpPrepareFlushHeader(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  int v6; // eax
  int v7; // r9d
  unsigned int v8; // r9d
  unsigned __int64 v9; // rax
  __int64 result; // rax

  v4 = a2;
  v5 = a1;
  v6 = a4 == 0 ? 4 : 0;
  v7 = v6 | 2;
  if ( a2 )
    v7 = v6;
  if ( a3 )
  {
    v9 = HvlpAffinityToVirtualAffinity(*(_QWORD *)(a3 + 8));
    v5[2] = v9;
  }
  else
  {
    v8 = v7 | 1;
    a1[2] = 0LL;
  }
  result = v8;
  v5[1] = v8;
  *v5 = v4;
  return result;
}
