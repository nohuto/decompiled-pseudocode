/*
 * XREFs of BgpFwLibraryDisable @ 0x14083D0D8
 * Callers:
 *     BgLibraryDisable @ 0x14083CF88 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x14083CFC4 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AnFwFadeCompletion @ 0x14083B3E4 (AnFwFadeCompletion.c)
 *     LogFwReport @ 0x14083B7D8 (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x14083C338 (ResFwBackgroundTransition.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14083C5F0 (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpTxtDestroyRegion @ 0x14083D1D0 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x14083D254 (AnFwDisplayProgressIndicator.c)
 *     BgpFoDestroy @ 0x14083D768 (BgpFoDestroy.c)
 */

unsigned __int64 BgpFwLibraryDisable()
{
  unsigned __int64 result; // rax

  result = (unsigned int)dword_14039D7F0;
  if ( (dword_14039D7F0 & 2) != 0 )
  {
    if ( (dword_14039D7F0 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_14039D8B8 )
    {
      BgpTxtDestroyRegion(qword_14039D8B8);
      if ( BgpTextRegionSave == qword_14039D8B8 )
        BgpTextRegionSave = 0LL;
      qword_14039D8B8 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_14039D8B0 )
    {
      BgpTxtDestroyRegion(qword_14039D8B0);
      if ( BgpAnimationRegionSave == qword_14039D8B0 )
        BgpAnimationRegionSave = 0LL;
      qword_14039D8B0 = 0LL;
    }
    if ( qword_14039D898 )
    {
      BgpFoDestroy(qword_14039D898);
      if ( *(_QWORD *)qword_14039D898 )
      {
        if ( (*(_DWORD *)(qword_14039D898 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_14039D898);
      }
      BgpFwFreeMemory(qword_14039D898);
      qword_14039D898 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = (unsigned __int64)memset(&BgInternal, 0, 0x28uLL);
    dword_14039D7F0 &= ~2u;
  }
  return result;
}
