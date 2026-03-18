/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x14080F2A4
 * Callers:
 *     VfThunkRemoveTargetNotify @ 0x14080EE38 (VfThunkRemoveTargetNotify.c)
 *     VfThunkAddTargetNotify @ 0x14080EF64 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x14080F03C (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
