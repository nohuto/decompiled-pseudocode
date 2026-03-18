/*
 * XREFs of MiGetSessionVm @ 0x14007FBD8
 * Callers:
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     MiProbeAndLockPrepare @ 0x140022150 (MiProbeAndLockPrepare.c)
 *     MiLockStealSystemVm @ 0x14003F754 (MiLockStealSystemVm.c)
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiInitializeColorBaseSession @ 0x14007F688 (MiInitializeColorBaseSession.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiSessionRemoveImage @ 0x140154B38 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140155518 (MiDeleteSessionPdes.c)
 *     MmCopyMemory @ 0x14015B270 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiCountSystemImageCommitment @ 0x140169A08 (MiCountSystemImageCommitment.c)
 *     MiEmptyAccessLogs @ 0x14016A490 (MiEmptyAccessLogs.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiExceptionForMappedVa @ 0x140251EB4 (MiExceptionForMappedVa.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MiTrimAllSystemPagableMemory @ 0x14025A32C (MiTrimAllSystemPagableMemory.c)
 *     MiDeleteSessionPoolRange @ 0x14025BEE8 (MiDeleteSessionPoolRange.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( result )
    result += 3008LL;
  return result;
}
