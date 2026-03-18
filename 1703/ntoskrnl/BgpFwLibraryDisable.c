/*
 * XREFs of BgpFwLibraryDisable @ 0x140758B48
 * Callers:
 *     BgLibraryDisable @ 0x140758A34 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x140758A70 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407557D8 (AnFwDisableBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x140755B14 (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x140755EE8 (ResFwBackgroundTransition.c)
 *     AnFwFadeCompletion @ 0x140756C7C (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140757A8C (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140758C40 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x140758CA0 (BgpFoDestroy.c)
 */

unsigned __int64 BgpFwLibraryDisable()
{
  unsigned __int64 result; // rax
  __int64 v1; // rcx

  result = (unsigned int)dword_140341A30;
  if ( (dword_140341A30 & 2) != 0 )
  {
    if ( (dword_140341A30 & 0x1000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140341AE8 )
    {
      BgpTxtDestroyRegion(qword_140341AE8);
      if ( BgpTextRegionSave == qword_140341AE8 )
        BgpTextRegionSave = 0LL;
      qword_140341AE8 = 0LL;
    }
    AnFwDisplayProgressIndicator(0);
    if ( qword_140341AE0 )
    {
      BgpTxtDestroyRegion(qword_140341AE0);
      if ( BgpAnimationRegionSave == qword_140341AE0 )
        BgpAnimationRegionSave = 0LL;
      qword_140341AE0 = 0LL;
    }
    if ( qword_140341AC8 )
    {
      BgpFoDestroy(qword_140341AC8);
      v1 = qword_140341AC8;
      if ( *(_QWORD *)qword_140341AC8 )
      {
        if ( (*(_DWORD *)(qword_140341AC8 + 12) & 1) == 0 )
        {
          BgpFwFreeMemory(*(_QWORD *)qword_140341AC8);
          v1 = qword_140341AC8;
        }
      }
      BgpFwFreeMemory(v1);
      qword_140341AC8 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = (unsigned __int64)memset(&BgInternal, 0, 0x28uLL);
    dword_140341A30 &= ~2u;
  }
  return result;
}
