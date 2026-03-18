/*
 * XREFs of GreEnableEUDC @ 0x1C00BF0E4
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00BEF54 (-CleanUpEUDC@@YAXXZ.c)
 *     NtGdiEnableEudc @ 0x1C00BF0D0 (NtGdiEnableEudc.c)
 * Callees:
 *     bDeleteAllFlEntry @ 0x1C0040B50 (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0x1C00C16B8 (bAddAllFlEntry.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01454EC (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C027394C (-bSetupDefaultFlEntry@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(int a1)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx

  if ( ghsemEUDC1 && ghsemEnableEUDC )
  {
    if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    {
      return 0LL;
    }
    else
    {
      GreAcquireSemaphore(ghsemEnableEUDC);
      if ( a1 )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        if ( bReadyToInitializeFontAssocDefault == 1 && !bFinallyInitializeFontAssocDefault )
          bFinallyInitializeFontAssocDefault = bSetupDefaultFlEntry() != 0;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
        v3 = bAddAllFlEntry(1LL);
      }
      else
      {
        v3 = bDeleteAllFlEntry();
      }
      v4 = v3;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
      GreReleaseSemaphoreInternal(ghsemEnableEUDC);
      if ( !gbAttemptedEnableEUDC )
        gbAttemptedEnableEUDC = 1;
      return v4;
    }
  }
  else
  {
    if ( !gbAttemptedEnableEUDC )
      gbAttemptedEnableEUDC = 1;
    return 1LL;
  }
}
