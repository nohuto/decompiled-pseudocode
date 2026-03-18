/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x14058F1E4
 * Callers:
 *     PnpAllocateResources @ 0x140554F4C (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140557750 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReallocateResources @ 0x1406D2960 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1406D2B30 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1406D4C1C (PnpRebalance.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x14058F240 (IopFreeReqList.c)
 */

void __fastcall PnpFreeResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2)
{
  PVOID *v2; // rdi
  unsigned __int64 v3; // rbx

  if ( a1 < a2 )
  {
    v2 = (PVOID *)(a1 + 24);
    v3 = ((a2 - a1 - 1) >> 6) + 1;
    do
    {
      IopFreeReqList(v2[1]);
      v2[1] = 0LL;
      if ( (*(_DWORD *)(v2 - 2) & 0x200) != 0 )
      {
        if ( *v2 )
        {
          ExFreePoolWithTag(*v2, 0);
          *v2 = 0LL;
        }
      }
      v2 += 8;
      --v3;
    }
    while ( v3 );
  }
}
