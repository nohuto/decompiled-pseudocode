/*
 * XREFs of ViFaultsIsTagTarget @ 0x140825698
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x140824D1C (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x1401A70B0 (ExCheckSingleFilter.c)
 *     ViFaultsIsTagPresentInList @ 0x140825650 (ViFaultsIsTagPresentInList.c)
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
      ++dword_140842280;
    else
      ++dword_14084227C;
  }
  return IsTagPresentInList;
}
