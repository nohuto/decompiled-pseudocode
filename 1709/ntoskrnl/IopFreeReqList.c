/*
 * XREFs of IopFreeReqList @ 0x14058F240
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x14014DF30 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopResourceRequirementsListToReqList @ 0x1405596CC (IopResourceRequirementsListToReqList.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14058F1E4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1405D1F00 (IopAllocateBootResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1406D68B4 (IopQueryConflictListInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopFreeReqAlternative @ 0x14058F298 (IopFreeReqAlternative.c)
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
