/*
 * XREFs of ViFaultsIsTagPresentInList @ 0x1407B83F0
 * Callers:
 *     ViFaultsAddTagNoDuplicates @ 0x1407B80EC (ViFaultsAddTagNoDuplicates.c)
 *     ViFaultsIsTagTarget @ 0x1407B8438 (ViFaultsIsTagTarget.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x14017D4AC (ExCheckSingleFilter.c)
 */

__int64 __fastcall ViFaultsIsTagPresentInList(int a1)
{
  PVOID *v1; // r8
  PVOID *v2; // r11
  int v3; // r10d
  unsigned int v4; // r9d
  PVOID **v5; // r8

  v1 = (PVOID *)ViFaultTagsList;
  v2 = &ViFaultTagsList;
  v3 = a1;
  v4 = 0;
  while ( v1 != v2 )
  {
    if ( (unsigned int)ExCheckSingleFilter(v3, *((_DWORD *)v1 + 4)) )
      return 1;
    v1 = *v5;
  }
  return v4;
}
