/*
 * XREFs of MmOutSwapWorkingSet @ 0x140062868
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     MiOutSwapWorkingSet @ 0x140062EF0 (MiOutSwapWorkingSet.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiGetWorkingSetSwapSupport @ 0x14007F460 (MiGetWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x14007FC04 (MiFindBestOutswapPagefile.c)
 *     SmStoreExistsForProcess @ 0x14008BCF0 (SmStoreExistsForProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetKernelStackSwapSupport @ 0x14009C5E8 (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14009D454 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14009D4AC (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SmStoreSetProcessVaRanges @ 0x14052B7A0 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x14052C59C (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x14052D1E0 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x14053AF80 (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14053AFC8 (MiReserveWorkingSetSwapSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140756438 (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int16 *v2; // r13
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int BestOutswapPagefile; // r15d
  PVOID *PoolWithTag; // rax
  PVOID *v9; // rsi
  volatile LONG *v10; // rdi
  KIRQL v11; // r14
  __int64 WorkingSetSwapSupport; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r14d
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  struct _KTHREAD *v19; // r12
  PEPROCESS v20; // rdi
  PEPROCESS v21; // r15
  unsigned __int64 j; // rdi
  _QWORD *i; // rax
  _QWORD **v24; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rdi
  _QWORD *v28; // rcx
  int v29; // edi
  volatile LONG *v30; // r12
  KIRQL v31; // r15
  __int64 v32; // rcx
  __int64 SharedVm; // rax
  PVOID *v34; // rcx
  unsigned int v35; // edi
  ULONG_PTR v36; // r15
  struct _KTHREAD *v37; // rsi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v39; // r12
  unsigned int v40; // edx
  bool v41; // zf
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  _KLOCK_ENTRY *v45; // r14
  __int64 v46; // rdx
  PVOID v47; // rsi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v52; // [rsp+40h] [rbp-C8h]
  __int64 v53; // [rsp+48h] [rbp-C0h]
  _DWORD v54[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-B0h]
  PEPROCESS Processa; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PVOID *v59; // [rsp+78h] [rbp-90h]
  _QWORD v60[18]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]
  __int64 v63; // [rsp+128h] [rbp+20h]
  __int64 v64; // [rsp+130h] [rbp+28h]
  unsigned int v65; // [rsp+138h] [rbp+30h]

  v2 = &Process[1].IdealNode[12];
  CurrentThread = KeGetCurrentThread();
  Processa = Process;
  v52 = 0LL;
  P = 0LL;
  v5 = 0;
  memset(v60, 0, sizeof(v60));
  v6 = *(_QWORD *)(qword_1403CBD88 + 8LL * v2[87]);
  v53 = v6;
  v60[3] = v6;
  LODWORD(v61) = a2 != 0;
  if ( (unsigned int)SmStoreExistsForProcess(Process) )
  {
    LODWORD(v60[4]) = -1;
    v5 = 2;
    LODWORD(v61) = v61 | 4;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v6, v54);
  if ( BestOutswapPagefile == 16 )
  {
    v35 = -1073741497;
  }
  else
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x43536D4Du);
    v59 = PoolWithTag;
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v5 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 1112, 0LL);
      v10 = (volatile LONG *)(v6 + 1120);
      SpinLock = (PEX_SPIN_LOCK)(v6 + 1120);
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1120));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v35 = -1073740682;
        }
        else
        {
          v35 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v35 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        __writecr8(v11);
        v6 = v53;
      }
      else
      {
        *(_QWORD *)(MiGetSharedVm(v13) + 24) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        __writecr8(v11);
        v15 = v54[0];
        while ( 1 )
        {
          v16 = *((_QWORD *)v2 + 16);
          v52 = v16;
          if ( !v16 )
          {
            v29 = -1073741779;
            goto LABEL_35;
          }
          if ( LODWORD(v60[4]) == -1 )
            break;
          v29 = MiReserveWorkingSetSwapSpace(v53, &v60[5], v14, BestOutswapPagefile, v15, v16);
          if ( v29 >= 0 )
          {
            v16 = v52;
            break;
          }
          if ( v15 < 0x10 )
          {
            BestOutswapPagefile = v15;
            v29 = MiExtendWorkingSetSwapPagefile(v53, v52, v15);
            if ( v29 >= 0 )
              continue;
          }
          goto LABEL_35;
        }
        v17 = MiAllocateWorkingSetSwapSupport(v16);
        *v9 = (PVOID)v17;
        if ( !v17 )
          goto LABEL_83;
        if ( LODWORD(v60[4]) != -1 )
          *(_DWORD *)(v17 + 32) |= 1u;
        v18 = 0LL;
        if ( !a2 )
          goto LABEL_13;
        v18 = *((_QWORD *)v2 + 17);
        if ( v18 - *((_QWORD *)v2 + 18) <= v18 )
          v18 = *((_QWORD *)v2 + 17) - *((_QWORD *)v2 + 18);
        if ( v18 && (v49 = MiAllocateWorkingSetSwapSupport(v18), (v9[1] = (PVOID)v49) == 0LL) )
        {
LABEL_83:
          v29 = -1073741670;
        }
        else
        {
LABEL_13:
          v19 = CurrentThread;
          v60[0] = *v9;
          v60[1] = v9[1];
          v60[2] = v2;
          --CurrentThread->SpecialApcDisable;
          v20 = Processa;
          ExAcquirePushLockSharedEx((ULONG_PTR)&Processa[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v19[1].Queue) |= 2u;
          if ( (v20[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v19, v20);
            v29 = -1073741558;
          }
          else
          {
            v21 = Processa;
            j = 0LL;
            for ( i = (_QWORD *)Processa[2].Affinity.Bitmap[4]; i; i = (_QWORD *)*i )
              j = (unsigned __int64)i;
            while ( j )
            {
              if ( !MiVadMapsLargeImage(j) && ((1 << (*(_BYTE *)(j + 48) & 7)) & 0x55) != 0 )
                MiOutSwapWorkingSet(
                  (_DWORD)v2,
                  j,
                  *(_DWORD *)(j + 24) << 12,
                  (*(_DWORD *)(j + 28) << 12) | 0xFFF,
                  (__int64)v60);
              v24 = *(_QWORD ***)(j + 8);
              v25 = j;
              if ( v24 )
              {
                v26 = *v24;
                for ( j = *(_QWORD *)(j + 8); v26; v26 = (_QWORD *)*v26 )
                  j = (unsigned __int64)v26;
              }
              else
              {
                while ( 1 )
                {
                  j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !j || *(_QWORD *)j == v25 )
                    break;
                  v25 = j;
                }
              }
            }
            UNLOCK_ADDRESS_SPACE_SHARED(v19, v21);
            if ( *((_QWORD *)*v9 + 2) < v52 )
            {
              v27 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
              if ( v27 )
              {
                ExFreePoolWithTag(*v9, 0);
                *v9 = (PVOID)v27;
              }
            }
            v28 = v9[1];
            if ( v28 )
            {
              if ( v28[2] < v18 )
              {
                v50 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
                if ( v50 )
                {
                  ExFreePoolWithTag(v9[1], 0);
                  v9[1] = (PVOID)v50;
                }
              }
            }
            v52 = *((_QWORD *)*v9 + 3);
            MiGetKernelStackSwapSupport(v9, v21);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*v9);
            v5 |= 4u;
            v29 = 0;
          }
        }
LABEL_35:
        v30 = SpinLock;
        v31 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport(v2) == 1 )
        {
          SharedVm = MiGetSharedVm(v32);
          if ( v5 < 4 )
          {
            v34 = 0LL;
          }
          else
          {
            v34 = v59;
            v9 = 0LL;
          }
          *(_QWORD *)(SharedVm + 24) = v34;
          v35 = v5 < 4 ? v29 : 0;
        }
        else
        {
          v35 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v30);
        __writecr8(v31);
        v6 = v53;
        MiFreeReservationRuns(v53, &v60[5]);
      }
      if ( v9 )
        MiFreeWorkingSetSwapContext(v6, v9);
    }
    else
    {
      v35 = -1073741670;
    }
  }
  if ( (v5 & 1) != 0 )
  {
    v36 = v6 + 1112;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 1112);
    LODWORD(v51) = 0;
    v37 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6 + 1112) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v37->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v37->SpecialApcDisable;
    v39 = ++v37->AbAllocationRegionCount;
    v40 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v41 = !_BitScanReverse((unsigned int *)&v42, v40);
      v54[1] = v42;
      if ( v41 )
        break;
      v43 = 1 << v42;
      v44 = v42;
      v45 = &v37->LockEntries[v44];
      v40 &= ~v43;
      if ( (v45->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v45->LockState.0 & 1) == 0
        && (*(_QWORD *)&v45->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
        && v45->LockState.SessionId == (_DWORD)SessionId )
      {
        v45->AcquiredByte &= ~1u;
        if ( v45->LockState.0 )
        {
          if ( v45 )
          {
            v45->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v45->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v37->LockEntries[v44].TreeNode);
            LODWORD(v51) = 0;
            LODWORD(v51) = v45->BoostBitmap.AllFields & 0x1FFFF;
            v45->BoostBitmap.AllFields &= 0xFFFE0000;
            v45->ThreadLocalFlags &= ~1u;
            v45->LockState.0 = 0LL;
            v46 = ((char *)v45 - (char *)v37 - 800) / 96;
            if ( v39 == 1 )
              v37->AbEntrySummary |= 1 << v46;
            else
              _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v46);
            goto LABEL_59;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v37, v36, SessionId, 0LL);
LABEL_59:
    --v37->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v37, v36, &v51);
    v41 = v37->SpecialApcDisable++ == -1;
    if ( v41 && ($005F0E83B22994B61E86C72E0CE43C71 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  v47 = P;
  if ( P )
  {
    if ( v5 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v47, 0);
  }
  v61 = v52;
  v62 = v60[15];
  v63 = v60[16];
  v64 = v60[17];
  v65 = v35;
  EtwTraceWorkingSetSwap(Processa);
  return v35;
}
