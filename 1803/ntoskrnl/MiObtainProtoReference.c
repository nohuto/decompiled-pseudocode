/*
 * XREFs of MiObtainProtoReference @ 0x140057FC0
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x140057A28 (MiFinishMdlForMappedFileFault.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
    MiLockNestedPageAtDpcInline(a1);
  else
    MiLockPageAtDpcInline(a1);
  MiAddLockedPageCharge(a1, 1LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
