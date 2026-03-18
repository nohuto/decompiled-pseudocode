/*
 * XREFs of BgpFwLibraryDisable @ 0x1407CE670
 * Callers:
 *     BgLibraryDisable @ 0x1407D0994 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x1407D0C28 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407CE2F4 (AnFwDisableBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x1407CE4FC (LogFwReport.c)
 *     BgpTxtDestroyRegion @ 0x1407CF358 (BgpTxtDestroyRegion.c)
 *     AnFwFadeCompletion @ 0x1407CF3B8 (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x1407CFA7C (AnFwDisplayProgressIndicator.c)
 *     BgpFoDestroy @ 0x1407D0A18 (BgpFoDestroy.c)
 *     ResFwpPageOutBackground @ 0x1407D0B10 (ResFwpPageOutBackground.c)
 */

unsigned __int64 BgpFwLibraryDisable()
{
  unsigned __int64 result; // rax

  result = (unsigned int)dword_14035A1B0;
  if ( (dword_14035A1B0 & 2) != 0 )
  {
    if ( (dword_14035A1B0 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_14035A268 )
    {
      BgpTxtDestroyRegion();
      if ( BgpTextRegionSave == qword_14035A268 )
        BgpTextRegionSave = 0LL;
      qword_14035A268 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_14035A260 )
    {
      BgpTxtDestroyRegion();
      if ( BgpAnimationRegionSave == qword_14035A260 )
        BgpAnimationRegionSave = 0LL;
      qword_14035A260 = 0LL;
    }
    if ( qword_14035A248 )
    {
      BgpFoDestroy();
      if ( *(_QWORD *)qword_14035A248 )
      {
        if ( (*(_DWORD *)(qword_14035A248 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_14035A248);
      }
      BgpFwFreeMemory(qword_14035A248);
      qword_14035A248 = 0LL;
    }
    LogFwReport();
    ResFwpPageOutBackground();
    result = (unsigned __int64)memset(&BgInternal, 0, 0x28uLL);
    dword_14035A1B0 &= ~2u;
  }
  return result;
}
