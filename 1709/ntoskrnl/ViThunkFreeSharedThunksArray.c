/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x1407A2148
 * Callers:
 *     ViThunkCreateSharedExportInformation @ 0x1407A1F08 (ViThunkCreateSharedExportInformation.c)
 *     VfThunkAddTargetNotify @ 0x1407A1FC4 (VfThunkAddTargetNotify.c)
 *     VfThunkRemoveTargetNotify @ 0x1407A2108 (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ViThunkFreeSharedThunksArray(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x54496656u);
    *a1 = 0LL;
  }
}
