/*
 * XREFs of __tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll @ 0x180008AE0
 * Callers:
 *     __imp_load_DwmMonitorExtDwmProcessCreated @ 0x180008AD4 (__imp_load_DwmMonitorExtDwmProcessCreated.c)
 *     __imp_load_DwmMonitorExtInitialize @ 0x180008BAA (__imp_load_DwmMonitorExtInitialize.c)
 *     __imp_load_DwmMonitorExtCleanup @ 0x180008BB6 (__imp_load_DwmMonitorExtCleanup.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800082A0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
