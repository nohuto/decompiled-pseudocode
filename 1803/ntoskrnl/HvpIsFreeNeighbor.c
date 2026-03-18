/*
 * XREFs of HvpIsFreeNeighbor @ 0x140515A2C
 * Callers:
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     HvpDelistFreeCell @ 0x140515AE0 (HvpDelistFreeCell.c)
 */

char __fastcall HvpIsFreeNeighbor(ULONG_PTR BugCheckParameter2, _DWORD *a2, int *a3, int **a4, int a5)
{
  __int64 v5; // rbx
  int *i; // rbx
  __int64 v9; // rax

  v5 = *a3;
  *a4 = 0LL;
  i = (int *)((char *)a3 + v5);
  if ( (unsigned int)((_DWORD)i - (_DWORD)a2) < a2[2] && *i > 0 )
  {
    *a4 = i;
  }
  else
  {
    for ( i = a2 + 8; ; i = (int *)((char *)i + v9) )
    {
      while ( 1 )
      {
        if ( i >= a3 )
          return 0;
        v9 = *i;
        if ( (int)v9 > 0 )
          break;
        i = (int *)((char *)i - v9);
      }
      if ( (int *)((char *)i + v9) == a3 )
        break;
    }
    *a4 = i;
    if ( a5 != 1 && !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)((_DWORD)i + a2[1] - (_DWORD)a2), 1) )
      return 0;
  }
  HvpDelistFreeCell(BugCheckParameter2, (unsigned int)((_DWORD)i + (a5 << 31) + a2[1] - (_DWORD)a2));
  return 1;
}
