/*
 * XREFs of BgpFwLibraryDestroy @ 0x1407D0C28
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x1407D2EDC (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     BgpFwLibraryDisable @ 0x1407CE670 (BgpFwLibraryDisable.c)
 *     BgpFwInitializeReservePool @ 0x1407D0848 (BgpFwInitializeReservePool.c)
 *     BgpFoDestroy @ 0x1407D0A18 (BgpFoDestroy.c)
 *     ResFwBackgroundTransition @ 0x1407D0BC4 (ResFwBackgroundTransition.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_14035A248 )
  {
    BgpFoDestroy(qword_14035A248);
    if ( *(_QWORD *)qword_14035A248 && (*(_DWORD *)(qword_14035A248 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_14035A248);
    BgpFwFreeMemory(qword_14035A248);
    qword_14035A248 = 0LL;
  }
  if ( qword_14035A1E0 )
  {
    BgpFwFreeMemory(qword_14035A1E0);
    qword_14035A1E0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_14035A250 = 0LL;
    qword_14035A268 = 0LL;
    qword_14035A260 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_14035A1B0 = 0;
  return 0LL;
}
