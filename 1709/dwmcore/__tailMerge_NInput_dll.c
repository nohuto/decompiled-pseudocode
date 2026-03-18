/*
 * XREFs of __tailMerge_NInput_dll @ 0x1800C3A68
 * Callers:
 *     __imp_load_DestroyInteractionContext @ 0x1800C3A5C (__imp_load_DestroyInteractionContext.c)
 *     __imp_load_StopInteractionContext @ 0x1800C3AE1 (__imp_load_StopInteractionContext.c)
 *     __imp_load_ProcessPointerFramesInteractionContext @ 0x1800C3AED (__imp_load_ProcessPointerFramesInteractionContext.c)
 *     __imp_load_CreateInteractionContext @ 0x1800C3AF9 (__imp_load_CreateInteractionContext.c)
 *     __imp_load_ResetInteractionContext @ 0x1800C3B05 (__imp_load_ResetInteractionContext.c)
 *     __imp_load_SetPropertyInteractionContext @ 0x1800C3B11 (__imp_load_SetPropertyInteractionContext.c)
 *     __imp_load_SetInteractionConfigurationInteractionContext @ 0x1800C3B1D (__imp_load_SetInteractionConfigurationInteractionContext.c)
 *     __imp_load_RegisterOutputCallbackInteractionContext @ 0x1800C3B29 (__imp_load_RegisterOutputCallbackInteractionContext.c)
 *     __imp_load_OutputPredictionInteractionContext @ 0x1800C3B35 (__imp_load_OutputPredictionInteractionContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800C0DF0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_NInput_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_NInput_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
