/*
 * XREFs of ViFaultsIsTagTarget @ 0x1407B8438
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x1407B7ABC (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x14017D4AC (ExCheckSingleFilter.c)
 *     ViFaultsIsTagPresentInList @ 0x1407B83F0 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsIsTagTarget(int a1)
{
  int v1; // r8d
  int v2; // r8d
  unsigned int IsTagPresentInList; // ecx

  if ( (unsigned int)ExCheckSingleFilter(a1, 1786137926) || (unsigned int)ExCheckSingleFilter(v1, 1819692358) )
    return 0LL;
  IsTagPresentInList = ViFaultTagsList == &ViFaultTagsList;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    IsTagPresentInList = ViFaultsIsTagPresentInList(v2);
    if ( IsTagPresentInList )
      ++dword_1407D5280;
    else
      ++dword_1407D527C;
  }
  return IsTagPresentInList;
}
