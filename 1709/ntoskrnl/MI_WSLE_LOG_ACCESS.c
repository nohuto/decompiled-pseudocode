/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140011210
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x140010BF0 (MiEmptyWorkingSetHelper.c)
 *     MiTrimPteWorker @ 0x140011034 (MiTrimPteWorker.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

char __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r10
  _BYTE *v3; // r9
  unsigned __int64 v4; // rcx
  __int64 PteShadow; // rax
  __int64 *v6; // rcx

  v2 = a1;
  v3 = a2;
  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v4 >= 0xFFFFF68000000000uLL )
  {
    LOBYTE(PteShadow) = -1;
    if ( v4 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_8;
  }
  v6 = (__int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v6;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v6, *v6);
  if ( (PteShadow & 1) == 0 || (LOBYTE(PteShadow) = HIBYTE(PteShadow) & 0xF, (HIBYTE(PteShadow) & 0xF) != 7) )
  {
LABEL_8:
    if ( (*v3 & 0x20) != 0 )
      LOBYTE(PteShadow) = MiLogPageAccess(v2, v3);
  }
  return PteShadow;
}
