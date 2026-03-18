/*
 * XREFs of MiGetLargePageDemoteAsNeeded @ 0x140128DC4
 * Callers:
 *     MiGetLargePageChain @ 0x140128D4C (MiGetLargePageChain.c)
 *     MiFindLargeNodePage @ 0x14020EDB8 (MiFindLargeNodePage.c)
 *     MiGetFastLargePage @ 0x1406BECF0 (MiGetFastLargePage.c)
 * Callees:
 *     MiDemoteLargeFreeZeroPage @ 0x140125774 (MiDemoteLargeFreeZeroPage.c)
 *     MiGetFreeZeroLargePage @ 0x140128E70 (MiGetFreeZeroLargePage.c)
 */

__int64 __fastcall MiGetLargePageDemoteAsNeeded(int a1, int a2, unsigned __int64 a3, int a4)
{
  int v4; // edi
  __int64 v6; // rbx
  unsigned __int64 v10; // r10
  __int64 result; // rax

  v4 = 0;
  v6 = 0LL;
  while ( 1 )
  {
    v10 = MiLargePageSizes[v6];
    if ( v10 <= a3 )
      break;
LABEL_11:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 3 )
      return 0LL;
  }
  if ( v10 >= 0x200 )
  {
    if ( !v4 )
      v4 = v6;
    result = MiGetFreeZeroLargePage(a1, v6, a4, a2, 4);
    if ( result )
      return result;
    goto LABEL_11;
  }
  if ( v4 && (unsigned int)MiDemoteLargeFreeZeroPage(a1, a2, v4, a4) )
  {
    LODWORD(v6) = 0;
    goto LABEL_11;
  }
  return 0LL;
}
