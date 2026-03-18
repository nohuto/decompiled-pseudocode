/*
 * XREFs of BgpFwLibraryDestroy @ 0x14083CFC4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x14083F8BC (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x14083C338 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x14083C66C (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x14083D0D8 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x14083D768 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_14039D898 )
  {
    BgpFoDestroy(qword_14039D898);
    if ( *(_QWORD *)qword_14039D898 && (*(_DWORD *)(qword_14039D898 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_14039D898);
    BgpFwFreeMemory(qword_14039D898);
    qword_14039D898 = 0LL;
  }
  if ( qword_14039D820 )
  {
    BgpFwFreeMemory(qword_14039D820);
    qword_14039D820 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_14039D8A0 = 0LL;
    qword_14039D8B8 = 0LL;
    qword_14039D8B0 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_14039D7F0 = 0;
  return 0LL;
}
