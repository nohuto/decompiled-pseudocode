/*
 * XREFs of MiFlushTbList @ 0x140116C90
 * Callers:
 *     MiUnmapMdlCommon @ 0x140001568 (MiUnmapMdlCommon.c)
 *     MiGetPteFromCopyList @ 0x140002458 (MiGetPteFromCopyList.c)
 *     MiGetNextPageTableTail @ 0x14000F010 (MiGetNextPageTableTail.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140011270 (MiGetNextPageTablePte.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiFlushTbAsNeeded @ 0x140025F90 (MiFlushTbAsNeeded.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiReplenishBitMap @ 0x14009E090 (MiReplenishBitMap.c)
 *     MiFlushTbListEarly @ 0x14009E7E4 (MiFlushTbListEarly.c)
 *     KiOutSwapKernelStacks @ 0x1400B29D4 (KiOutSwapKernelStacks.c)
 *     MiDeleteNonPagedPoolTail @ 0x1400B5DF0 (MiDeleteNonPagedPoolTail.c)
 *     MiCreateSystemPageTableTail @ 0x1400B5EB0 (MiCreateSystemPageTableTail.c)
 *     MiFlushHyperSpace @ 0x1400B9164 (MiFlushHyperSpace.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400BDA54 (MiFlushDirtyBitsToPfn.c)
 *     MiFlushValidPteFromTb @ 0x1400C02DC (MiFlushValidPteFromTb.c)
 *     MiZeroPageWorkMapping @ 0x1400C0E24 (MiZeroPageWorkMapping.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MmSetPageProtection @ 0x1400C7020 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x1400D10BC (MmRemoveExecuteGrants.c)
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiDecommitLargePoolVa @ 0x1401361A0 (MiDecommitLargePoolVa.c)
 *     MiDeleteSystemPageTableTail @ 0x140137870 (MiDeleteSystemPageTableTail.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMapMdlCommon @ 0x14013B6DC (MiMapMdlCommon.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x14013F7B4 (MiSetPagingOfDriver.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014F088 (MmMapMemoryDumpMdlEx.c)
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x140165B90 (MiResetAccessBitsTail.c)
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 *     MiClearSystemAccessBits @ 0x14017AFF0 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MmProtectMdlSystemAddress @ 0x140254B70 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14025A2B0 (MiSimpleAgeWorkingSetTail.c)
 *     MiJoinBitmapPages @ 0x14025B96C (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 *     MiProtectAweRegion @ 0x14026271C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     MiWriteAwePtes @ 0x140262D60 (MiWriteAwePtes.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 *     MmDeleteShadowMapping @ 0x14074F478 (MmDeleteShadowMapping.c)
 *     MiProtectEnclavePages @ 0x140752874 (MiProtectEnclavePages.c)
 *     MiInitializeTbFlush @ 0x14089D77C (MiInitializeTbFlush.c)
 *     MiMarkBootKernelStack @ 0x1408AC040 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x1408AD7F4 (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x1408AE0E0 (MiTradeBootImagePage.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 *     MiProtectSharedUserPage @ 0x1408CA06C (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x1408E0BF0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KiIpiSendRequest @ 0x1400362B0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140037D50 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 *     KiFlushRangeWorker @ 0x140117140 (KiFlushRangeWorker.c)
 *     HvlFlushRangeListTb @ 0x140159D7C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14015A5C0 (KiFlushAffinity.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiFlushRangeTb @ 0x1401621F0 (KiFlushRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401685E4 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     VmFlushTb @ 0x1402AB308 (VmFlushTb.c)
 *     ExFlushTb @ 0x1402BB738 (ExFlushTb.c)
 */

void __fastcall MiFlushTbList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  char v5; // cl
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebp
  unsigned int v8; // r13d
  _KPROCESS *Process; // rax
  unsigned __int64 SecureHandle; // rax
  unsigned int v11; // r12d
  _QWORD *v12; // r11
  char v13; // di
  char v14; // bl
  unsigned __int8 v15; // r15
  struct _KPRCB *v16; // rdi
  unsigned int v17; // ebx
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *v19; // rdx
  unsigned __int16 Count; // r8
  unsigned __int16 *v21; // r10
  unsigned int v22; // r9d
  __int64 v23; // rcx
  unsigned __int16 v24; // cx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v29; // rdi
  int v30; // eax
  unsigned __int8 v31; // r10
  __int64 v32; // r11
  unsigned __int8 v33; // bl
  signed __int32 v34[8]; // [rsp+0h] [rbp-148h] BYREF
  char v35[4]; // [rsp+40h] [rbp-108h] BYREF
  int v36; // [rsp+44h] [rbp-104h]
  __int128 v37; // [rsp+48h] [rbp-100h] BYREF
  __int64 v38; // [rsp+58h] [rbp-F0h] BYREF
  _WORD v39[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v40; // [rsp+64h] [rbp-E4h]
  _QWORD v41[21]; // [rsp+68h] [rbp-E0h] BYREF

  v3 = *(unsigned int *)(a1 + 12);
  v36 = v3;
  if ( (_DWORD)v3 )
  {
    v5 = *(_BYTE *)(a1 + 4);
    v6 = qword_1403CB708;
    v7 = 1;
    if ( (v5 & 2) == 0 )
    {
      v8 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 != 1 )
        goto LABEL_35;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[16] )
        goto LABEL_63;
      SecureHandle = Process->SecureState.SecureHandle;
      if ( SecureHandle )
        LOBYTE(SecureHandle) = 1;
      if ( (_BYTE)SecureHandle )
LABEL_63:
        v6 = -1LL;
    }
    v8 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 1 )
    {
      v11 = 0;
      goto LABEL_10;
    }
