/*
 * XREFs of ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0053F28
 * Callers:
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0053EB8 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0086DF8 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C0155758 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C0155CF0 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void *__fastcall CitAllocZero(size_t Size)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = (void *)Win32AllocPool(Size, 0x49637355u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, Size);
  return v3;
}
