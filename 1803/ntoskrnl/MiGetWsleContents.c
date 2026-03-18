/*
 * XREFs of MiGetWsleContents @ 0x140125350
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     MiCrcStillIntact @ 0x1400ADE10 (MiCrcStillIntact.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiGetPfnProtection @ 0x1400B4D10 (MiGetPfnProtection.c)
 *     MiConvertAndFlushWsleVas @ 0x1400BAC24 (MiConvertAndFlushWsleVas.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     MiTerminateWsle @ 0x14012B31C (MiTerminateWsle.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x14013F7B4 (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x14013FA7C (MiSetWsleProtection.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiCountSystemImageCommitment @ 0x140169A08 (MiCountSystemImageCommitment.c)
 *     MiProcessVmAccessedInfo @ 0x140259DCC (MiProcessVmAccessedInfo.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v5 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v5 )
    {
      v6 = v3 | 0x20;
      v7 = *(_QWORD *)(v5 + 8 * ((v2 >> 3) & 0x1FF));
      if ( (v7 & 0x20) == 0 )
        v6 = v3;
      v3 = v6;
      if ( (v7 & 0x42) != 0 )
        v3 = v6 | 0x42;
    }
  }
  result = v3 >> 60;
  LOBYTE(result) = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  return result;
}