LABEL_35:
    v11 = 1;
    if ( (v5 & 8) != 0 )
      v11 = 2;
LABEL_10:
    if ( *(_BYTE *)(a1 + 5) || *(_QWORD *)(a1 + 16) > v6 )
    {
      if ( (v5 & 1) != 0 )
        KeFlushCurrentTbOnly(v8, v6, a3);
      else
        KeFlushTb(v8, v11);
      *(_BYTE *)(a1 + 5) = 0;
    }
    else
    {
      v12 = (_QWORD *)(a1 + 24);
      if ( (v5 & 1) == 0 )
      {
        v13 = 0;
        if ( (HvlEnlightenments & 4) != 0 )
        {
          if ( (HvlEnlightenments & 2) != 0 )
          {
            v14 = 1;
          }
          else if ( (_DWORD)KeNumberProcessors_0 == 1 )
          {
            v14 = 0;
          }
          else if ( v11 )
          {
            v14 = 1;
          }
          else
          {
            _InterlockedOr(v34, 0);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            CurrentPrcb = KeGetCurrentPrcb();
            if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                                 (__int64)CurrentPrcb,
                                 &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count) )
            {
              v14 = 1;
              __writecr8(CurrentIrql);
            }
            else
            {
              v14 = 0;
              v29 = v12;
              do
              {
                KiFlushRangeTb(*v29++, v8);
                --v3;
              }
              while ( v3 );
              LODWORD(v3) = v36;
              v12 = (_QWORD *)(a1 + 24);
              v13 = 1;
              __writecr8(CurrentIrql);
            }
          }
        }
        else
        {
          v14 = 0;
        }
        if ( v8 == 1 && *v12 <= 0x7FFFFFFEFFFFuLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle
          || v14 )
        {
          KiPrepareFlushParameters(v8, &v38, v35);
          v30 = KiFlushAffinity(v11);
          v13 |= HvlFlushRangeListTb(v38, v30, (unsigned __int8)v35[0], v31, v14, v3, v32);
          v12 = (_QWORD *)(a1 + 24);
        }
        if ( v13 )
          goto LABEL_30;
        *(_QWORD *)&v37 = v12;
        *((_QWORD *)&v37 + 1) = __PAIR64__(v8, v3);
        v15 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        v16 = KeGetCurrentPrcb();
        v17 = 0;
        if ( v11 )
        {
          v21 = 0LL;
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
LABEL_39:
            v26 = 2147483652LL;
            if ( v11 != 1 )
              v26 = 4LL;
            KiIpiSendRequest((__int64)v16, v7, v21, &v37, v3, v26);
            KiFlushRangeWorker(&v37);
            while ( v16->PacketBarrier )
            {
              if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v17);
            }
            goto LABEL_29;
          }
        }
        else
        {
          _InterlockedOr(v34, 0);
          CurrentThread = v16->CurrentThread;
          v40 = 0;
          v19 = CurrentThread->ApcState.Process;
          Count = v19->ActiveProcessors.Count;
          LOWORD(CurrentThread) = v19->ActiveProcessors.Size;
          v39[0] = Count;
          v39[1] = (_WORD)CurrentThread;
          if ( Count )
          {
            memmove(v41, v19->ActiveProcessors.Bitmap, 8LL * Count);
            Count = v39[0];
          }
          v21 = v39;
          v22 = KiProcessorIndexToNumberMappingTable[v16->Number];
          v23 = v22 >> 6;
          if ( Count > (unsigned int)v23 )
          {
            v41[v23] &= ~(1LL << (v22 & 0x3F));
            Count = v39[0];
          }
          v7 = 0;
          v24 = 0;
          if ( Count )
          {
            do
            {
              v25 = v41[v24];
              if ( v25 )
              {
                if ( v24 != v16->Group || v25 != v16->GroupSetMember )
                  goto LABEL_39;
              }
            }
            while ( ++v24 < v39[0] );
          }
        }
        KiFlushRangeWorker(&v37);
LABEL_29:
        __writecr8(v15);
LABEL_30:
        if ( VmTbFlushEnabled )
          VmFlushTb((unsigned int)v3, a1 + 24, v8);
        if ( ExTbFlushActive )
        {
          v33 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ExFlushTb((unsigned int)v3, a1 + 24, v8);
          __writecr8(v33);
        }
        goto LABEL_34;
      }
      KeFlushMultipleRangeCurrentTb((unsigned int)v3, a1 + 24, v8);
    }
LABEL_34:
    *(_BYTE *)(a1 + 4) &= ~8u;
    *(_DWORD *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
