/*
 * XREFs of IopFreeReqList @ 0x1405B1290
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140156B64 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1405B1068 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1405B1160 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x1405B1A14 (IopResourceRequirementsListToReqList.c)
 *     IopQueryConflictListInternal @ 0x1406AB614 (IopQueryConflictListInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopFreeReqAlternative @ 0x1405B12E8 (IopFreeReqAlternative.c)
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
