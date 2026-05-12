/*
 * XREFs of RaDeleteTagList @ 0x1C005E580
 * Callers:
 *     RaidUnitFreeResources @ 0x1C00132D0 (RaidUnitFreeResources.c)
 * Callees:
 *     <none>
 */

void __fastcall RaDeleteTagList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 64);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4D546152u);
  if ( *(_QWORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)a1, 0x4D546152u);
}
