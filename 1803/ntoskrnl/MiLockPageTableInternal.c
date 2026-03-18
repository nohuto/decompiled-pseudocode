/*
 * XREFs of MiLockPageTableInternal @ 0x140120C90
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140003FD0 (MiJumpStackTarget.c)
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140011270 (MiGetNextPageTablePte.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockPageLeafPageTable @ 0x140021570 (MiLockPageLeafPageTable.c)
 *     MiDeleteKernelStack @ 0x140025C60 (MiDeleteKernelStack.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiEvictPageTableLock @ 0x14003D960 (MiEvictPageTableLock.c)
 *     MiLockWorkingSetOptimal @ 0x140048EC8 (MiLockWorkingSetOptimal.c)
 *     MiEncodeProtoFill @ 0x14004AAA0 (MiEncodeProtoFill.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 *     MiInitializeWorkingSetList @ 0x14006A7A0 (MiInitializeWorkingSetList.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MiUnlockPageTableRange @ 0x1400CE14C (MiUnlockPageTableRange.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140185724 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockPageTable @ 0x140185E74 (MiLockPageTable.c)
 *     MiFaultInPagedPool @ 0x14018630C (MiFaultInPagedPool.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiDeleteSessionPoolRange @ 0x14025BEE8 (MiDeleteSessionPoolRange.c)
 *     MiProtectAweRegion @ 0x14026271C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     MiWriteAwePtes @ 0x140262D60 (MiWriteAwePtes.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402649B4 (MiWriteEnclavePte.c)
 *     MiScrubAweMappedPage @ 0x140270278 (MiScrubAweMappedPage.c)
 *     MiMarkBootKernelStack @ 0x1408AC040 (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140242594 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // al
  char v4; // bp
  signed __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  signed __int64 v8; // r9
  int v9; // r8d
  unsigned int v10; // esi
  char v12; // al
  __int64 *v13; // r10
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // r11
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  _QWORD *v17; // rdx
  struct _KPRCB *CurrentPrcb; // r11
  struct _KPRCB *v19; // rdi
  _DWORD *SchedulerAssist; // rcx
  unsigned int v21; // ebx
  volatile signed __int32 *PageTableLockBuffer; // rdi
  int v23; // r8d
  unsigned __int32 v24; // r9d
  char v25; // cl
  bool v26; // zf
  signed __int32 v27; // eax
  unsigned int v28; // ebx
  signed __int32 v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // [rsp+78h] [rbp+10h] BYREF
  int v36; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a1 + 184);
  v4 = a3;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v12 = v3 & 7;
    if ( v12 )
    {
      if ( v12 == 7 )
      {
        v13 = (__int64 *)&unk_1403CBCE8;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v12 == 5 )
        {
          v13 = &qword_1403CBCE0;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v13 = &qword_1403CBCF8;
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
        }
      }
    }
    else
    {
      v13 = (__int64 *)(a1 + 176);
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v13;
    if ( (a3 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v13, a3);
      }
      else
      {
        v19 = KeGetCurrentPrcb();
        SchedulerAssist = v19->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v30 = SchedulerAssist[5];
            SchedulerAssist[5] = v30 + 1;
            if ( v30 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(v19);
          }
        }
        _m_prefetchw(v13);
        if ( *(_DWORD *)v13 || _InterlockedCompareExchange64(v13, (signed __int64)SelfmapLockHandle, 0LL) )
        {
          v21 = 0;
          KiSetVpThreadSpinLockCount((__int64)v19, 0);
          _mm_pause();
        }
        else
        {
          return 1;
        }
      }
      return v21;
    }
    else
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v31 = v16[5];
          v16[5] = v31 + 1;
          if ( v31 == -1 && !*((_BYTE *)v16 + 25) && !*((_BYTE *)v16 + 27) )
            KiPerformUnboostKick(v15);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v13);
      }
      else
      {
        v17 = (_QWORD *)_InterlockedExchange64(v13, (__int64)SelfmapLockHandle);
        if ( v17 )
          KxWaitForLockOwnerShip((__int64)SelfmapLockHandle, v17);
      }
      return 1LL;
    }
  }
  else if ( (v3 & 7) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v35);
    v23 = v4 & 1;
    v21 = 1;
    v24 = *PageTableLockBuffer;
    do
    {
      v25 = v35;
      while ( ((v24 >> v25) & 1) != 0 )
      {
        if ( (v4 & 1) != 0 )
          return 0LL;
        if ( ((v24 >> v25) & 2) != 0 )
        {
          v36 = 0;
          do
          {
            KeYieldProcessorEx(&v36);
            v24 = *PageTableLockBuffer;
            v25 = v35;
          }
          while ( (((unsigned __int32)*PageTableLockBuffer >> v35) & 1) != 0 );
          v23 = v4 & 1;
        }
        else
        {
          v29 = _InterlockedCompareExchange(PageTableLockBuffer, v24 | (2 << v25), v24);
          v25 = v35;
          v23 = v4 & 1;
          v24 = v29;
        }
      }
      v27 = _InterlockedCompareExchange(PageTableLockBuffer, ~(2 << v25) & (v24 | (1 << v25)), v24);
      v26 = v24 == v27;
      v24 = v27;
      if ( v26 )
        return v21;
    }
    while ( !v23 );
    return 0LL;
  }
  else
  {
    v6 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      v32 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 8 * ((a2 >> 3) & 0x1FF));
        v34 = v6 | 0x20;
        if ( (v33 & 0x20) == 0 )
          v34 = *(_QWORD *)a2;
        v6 = v34;
        if ( (v33 & 0x42) != 0 )
          v6 = v34 | 0x42;
      }
    }
    v7 = v6;
    if ( (v6 & 1) != 0 )
    {
      v8 = v6;
      v9 = v4 & 1;
      v10 = 0;
      while ( 1 )
      {
        if ( (v7 & 0x1000000000000000LL) != 0 )
        {
          if ( (v4 & 1) != 0 )
            return v10;
          if ( ((v7 >> 60) & 2) != 0 )
          {
            v28 = 0;
            do
            {
              if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v28);
              v6 = *(_QWORD *)a2;
            }
            while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
          }
          else
          {
            v6 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v7 | 0x2000000000000000LL, v6);
          }
          v9 = v4 & 1;
        }
        else
        {
          v6 = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)a2,
                 v7 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                 v6);
          if ( v6 == v8 )
            return 1;
          if ( v9 )
            return v10;
        }
        v7 = v6;
        v8 = v6;
        if ( (v6 & 1) == 0 )
          return v10;
      }
    }
    return 0;
  }
}
