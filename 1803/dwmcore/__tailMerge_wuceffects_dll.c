/*
 * XREFs of __tailMerge_wuceffects_dll @ 0x1800DC100
 * Callers:
 *     __imp_load_CompileEffectDescription @ 0x1800DC0F4 (__imp_load_CompileEffectDescription.c)
 *     __imp_load_DeserializeEffectDescription @ 0x1800DC179 (__imp_load_DeserializeEffectDescription.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800C9150 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_wuceffects_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_wuceffects_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
