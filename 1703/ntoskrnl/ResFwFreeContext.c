/*
 * XREFs of ResFwFreeContext @ 0x140755078
 * Callers:
 *     BgFreeContext @ 0x140755034 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140033E40 (MmFreePagesFromMdl.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BgpFwReservePoolSwap @ 0x14075512C (BgpFwReservePoolSwap.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407557D8 (AnFwDisableBackgroundUpdateTimer.c)
 *     RaspClearCache @ 0x140755AA0 (RaspClearCache.c)
 *     LogFwReport @ 0x140755B14 (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x140755EE8 (ResFwBackgroundTransition.c)
 *     AnFwFadeCompletion @ 0x140756C7C (AnFwFadeCompletion.c)
 *     TxtpClearCache @ 0x140757CB0 (TxtpClearCache.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  struct _MDL *v2; // rcx

  if ( (dword_140341A30 & 0x100000) != 0 )
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
    dword_140341A30 &= 0xFFEFF7FD;
    qword_140341AE0 = BgpAnimationRegionSave;
    qword_140341AE8 = BgpTextRegionSave;
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
