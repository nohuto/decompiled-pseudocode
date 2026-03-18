/*
 * XREFs of IopFreeReqList @ 0x140616150
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x14016F33C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140615F30 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x140616020 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x1406168D4 (IopResourceRequirementsListToReqList.c)
 *     IopQueryConflictListInternal @ 0x14074071C (IopQueryConflictListInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopFreeReqAlternative @ 0x1406161A8 (IopFreeReqAlternative.c)
 */

void __fastcall IopFreeReqList(_QWORD *P)
{
  __int64 i; // rsi

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 8); i = (unsigned int)(i + 1) )
    {
      IopFreeReqAlternative(P[i + 5]);
      P[i + 5] = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
