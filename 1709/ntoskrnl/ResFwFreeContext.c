/*
 * XREFs of ResFwFreeContext @ 0x1407D3A5C
 * Callers:
 *     BgFreeContext @ 0x1407D2E4C (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140130F50 (MmFreePagesFromMdl.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407CE2F4 (AnFwDisableBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x1407CE4FC (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x1407CF3B8 (AnFwFadeCompletion.c)
 *     RaspClearCache @ 0x1407CF9E4 (RaspClearCache.c)
 *     TxtpClearCache @ 0x1407CFF14 (TxtpClearCache.c)
 *     ResFwpPageOutBackground @ 0x1407D0B10 (ResFwpPageOutBackground.c)
 *     BgpFwReservePoolSwap @ 0x1407D39C4 (BgpFwReservePoolSwap.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  struct _MDL *v2; // rcx

  if ( (dword_14035A1B0 & 0x100000) != 0 )
  {
    TxtpClearCache();
    if ( RasterizerInitialized )
      RaspClearCache();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1, 0LL, 0, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_14035A1B0 &= 0xFFEFF7FD;
    qword_14035A260 = BgpAnimationRegionSave;
    qword_14035A268 = BgpTextRegionSave;
    memset(&BgInternal, 0, 0x28uLL);
    ResFwpPageOutBackground();
  }
  else
  {
    v2 = *(struct _MDL **)(a1 + 8);
    if ( v2 )
    {
      MmFreePagesFromMdl(v2);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
