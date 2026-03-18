/*
 * XREFs of MiFlushTbList @ 0x140056340
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140009834 (MiReplaceRotateWithDemandZero.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 *     KiOutSwapKernelStacks @ 0x1400ACF64 (KiOutSwapKernelStacks.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400B0398 (MiFlushDirtyBitsToPfn.c)
 *     MiDeletePagablePteRange @ 0x1400B8270 (MiDeletePagablePteRange.c)
 *     MiClearNonPagedPtes @ 0x1400BC1C0 (MiClearNonPagedPtes.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     MiReplacePageTablePage @ 0x1400D0B4C (MiReplacePageTablePage.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x1400DDBDC (MiSetPagingOfDriver.c)
 *     MiReplenishBitMap @ 0x1400E6290 (MiReplenishBitMap.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiFlushTbListEarly @ 0x1400E94BC (MiFlushTbListEarly.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiZeroSystemPdes @ 0x1400F7190 (MiZeroSystemPdes.c)
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiZeroPageWorkMapping @ 0x14010FE88 (MiZeroPageWorkMapping.c)
 *     MiZeroAndFlushPtes @ 0x1401188A4 (MiZeroAndFlushPtes.c)
 *     MmRemoveExecuteGrants @ 0x140130B50 (MmRemoveExecuteGrants.c)
 *     MmSetPageProtection @ 0x140139650 (MmSetPageProtection.c)
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 *     MiMapMdlCommon @ 0x14014EA10 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x140150654 (MiUnmapMdlCommon.c)
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 *     MmMapMemoryDumpMdlEx @ 0x14021B38C (MmMapMemoryDumpMdlEx.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiResetAccessBitsTail @ 0x14021E1E0 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14021E4C0 (MiSimpleAgeWorkingSetTail.c)
 *     MiJoinBitmapPages @ 0x1402201F0 (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 *     MiDeleteSessionAddressSpace @ 0x140221670 (MiDeleteSessionAddressSpace.c)
 *     MiLargePageFault @ 0x140228A74 (MiLargePageFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x140229C98 (MiMoveDirtyBitsToPfns.c)
 *     MiScrubLargeMappedPage @ 0x1402387C4 (MiScrubLargeMappedPage.c)
 *     MmDeleteShadowMapping @ 0x14043D51C (MmDeleteShadowMapping.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiProtectAweRegion @ 0x1406E568C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406E5880 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x1406E69F4 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406E6E70 (NtMapUserPhysicalPagesScatter.c)
 *     MiProtectEnclavePages @ 0x1406E8DE4 (MiProtectEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1406E9220 (MiTerminateHardwareEnclave.c)
 *     MiMarkBootKernelStack @ 0x14082EBE0 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140849448 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x1408574D4 (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x14086BF50 (MiReturnDriverLoadPages.c)
 * Callees:
 *     KiFlushRangeWorker @ 0x1400573A0 (KiFlushRangeWorker.c)
 *     KiFlushViaHypervisor @ 0x140059270 (KiFlushViaHypervisor.c)
 *     KxFlushNonGlobalTb @ 0x14005B3D0 (KxFlushNonGlobalTb.c)
 *     KiIpiSendRequest @ 0x14005B830 (KiIpiSendRequest.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KiFlushAddressSpaceTb @ 0x1401410A4 (KiFlushAddressSpaceTb.c)
 *     HvlFlushRangeListTb @ 0x140141198 (HvlFlushRangeListTb.c)
 *     KxFlushEntireTb @ 0x140143A74 (KxFlushEntireTb.c)
 *     KiPrepareFlushParameters @ 0x1401442BC (KiPrepareFlushParameters.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401502AC (KeFlushMultipleRangeCurrentTb.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x14017B2B8 (KeFlushCurrentTbOnly.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     VslFlushSecureAddressSpace @ 0x1401F1DD4 (VslFlushSecureAddressSpace.c)
 *     VmFlushTb @ 0x1402781F8 (VmFlushTb.c)
 *     ExFlushTb @ 0x140287438 (ExFlushTb.c)
 */

