/*
 * XREFs of ResFwFreeContext @ 0x14083B078
 * Callers:
 *     BgFreeContext @ 0x14083B034 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x1400CEF30 (MmFreePagesFromMdl.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     BgpFwReservePoolSwap @ 0x14083B12C (BgpFwReservePoolSwap.c)
 *     AnFwFadeCompletion @ 0x14083B3E4 (AnFwFadeCompletion.c)
 *     LogFwReport @ 0x14083B7D8 (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x14083C338 (ResFwBackgroundTransition.c)
 *     TxtpClearCache @ 0x14083C4B0 (TxtpClearCache.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14083C5F0 (AnFwDisableBackgroundUpdateTimer.c)
 *     RaspClearCache @ 0x14083C73C (RaspClearCache.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  struct _MDL *v2; // rcx

  if ( (dword_14039D7F0 & 0x100000) != 0 )
  {
    TxtpClearCache();
    if ( RasterizerInitialized )
      RaspClearCache();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1LL, 0LL, 0LL, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_14039D7F0 &= 0xFFEFF7FD;
    qword_14039D8B0 = BgpAnimationRegionSave;
    qword_14039D8B8 = BgpTextRegionSave;
    memset(&BgInternal, 0, 0x28uLL);
    ResFwBackgroundTransition(1LL);
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
