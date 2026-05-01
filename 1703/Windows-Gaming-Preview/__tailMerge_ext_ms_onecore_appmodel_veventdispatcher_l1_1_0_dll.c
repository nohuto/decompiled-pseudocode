/*
 * XREFs of __tailMerge_ext_ms_onecore_appmodel_veventdispatcher_l1_1_0_dll @ 0x180029FB6
 * Callers:
 *     __imp_load_VE_MaterializeApplicationActivator @ 0x180029FAA (__imp_load_VE_MaterializeApplicationActivator.c)
 *     __imp_load_VE_MaterializeApplicationActivatorNoImpersonationCachedUser @ 0x18002A169 (__imp_load_VE_MaterializeApplicationActivatorNoImpersonationCachedUser.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800286E0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_onecore_appmodel_veventdispatcher_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_onecore_appmodel_veventdispatcher_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
