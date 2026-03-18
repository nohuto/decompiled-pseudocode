/*
 * XREFs of MiGetLargePageDemoteAsNeeded @ 0x1400C7BD4
 * Callers:
 *     MiGetLargePageChain @ 0x1400CACC8 (MiGetLargePageChain.c)
 *     MiFindLargeNodePage @ 0x140216B0C (MiFindLargeNodePage.c)
 *     MiGetFastLargePage @ 0x1406EBFA0 (MiGetFastLargePage.c)
 * Callees:
 *     MiGetFreeZeroLargePage @ 0x1400C4F80 (MiGetFreeZeroLargePage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x14012E980 (MiDemoteLargeFreeZeroPage.c)
 */

__int64 __fastcall MiGetLargePageDemoteAsNeeded(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 result; // rax

  v4 = a4;
  if ( (a4 & 0x8000) != 0 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 2;
    v4 = a4 | 0x8000;
  }
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = MiLargePageSizes[v10];
    if ( v11 <= a3 )
      break;
LABEL_11:
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= 3 )
      return 0LL;
  }
  if ( v11 >= 0x200 )
  {
    if ( !v9 )
      v9 = v10;
    result = MiGetFreeZeroLargePage(a1, v10, v4, a2, 0, 4);
    if ( result )
      return result;
    goto LABEL_11;
  }
  if ( v9 && (unsigned int)MiDemoteLargeFreeZeroPage(a1, a2, v9, v4) )
  {
    LODWORD(v10) = 0;
    goto LABEL_11;
  }
  if ( --v8 )
  {
    v4 &= ~0x8000u;
    LODWORD(v10) = -1;
    goto LABEL_11;
  }
  return 0LL;
}
