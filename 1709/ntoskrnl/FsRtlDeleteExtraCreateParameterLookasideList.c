/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x1406AF6C0
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x140123CD0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x140155440 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
