/*
 * XREFs of MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002E730 (MiDecrementAndInsertStandbyPages.c)
 *     MiUnlinkStandbyBatch @ 0x1400306A0 (MiUnlinkStandbyBatch.c)
 *     MiInitializeReadInProgressPfn @ 0x140047D40 (MiInitializeReadInProgressPfn.c)
 *     MiInitializeTransitionPfn @ 0x14004EEF0 (MiInitializeTransitionPfn.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiReferenceInPageFile @ 0x14005A494 (MiReferenceInPageFile.c)
 *     MiGetPfnProtection @ 0x1400B4D10 (MiGetPfnProtection.c)
 *     MiUnlinkStandbyPfn @ 0x1400BBD84 (MiUnlinkStandbyPfn.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MiCaptureProtectionFromLockedProto @ 0x140143CE8 (MiCaptureProtectionFromLockedProto.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(unsigned __int64 a1)
{
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 5) & 0x1F;
}
