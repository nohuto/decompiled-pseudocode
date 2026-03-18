/*
 * XREFs of MiFinalizePageAttribute @ 0x140028064
 * Callers:
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiInitializeTransitionPfn @ 0x140025E00 (MiInitializeTransitionPfn.c)
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiMapPagesToZero @ 0x14005C610 (MiMapPagesToZero.c)
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1400CDE24 (MiTradeActivePage.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiSplitDirectMapPage @ 0x140223AD4 (MiSplitDirectMapPage.c)
 *     MiInitializeCacheFlushing @ 0x140829A64 (MiInitializeCacheFlushing.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400280B0 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 == 1);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
