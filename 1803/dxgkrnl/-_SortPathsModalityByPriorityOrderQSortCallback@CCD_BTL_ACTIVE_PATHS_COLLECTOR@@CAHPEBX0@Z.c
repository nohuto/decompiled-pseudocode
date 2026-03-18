/*
 * XREFs of ?_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@CAHPEBX0@Z @ 0x1C00D66B0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C001C500 (memcmp.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback(_DWORD *a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int result; // eax
  unsigned int v10; // eax
  unsigned int v11; // ecx

  v4 = *(_QWORD *)a1 & 0x8000000000000000uLL;
  if ( v4 != (*(_QWORD *)a2 & 0x8000000000000000uLL) )
    return v4 != 0 ? -1 : 1;
  v5 = a1[63];
  v6 = a2[63];
  if ( v5 > v6 )
    return 1;
  if ( v5 < v6 )
    return -1;
  v7 = a1[7];
  v8 = a2[7];
  if ( v7 > v8 )
    return 1;
  if ( v7 < v8 )
    return -1;
  result = memcmp(a1 + 4, a2 + 4, 8uLL);
  if ( !result )
  {
    v10 = a1[6];
    v11 = a2[6];
    if ( v10 <= v11 )
      return -(v10 < v11);
    return 1;
  }
  return result;
}
