/*
 * XREFs of MmOutSwapWorkingSet @ 0x140014900
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x140002204 (MiEnumerateLeafPtes.c)
 *     MiGetKernelStackSwapSupport @ 0x14000B0AC (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14000B1B4 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14000B20C (MiAllocateWorkingSetSwapSupport.c)
 *     MiVadMapsLargeImage @ 0x140015000 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     SmStoreExistsForProcess @ 0x1400B9BB4 (SmStoreExistsForProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiGetWorkingSetSwapSupport @ 0x140124A10 (MiGetWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x14012BCF0 (MiFindBestOutswapPagefile.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiFreeWorkingSetSwapContext @ 0x140444830 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x140444898 (MiFreeReservationRuns.c)
 *     SmStoreSetProcessVaRanges @ 0x140444AF0 (SmStoreSetProcessVaRanges.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140451780 (MiReserveWorkingSetSwapSpace.c)
 *     EtwTraceWorkingSetSwap @ 0x1405983E0 (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406EC81C (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int16 *v2; // r13
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int SessionId; // r14d
  unsigned int BestOutswapPagefile; // r15d
  PVOID PoolWithTag; // rax
  __int64 v10; // r14
  volatile LONG *v11; // rdi
  KIRQL v12; // si
  __int64 WorkingSetSwapSupport; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // esi
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // r15
  struct _KTHREAD *v20; // r12
  PEPROCESS v21; // rdi
  _QWORD *v22; // rax
  unsigned __int64 v23; // rsi
  __int64 SharedVm; // rdi
  KIRQL v25; // al
  __int64 v26; // rdx
  _QWORD *v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  int v31; // edi
  volatile LONG *v32; // r15
  KIRQL v33; // si
  __int64 v34; // rcx
  __int64 v35; // rax
  ULONG_PTR v36; // r15
  __int64 v37; // rcx
  struct _KTHREAD *v38; // rsi
  unsigned __int8 v39; // r12
  unsigned int v40; // edx
  bool v41; // zf
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  _KLOCK_ENTRY *v45; // r14
  __int64 v46; // rdx
  PVOID v47; // rsi
  _QWORD *v49; // rax
  __int64 v50; // rdi
  int v51; // [rsp+38h] [rbp-D0h]
  int v52; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-C8h]
  __int64 v54; // [rsp+48h] [rbp-C0h]
  PEPROCESS Processa; // [rsp+50h] [rbp-B8h]
  unsigned int v56; // [rsp+58h] [rbp-B0h] BYREF
  int v57; // [rsp+5Ch] [rbp-ACh]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  _QWORD v61[18]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v62; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+110h] [rbp+8h]
  __int64 v64; // [rsp+118h] [rbp+10h]
  __int64 v65; // [rsp+120h] [rbp+18h]
  int v66; // [rsp+128h] [rbp+20h]

  v2 = &Process[1].IdealNode[12];
  CurrentThread = KeGetCurrentThread();
  Processa = Process;
  v53 = 0LL;
  P = 0LL;
  v5 = 0;
  memset(v61, 0, sizeof(v61));
  v6 = *(_QWORD *)(qword_140388AF0 + 8LL * v2[86]);
  v54 = v6;
  v61[3] = v6;
  LODWORD(v62) = a2 != 0;
  SessionId = -1;
  v51 = -1;
  if ( (unsigned int)SmStoreExistsForProcess(Process) )
  {
    LODWORD(v62) = v62 | 4;
    v5 = 2;
    LODWORD(v61[4]) = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v6, &v56);
  if ( BestOutswapPagefile == 16 )
  {
    v31 = -1073741497;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x43536D4Du);
    v10 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v5 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 1112, 0LL);
      v11 = (volatile LONG *)(v6 + 1120);
      SpinLock = (PEX_SPIN_LOCK)(v6 + 1120);
      v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1120));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v31 = -1073740682;
        }
        else
        {
          v31 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v31 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        __writecr8(v12);
        v6 = v54;
      }
      else
      {
        *(_QWORD *)(MiGetSharedVm(v14) + 24) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
        __writecr8(v12);
        v16 = v56;
        while ( 1 )
        {
          v17 = *((_QWORD *)v2 + 16);
          v53 = v17;
          if ( !v17 )
          {
            v31 = -1073741779;
            goto LABEL_32;
          }
          if ( LODWORD(v61[4]) == -1 )
            break;
          v31 = MiReserveWorkingSetSwapSpace(v54, &v61[5], v15, BestOutswapPagefile, v16, v17);
          if ( v31 >= 0 )
          {
            v17 = v53;
            break;
          }
          if ( v16 < 0x10 )
          {
            BestOutswapPagefile = v16;
            v31 = MiExtendWorkingSetSwapPagefile(v54, v53, v16);
            if ( v31 >= 0 )
              continue;
          }
          goto LABEL_32;
        }
        v18 = MiAllocateWorkingSetSwapSupport(v17);
        *(_QWORD *)v10 = v18;
        if ( !v18 )
          goto LABEL_83;
        v19 = 0LL;
        if ( !a2 )
          goto LABEL_11;
        v19 = *((_QWORD *)v2 + 17) - *((_QWORD *)v2 + 18);
        if ( v19 > *((_QWORD *)v2 + 17) )
          v19 = *((_QWORD *)v2 + 17);
        if ( v19 && (v49 = MiAllocateWorkingSetSwapSupport(v19), (*(_QWORD *)(v10 + 8) = v49) == 0LL) )
        {
LABEL_83:
          v31 = -1073741670;
        }
        else
        {
LABEL_11:
          v20 = CurrentThread;
          v61[0] = *(_QWORD *)v10;
          v61[1] = *(_QWORD *)(v10 + 8);
          v61[2] = v2;
          --CurrentThread->SpecialApcDisable;
          v21 = Processa;
          ExAcquirePushLockSharedEx((ULONG_PTR)&Processa[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v20[1].Queue) |= 2u;
          if ( (v21[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v20, v21);
            v31 = -1073741558;
          }
          else
          {
            v22 = (_QWORD *)v21[2].Affinity.Bitmap[4];
            v23 = 0LL;
            while ( v22 )
            {
              v23 = (unsigned __int64)v22;
              v22 = (_QWORD *)*v22;
            }
            if ( v23 )
            {
              do
              {
                if ( !(unsigned int)MiVadMapsLargeImage(v23) && ((1 << (*(_BYTE *)(v23 + 48) & 7)) & 0x55) != 0 )
                {
                  SharedVm = MiGetSharedVm(v2);
                  v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
                  *(_DWORD *)(SharedVm + 4) = 0;
                  LOBYTE(v26) = v25;
                  BYTE4(v61[4]) = v25;
                  if ( (*(_DWORD *)(v23 + 48) & 0x80000) == 0 )
                  {
                    MiEnumerateLeafPtes(
                      (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32)) << 12,
                      (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12,
                      (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiOutSwapWorkingSetCallback,
                      (__int64)v61,
                      0);
                    LOBYTE(v26) = BYTE4(v61[4]);
                  }
                  MiUnlockWorkingSetExclusive(v2, v26);
                }
                v27 = *(_QWORD **)(v23 + 8);
                v28 = v23;
                if ( v27 )
                {
                  do
                  {
                    v23 = (unsigned __int64)v27;
                    v27 = (_QWORD *)*v27;
                  }
                  while ( v27 );
                }
                else
                {
                  while ( 1 )
                  {
                    v23 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !v23 || *(_QWORD *)v23 == v28 )
                      break;
                    v28 = v23;
                  }
                }
              }
              while ( v23 );
              v21 = Processa;
            }
            UNLOCK_ADDRESS_SPACE_SHARED(v20, v21);
            if ( *(_QWORD *)(*(_QWORD *)v10 + 16LL) < v53 )
            {
              v29 = MiReAllocateWorkingSetSwapSupport(*(_QWORD *)v10);
              if ( v29 )
              {
                ExFreePoolWithTag(*(PVOID *)v10, 0);
                *(_QWORD *)v10 = v29;
              }
            }
            v30 = *(_QWORD *)(v10 + 8);
            if ( v30 )
            {
              if ( *(_QWORD *)(v30 + 16) < v19 )
              {
                v50 = MiReAllocateWorkingSetSwapSupport(v30);
                if ( v50 )
                {
                  ExFreePoolWithTag(*(PVOID *)(v10 + 8), 0);
                  *(_QWORD *)(v10 + 8) = v50;
                }
              }
            }
            v53 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
            MiGetKernelStackSwapSupport(v10, (__int64)Processa);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*(_QWORD *)v10);
            v5 |= 4u;
            v31 = 0;
          }
        }
LABEL_32:
        v32 = SpinLock;
        v33 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport(v2) == 1 )
        {
          v35 = MiGetSharedVm(v34);
          if ( v5 < 4 )
          {
            *(_QWORD *)(v35 + 24) = 0LL;
          }
          else
          {
            *(_QWORD *)(v35 + 24) = v10;
            v10 = 0LL;
            v31 = 0;
          }
        }
        else
        {
          v31 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v32);
        __writecr8(v33);
        v6 = v54;
        MiFreeReservationRuns(v54, &v61[5]);
      }
      if ( v10 )
        MiFreeWorkingSetSwapContext(v6, v10);
    }
    else
    {
      v31 = -1073741670;
    }
    SessionId = -1;
  }
  if ( (v5 & 1) != 0 )
  {
    v36 = v6 + 1112;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 1112);
    v52 = 0;
    v37 = v6 + 1112;
    v38 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v37) == 1 )
    {
      SessionId = MmGetSessionIdEx(v38->ApcState.Process);
      v51 = SessionId;
    }
    --v38->SpecialApcDisable;
    v39 = ++v38->AbAllocationRegionCount;
    v40 = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
    v41 = !_BitScanReverse((unsigned int *)&v42, v40);
    v57 = v42;
    if ( v41 )
    {
LABEL_69:
      if ( (*((_DWORD *)&v38->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v38, v36, SessionId, 0LL);
    }
    else
    {
      while ( 1 )
      {
        v43 = 1 << v42;
        v44 = v42;
        v45 = &v38->LockEntries[v44];
        v40 &= ~v43;
        if ( (v45->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v45->LockState.0 & 1) == 0
          && (*(_QWORD *)&v45->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
          && v45->LockState.SessionId == v51 )
        {
          v45->AcquiredByte &= ~1u;
          if ( v45->LockState.0 )
            break;
        }
        v41 = !_BitScanReverse((unsigned int *)&v42, v40);
        v57 = v42;
        if ( v41 )
          goto LABEL_68;
      }
      if ( !v45 )
      {
LABEL_68:
        SessionId = v51;
        goto LABEL_69;
      }
      v45->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v45->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v38->LockEntries[v44].TreeNode);
      v52 = 0;
      v52 = v45->BoostBitmap.AllFields & 0x1FFFF;
      v45->BoostBitmap.AllFields &= 0xFFFE0000;
      v45->ThreadLocalFlags &= ~1u;
      v45->LockState.0 = 0LL;
      v46 = ((char *)v45 - (char *)v38 - 800) / 96;
      if ( v39 == 1 )
        v38->AbEntrySummary |= 1 << v46;
      else
        _InterlockedOr8((volatile signed __int8 *)&v38->AbOrphanedEntrySummary, 1 << v46);
    }
    --v38->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v38, v36, &v52);
    v41 = v38->SpecialApcDisable++ == -1;
    if ( v41 && ($B476B70DB57F76B110DA5B9238C3E934 *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
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
  v62 = v53;
  v63 = v61[15];
  v64 = v61[16];
  v65 = v61[17];
  v66 = v31;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v31;
}
