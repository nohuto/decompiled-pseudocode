/*
 * XREFs of HvlFlushRangeListTb @ 0x140141198
 * Callers:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140057530 (KeFlushMultipleRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401502AC (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     HvlpFlushRangeListTb @ 0x1401411D8 (HvlpFlushRangeListTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140141478 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTbEx @ 0x1401F0CD4 (HvlpFlushRangeListTbEx.c)
 */

char __fastcall HvlFlushRangeListTb(int a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  int v6; // r10d

  v6 = a1;
  if ( a2 && (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls() )
    HvlpFlushRangeListTbEx(v6, a2, a3, a4, a5, a6);
  else
    HvlpFlushRangeListTb(v6, a2, a3, a4, a5, a6);
  return 1;
}
