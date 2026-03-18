/*
 * XREFs of MiFlushTbList @ 0x1400D64A0
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiFlushHyperSpace @ 0x14000C0C4 (MiFlushHyperSpace.c)
 *     KiOutSwapKernelStacks @ 0x14002B858 (KiOutSwapKernelStacks.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MmRemoveExecuteGrants @ 0x140039478 (MmRemoveExecuteGrants.c)
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x14006D120 (MiSetPagingOfDriver.c)
 *     MiFlushDirtyBitsToPfn @ 0x140071DE8 (MiFlushDirtyBitsToPfn.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiZeroSystemPdes @ 0x140082A5C (MiZeroSystemPdes.c)
 *     MiReplenishBitMap @ 0x140084610 (MiReplenishBitMap.c)
 *     MiFlushTbListEarly @ 0x140084B10 (MiFlushTbListEarly.c)
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiClearNonPagedPtes @ 0x1400A7AB0 (MiClearNonPagedPtes.c)
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 *     MiZeroPageWorkMapping @ 0x1400B3330 (MiZeroPageWorkMapping.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400D10C0 (MiMoveDirtyBitsToPfns.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiAgePte @ 0x1400D5440 (MiAgePte.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400FA3B0 (MiSetReadOnlyOnSectionView.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MiDeletePageTableHierarchy @ 0x1401052C0 (MiDeletePageTableHierarchy.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiInitializeSystemPageTable @ 0x14010A470 (MiInitializeSystemPageTable.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122D2C (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x140123AB4 (MiZeroAndFlushPtes.c)
 *     MiGetSmallZeroPtes @ 0x140129AD0 (MiGetSmallZeroPtes.c)
 *     MmSetPageProtection @ 0x140135210 (MmSetPageProtection.c)
 *     MmMapMemoryDumpMdlEx @ 0x140137880 (MmMapMemoryDumpMdlEx.c)
 *     MiDeletePteRange @ 0x14013BCF4 (MiDeletePteRange.c)
 *     MiDeleteSessionAddressSpace @ 0x14013E414 (MiDeleteSessionAddressSpace.c)
 *     MiResetAccessBitPte @ 0x14013F480 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x14013F6E0 (MiResetAccessBitsTail.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiPfnRangeIsZero @ 0x14015B174 (MiPfnRangeIsZero.c)
 *     MiMapMdlCommon @ 0x14020F120 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x14020F570 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x140215740 (MiSimpleAgeWorkingSetTail.c)
 *     MiJoinBitmapPages @ 0x140216A20 (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x14022617C (MiScrubLargeMappedPage.c)
 *     MmDeleteShadowMapping @ 0x14041D938 (MmDeleteShadowMapping.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiProtectAweRegion @ 0x1406B89C4 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406B8B58 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x1406B9C78 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406BA0F4 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteEnclavePages @ 0x1406BB880 (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406BBB84 (MiProtectEnclavePages.c)
 *     MiInitializeTbFlush @ 0x140802CC8 (MiInitializeTbFlush.c)
 *     MiMarkBootKernelStack @ 0x140809890 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x14081347C (MiProtectSharedUserPage.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 *     MiReturnDriverLoadPages @ 0x140834DD4 (MiReturnDriverLoadPages.c)
 * Callees:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     KiFlushRangeWorker @ 0x1400D6990 (KiFlushRangeWorker.c)
 *     KiIpiSendRequest @ 0x140120590 (KiIpiSendRequest.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x1401EB824 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140201138 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140251988 (VmFlushTb.c)
 *     ExFlushTb @ 0x14025D8F8 (ExFlushTb.c)
 */

void __fastcall MiFlushTbList(__int64 a1, _KPROCESS *Process)
{
  unsigned int v2; // r15d
  char v4; // cl
  unsigned __int64 v5; // r8
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  unsigned __int8 v8; // si
  int p_ActiveProcessors; // edx
  unsigned int v10; // r12d
  struct _KPRCB *CurrentPrcb; // rsi
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
  unsigned int v22; // ebx
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v24[8]; // [rsp+0h] [rbp-148h] BYREF
  char v25[8]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v26; // [rsp+38h] [rbp-110h] BYREF
  __int64 v27; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-100h]
  unsigned int v29; // [rsp+4Ch] [rbp-FCh]
  __int64 v30; // [rsp+50h] [rbp-F8h]
  _WORD v31[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v32; // [rsp+64h] [rbp-E4h]
  _QWORD v33[21]; // [rsp+68h] [rbp-E0h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    v4 = *(_BYTE *)(a1 + 4);
    v5 = qword_14036C218;
    if ( (v4 & 2) != 0 )
      goto LABEL_7;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[13] )
    {
      if ( !Process->SecurePid )
        goto LABEL_7;
      v6 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 != 1 )
        goto LABEL_9;
    }
    v5 = -1LL;