void __fastcall MiFlushTbList(__int64 a1, _KPROCESS *Process)
{
  unsigned int v2; // r15d
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned int v6; // edi
  unsigned int v7; // ebx
  unsigned __int8 v8; // bp
  int p_ActiveProcessors; // edx
  unsigned __int8 v10; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rax
  volatile _KAFFINITY_EX *v13; // rdx
  unsigned __int16 Count; // r8
  _WORD *v15; // r11
  unsigned int v16; // r9d
  __int64 v17; // rcx
  int v18; // r10d
  unsigned __int16 v19; // dx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  unsigned __int8 CurrentIrql; // bl
  __int64 v25; // rdx
  unsigned __int8 v26; // bl
  signed __int32 v27[8]; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int8 v28; // [rsp+30h] [rbp-118h] BYREF
  char v29[7]; // [rsp+31h] [rbp-117h] BYREF
  _QWORD v30[2]; // [rsp+38h] [rbp-110h] BYREF
  __int64 v31; // [rsp+48h] [rbp-100h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-F8h]
  unsigned int v33; // [rsp+54h] [rbp-F4h]
  _WORD v34[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v35; // [rsp+64h] [rbp-E4h]
  _QWORD v36[21]; // [rsp+68h] [rbp-E0h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    v4 = *(unsigned __int8 *)(a1 + 4);
    v5 = qword_140388568;
    if ( (v4 & 2) == 0 )
    {
      v6 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 != 1 )
        goto LABEL_9;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[16] || Process->SecureState.SecureHandle )
        v5 = -1LL;
    }
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 1 )
    {
      v7 = 0;
LABEL_10:
      if ( !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v5 )
      {
        if ( (v4 & 1) != 0 )
        {
          KeFlushMultipleRangeCurrentTb(v2, a1 + 24, v6);
LABEL_72:
          *(_BYTE *)(a1 + 4) &= ~8u;
          *(_DWORD *)(a1 + 12) = 0;
          *(_QWORD *)(a1 + 16) = 0LL;
          return;
        }
        if ( v6 == 1 && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle )
        {
          v8 = 1;
        }
        else
        {
          v8 = 0;
          if ( (HvlEnlightenments & 6) == 0
            || (HvlEnlightenments & 2) == 0 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 1 )
          {
            goto LABEL_24;
          }
        }
        KiPrepareFlushParameters(v6, v30, &v28);
        if ( v7 )
          p_ActiveProcessors = 0;
        else
          p_ActiveProcessors = (int)&KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
        if ( (unsigned __int8)HvlFlushRangeListTb(v30[0], p_ActiveProcessors, v28, v8, v2, a1 + 24) )
        {
LABEL_48:
          if ( VmTbFlushEnabled )
            VmFlushTb(v2, a1 + 24, v6);
          if ( ExTbFlushActive )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            ExFlushTb(v2, a1 + 24, v6);
            __writecr8(CurrentIrql);
          }
          goto LABEL_72;
        }
LABEL_24:
        v31 = a1 + 24;
        v32 = v2;
        v33 = v6;
        v10 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v7 )
        {
          v18 = 1;
          LODWORD(v15) = 0;
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
LABEL_39:
            v22 = 2147483652LL;
            if ( v7 != 1 )
              v22 = 4LL;
            KiIpiSendRequest((_DWORD)CurrentPrcb, v18, (_DWORD)v15, (unsigned int)&v31, v2, v22);
            KiFlushRangeWorker(&v31);
            v23 = 0;
            while ( CurrentPrcb->PacketBarrier )
            {
              if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v23);
            }
            goto LABEL_47;
          }
        }
        else
        {
          _InterlockedOr(v27, 0);
          CurrentThread = CurrentPrcb->CurrentThread;
          v35 = 0;
          v13 = &CurrentThread->ApcState.Process->ActiveProcessors;
          Count = v13->Count;
          LOWORD(CurrentThread) = CurrentThread->ApcState.Process->ActiveProcessors.Size;
          v34[0] = Count;
          v34[1] = (_WORD)CurrentThread;
          if ( Count )
          {
            memmove(v36, v13->Bitmap, 8LL * Count);
            Count = v34[0];
          }
          v15 = v34;
          v16 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
          v17 = v16 >> 6;
          if ( Count > (unsigned int)v17 )
          {
            v36[v17] &= ~(1LL << (v16 & 0x3F));
            Count = v34[0];
          }
          v18 = 0;
          v19 = 0;
          if ( Count )
          {
            qmemcpy(v30, "33333333UUUUUUUU", sizeof(v30));
            do
            {
              v20 = v36[v19];
              v21 = (0x101010101010101LL
                   * (((v30[0] & (v20 - (v30[1] & (v20 >> 1))))
                     + (v30[0] & ((v20 - (v30[1] & (v20 >> 1))) >> 2))
                     + (((v30[0] & (v20 - (v30[1] & (v20 >> 1)))) + (v30[0] & ((v20 - (v30[1] & (v20 >> 1))) >> 2))) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
              if ( (unsigned __int8)v21 > 1u
                || (_BYTE)v21 == 1 && (CurrentPrcb->Group != v19 || (v20 & CurrentPrcb->GroupSetMember) == 0) )
              {
                goto LABEL_39;
              }
            }
            while ( ++v19 < Count );
          }
        }
        KiFlushRangeWorker(&v31);
LABEL_47:
        __writecr8(v10);
        goto LABEL_48;
      }
      if ( (v4 & 1) != 0 )
      {
        KeFlushCurrentTbOnly(v6, Process, v5);
LABEL_71:
        *(_BYTE *)(a1 + 5) = 0;
        goto LABEL_72;
      }
      if ( (unsigned int)KiFlushViaHypervisor(v4, Process, v5) )
      {
        KiPrepareFlushParameters(v6, &v30[1], v29);
        LOBYTE(v25) = 1;
        KiFlushAddressSpaceTb(v30[1], v25, (unsigned __int8)v29[0], v6 - 1 > 1);
        goto LABEL_64;
      }
      if ( KiKvaShadow )
      {
        if ( !v6 || v6 == 2 )
        {
LABEL_62:
          KxFlushNonGlobalTb(v7);
          goto LABEL_64;
        }
      }
      else if ( v6 && (int)v6 <= 2 )
      {
        goto LABEL_62;
      }
      KxFlushEntireTb(v7);
LABEL_64:
      if ( v6 == 1 && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle )
        VslFlushSecureAddressSpace();
      if ( VmTbFlushEnabled )
        VmFlushTb(0LL, 0LL, v6);
      if ( ExTbFlushActive )
      {
        v26 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ExFlushTb(0LL, 0LL, v6);
        __writecr8(v26);
      }
      goto LABEL_71;
    }
LABEL_9:
    v7 = ((v4 & 8) != 0) + 1;
    goto LABEL_10;
  }
}
