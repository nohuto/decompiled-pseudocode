/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x140713E70
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x1400C2E60 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x140163E90 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
