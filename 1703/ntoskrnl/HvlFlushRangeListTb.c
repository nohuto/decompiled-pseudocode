/*
 * XREFs of HvlFlushRangeListTb @ 0x1401EB824
 * Callers:
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x1400D7E80 (MiAgeWorkingSetTail.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401EA4F0 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTb @ 0x1401EBCA8 (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x1401EBD34 (HvlpFlushRangeListTbEx.c)
 */

char __fastcall HvlFlushRangeListTb(int a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  int v6; // r10d

  v6 = a1;
  if ( a2 && HvlpUseExtendedProcessorSetHypercalls() )
    HvlpFlushRangeListTbEx(v6, a2, a3, a4, a5, a6);
  else
    HvlpFlushRangeListTb(v6, a2, a3, a4, a5, a6);
  return 1;
}
