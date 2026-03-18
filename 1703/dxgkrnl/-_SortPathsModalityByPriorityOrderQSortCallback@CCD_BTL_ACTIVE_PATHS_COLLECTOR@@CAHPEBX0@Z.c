/*
 * XREFs of ?_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@CAHPEBX0@Z @ 0x1C009C320
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C00151F0 (memcmp.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback(__int64 *a1, _DWORD *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int result; // eax
  unsigned int v9; // eax
  unsigned int v10; // ecx

  if ( (*(_QWORD *)a2 ^ *a1) < 0 )
  {
    result = 1;
    if ( *a1 < 0 )
      return -1;
  }
  else
  {
    v4 = *((_DWORD *)a1 + 53);
    v5 = a2[53];
    if ( v4 > v5 )
      return 1;
    if ( v4 < v5 )
      return -1;
    v6 = *((_DWORD *)a1 + 7);
    v7 = a2[7];
    if ( v6 > v7 )
      return 1;
    if ( v6 < v7 )
      return -1;
    result = memcmp(a1 + 2, a2 + 4, 8uLL);
    if ( !result )
    {
      v9 = *((_DWORD *)a1 + 6);
      v10 = a2[6];
      if ( v9 <= v10 )
        return -(v9 < v10);
      return 1;
    }
  }
  return result;
}