LABEL_7:
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 1 )
    {
      v7 = 0;
LABEL_10:
      if ( *(_BYTE *)(a1 + 5) || *(_QWORD *)(a1 + 16) > v5 )
      {
        if ( (v4 & 1) != 0 )
          KeFlushCurrentTbOnly(v6, Process, v5);
        else
          KeFlushTb(v6, v7);
        *(_BYTE *)(a1 + 5) = 0;
        goto LABEL_59;
      }
      if ( (v4 & 1) != 0 )
      {
        KeFlushMultipleRangeCurrentTb(v2, a1 + 24, v6);
LABEL_59:
        *(_BYTE *)(a1 + 4) &= ~8u;
        *(_DWORD *)(a1 + 12) = 0;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( v6 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
      {
        v8 = 1;
      }
      else
      {
        v8 = 0;
        if ( (HvlEnlightenments & 6) == 0 || (HvlEnlightenments & 2) == 0 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 1 )
          goto LABEL_24;
      }
      KiPrepareFlushParameters(v6, &v26, v25);
      if ( v7 )
        p_ActiveProcessors = 0;
      else
        p_ActiveProcessors = (int)&KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
      if ( (unsigned __int8)HvlFlushRangeListTb(v26, p_ActiveProcessors, (unsigned __int8)v25[0], v8, v2, a1 + 24) )
      {
LABEL_51:
        if ( VmTbFlushEnabled )
          VmFlushTb(v2, a1 + 24);
        if ( ExTbFlushActive )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ExFlushTb(v2, a1 + 24, v6);
          __writecr8(CurrentIrql);
        }
        goto LABEL_59;
      }
LABEL_24:
      v10 = 4;
      v27 = a1 + 24;
      v28 = v2;
      if ( v7 == 1 )
        v10 = -2147483644;
      v29 = v6;
      v30 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v7 )
      {
        v18 = 1;
        LODWORD(v15) = 0;
        if ( (unsigned int)KeNumberProcessors_0 > 1 )
        {
LABEL_42:
          KiIpiSendRequest((_DWORD)CurrentPrcb, v18, (_DWORD)v15, (unsigned int)&v27, v2, v10);
          if ( KiFlushRangeWorker )
            KiFlushRangeWorker(&v27);
          v22 = 0;
          while ( CurrentPrcb->PacketBarrier )
          {
            if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v22);
          }
          goto LABEL_50;
        }
      }
      else
      {
        _InterlockedOr(v24, 0);
        CurrentThread = CurrentPrcb->CurrentThread;
        v32 = 0;
        v13 = &CurrentThread->ApcState.Process->ActiveProcessors;
        Count = v13->Count;
        LOWORD(CurrentThread) = CurrentThread->ApcState.Process->ActiveProcessors.Size;
        v31[0] = Count;
        v31[1] = (_WORD)CurrentThread;
        if ( Count )
        {
          memmove(v33, v13->Bitmap, 8LL * Count);
          Count = v31[0];
        }
        v15 = v31;
        v16 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
        v17 = v16 >> 6;
        if ( Count > (unsigned int)v17 )
        {
          v33[v17] &= ~(1LL << (v16 & 0x3F));
          Count = v31[0];
        }
        v18 = 0;
        v19 = 0;
        if ( Count )
        {
          v26 = 0x5555555555555555LL;
          do
          {
            v20 = v33[v19];
            v21 = (0x101010101010101LL
                 * ((((v20 - (v26 & (v20 >> 1))) & 0x3333333333333333LL)
                   + (((v20 - (v26 & (v20 >> 1))) >> 2) & 0x3333333333333333LL)
                   + ((((v20 - (v26 & (v20 >> 1))) & 0x3333333333333333LL)
                     + (((v20 - (v26 & (v20 >> 1))) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            if ( (unsigned __int8)v21 > 1u
              || (_BYTE)v21 == 1 && (CurrentPrcb->Group != v19 || (v20 & CurrentPrcb->GroupSetMember) == 0) )
            {
              goto LABEL_42;
            }
          }
          while ( ++v19 < Count );
        }
      }
      if ( KiFlushRangeWorker )
        KiFlushRangeWorker(&v27);
LABEL_50:
      __writecr8((unsigned __int8)v30);
      goto LABEL_51;
    }
LABEL_9:
    v7 = ((v4 & 8) != 0) + 1;
    goto LABEL_10;
  }
}
