/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x140762178
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140761E3C (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140761F14 (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x140762268 (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
