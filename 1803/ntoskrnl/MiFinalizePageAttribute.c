/*
 * XREFs of MiFinalizePageAttribute @ 0x140056268
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiInitializeTransitionPfn @ 0x14004EEF0 (MiInitializeTransitionPfn.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiMapPagesToZero @ 0x14009D760 (MiMapPagesToZero.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiTradeActivePage @ 0x140162634 (MiTradeActivePage.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MxSwapPages @ 0x14089B798 (MxSwapPages.c)
 *     MiInitializeCacheFlushing @ 0x14089D23C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 == 1);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
