/*
 * XREFs of BgpFwLibraryDestroy @ 0x140758A70
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x140759D10 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x140755EE8 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x140755FB0 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140758B48 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x140758CA0 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  __int64 v1; // rcx

  BgpFoDestroy(0LL);
  if ( qword_140341AC8 )
  {
    BgpFoDestroy(qword_140341AC8);
    v1 = qword_140341AC8;
    if ( *(_QWORD *)qword_140341AC8 && (*(_DWORD *)(qword_140341AC8 + 12) & 1) == 0 )
    {
      BgpFwFreeMemory(*(_QWORD *)qword_140341AC8);
      v1 = qword_140341AC8;
    }
    BgpFwFreeMemory(v1);
    qword_140341AC8 = 0LL;
  }
  if ( qword_140341A60 )
  {
    BgpFwFreeMemory(qword_140341A60);
    qword_140341A60 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140341AD0 = 0LL;
    qword_140341AE8 = 0LL;
    qword_140341AE0 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_140341A30 = 0;
  return 0LL;
}
