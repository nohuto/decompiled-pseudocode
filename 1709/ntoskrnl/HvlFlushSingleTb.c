/*
 * XREFs of HvlFlushSingleTb @ 0x140141058
 * Callers:
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x1400D034C (KeFlushSingleCurrentTb.c)
 * Callees:
 *     HvlpFlushRangeListTb @ 0x1401411D8 (HvlpFlushRangeListTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140141478 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTbEx @ 0x1401F0CD4 (HvlpFlushRangeListTbEx.c)
 */

char __fastcall HvlFlushSingleTb(int a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r9
  int v5; // r10d
  unsigned __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v4 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a1;
  v7 = v4;
  if ( a2 && (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls() )
  {
    LOBYTE(v4) = a3;
    LOBYTE(a3) = 1;
    HvlpFlushRangeListTbEx(v5, a2, a3, v4, 1, (__int64)&v7);
  }
  else
  {
    LOBYTE(v4) = a3;
    LOBYTE(a3) = 1;
    HvlpFlushRangeListTb(v5, a2, a3, v4, 1, (__int64)&v7);
  }
  return 1;
}
