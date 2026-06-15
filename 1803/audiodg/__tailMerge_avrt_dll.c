/*
 * XREFs of __tailMerge_avrt_dll @ 0x14001D441
 * Callers:
 *     __imp_load_AvRevertMmThreadCharacteristics @ 0x14001D435 (__imp_load_AvRevertMmThreadCharacteristics.c)
 *     __imp_load_AvQuerySystemResponsiveness @ 0x14001D4BA (__imp_load_AvQuerySystemResponsiveness.c)
 *     __imp_load_AvSetMmThreadPriority @ 0x14001D4C6 (__imp_load_AvSetMmThreadPriority.c)
 *     __imp_load_AvSetMmThreadCharacteristicsA @ 0x14001D4D2 (__imp_load_AvSetMmThreadCharacteristicsA.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x14001B170 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_avrt_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_AVRT_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
