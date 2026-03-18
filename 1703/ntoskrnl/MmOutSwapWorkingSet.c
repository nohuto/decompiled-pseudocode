/*
 * XREFs of MmOutSwapWorkingSet @ 0x1400793EC
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     SmStoreExistsForProcess @ 0x1400624CC (SmStoreExistsForProcess.c)
 *     MiEnumerateLeafPtes @ 0x140079AD8 (MiEnumerateLeafPtes.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14007D260 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14007D2B8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x14007D30C (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x14007D9B4 (MiGetKernelStackSwapSupport.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetWorkingSetSwapSupport @ 0x1400A7F08 (MiGetWorkingSetSwapSupport.c)
 *     MiVadMapsLargeImage @ 0x1400CE200 (MiVadMapsLargeImage.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14041F274 (MiReserveWorkingSetSwapSpace.c)
 *     EtwTraceWorkingSetSwap @ 0x1404C9698 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404CA018 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1404CA080 (MiFreeReservationRuns.c)
 *     SmStoreSetProcessVaRanges @ 0x140568258 (SmStoreSetProcessVaRanges.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406BF54C (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(struct _KPROCESS *a1, int a2)
{
  unsigned __int16 *v3; // r13
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int SessionId; // r14d
  unsigned int BestOutswapPagefile; // r15d
  PVOID *PoolWithTag; // rax
  PVOID *v9; // r14
  volatile LONG *v10; // rdi
  KIRQL v11; // si
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 WorkingSetSwapSupport; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  struct _KTHREAD *v21; // rsi
  PEPROCESS v22; // rdi
  _QWORD *v23; // rax
  unsigned __int64 v24; // rsi
  __int64 SharedVm; // rdi
  KIRQL v26; // al
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rdi
  _QWORD *v31; // rcx
  int v32; // edi
  volatile LONG *v33; // r15
  KIRQL v34; // si
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  ULONG_PTR v39; // r15
  __int64 v40; // rcx
  struct _KTHREAD *v41; // rsi
  unsigned __int8 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // r8
  bool v45; // zf
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rdx
  __int16 v49; // ax
  PVOID v50; // rsi
  __int64 v52; // rax
  __int64 v53; // rdi
  int v54; // [rsp+38h] [rbp-D0h]
  int v55; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-C8h]
  PEPROCESS Process; // [rsp+48h] [rbp-C0h]
  __int64 v58; // [rsp+50h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-B0h]
  unsigned int v60; // [rsp+60h] [rbp-A8h] BYREF
  int v61; // [rsp+64h] [rbp-A4h]
  __int64 v62; // [rsp+68h] [rbp-A0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h]
  _QWORD v65[18]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  __int64 v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  int v70; // [rsp+138h] [rbp+30h]

  Process = a1;
  CurrentThread = KeGetCurrentThread();
  v61 = a2;
  P = 0LL;
  v56 = 0LL;
  v3 = &a1[1].IdealNode[12];
  v4 = 0;
  memset(v65, 0, sizeof(v65));
  v5 = *(_QWORD *)(qword_14036C8F8 + 8LL * v3[86]);
  v58 = v5;
  LODWORD(v66) = a2 != 0;
  v65[3] = v5;
  SessionId = -1;
  v54 = -1;
  if ( SmStoreExistsForProcess() )
  {
    LODWORD(v66) = v66 | 4;
    v4 = 2;
    LODWORD(v65[4]) = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v5, &v60);
  if ( BestOutswapPagefile == 16 )
  {
    v32 = -1073741497;
  }
  else
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x43536D4Du);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v4 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v5 + 1160, 0LL);
      v10 = (volatile LONG *)(v5 + 1168);
      SpinLock = (PEX_SPIN_LOCK)(v5 + 1168);
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 1168));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v3, v12, v13);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v32 = -1073740682;
        }
        else
        {
          v32 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v32 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        __writecr8(v11);
        v5 = v58;
      }
      else
      {
        *(_QWORD *)(MiGetSharedVm(v15) + 24) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        __writecr8(v11);
        v17 = v60;
        while ( 1 )
        {
          v18 = *((_QWORD *)v3 + 16);
          v56 = v18;
          if ( !v18 )
          {
            v32 = -1073741779;
            goto LABEL_33;
          }
          if ( LODWORD(v65[4]) == -1 )
            break;
          v32 = MiReserveWorkingSetSwapSpace(v58, &v65[5], v16, BestOutswapPagefile, v17, v18);
          if ( v32 >= 0 )
          {
            v18 = v56;
            break;
          }
          if ( v17 < 0x10 )
          {
            BestOutswapPagefile = v17;
            v32 = MiExtendWorkingSetSwapPagefile(v58, v56, v17);
            if ( v32 >= 0 )
              continue;
          }
          goto LABEL_33;
        }
        v19 = MiAllocateWorkingSetSwapSupport(v18);
        *v9 = (PVOID)v19;
        if ( !v19 )
          goto LABEL_84;
        v20 = 0LL;
        if ( !v61 )
          goto LABEL_11;
        v20 = *((_QWORD *)v3 + 17) - *((_QWORD *)v3 + 18);
        if ( v20 > *((_QWORD *)v3 + 17) )
          v20 = *((_QWORD *)v3 + 17);
        if ( v20 && (v52 = MiAllocateWorkingSetSwapSupport(v20), (v9[1] = (PVOID)v52) == 0LL) )
        {
LABEL_84:
          v32 = -1073741670;
        }
        else
        {
LABEL_11:
          v21 = CurrentThread;
          v65[0] = *v9;
          v65[1] = v9[1];
          v65[2] = v3;
          --CurrentThread->SpecialApcDisable;
          v22 = Process;
          ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v21[1].Queue) |= 2u;
          if ( (v22[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v21, v22);
            v32 = -1073741558;
          }
          else
          {
            v23 = (_QWORD *)v22[2].Affinity.Bitmap[4];
            v24 = 0LL;
            while ( v23 )
            {
              v24 = (unsigned __int64)v23;
              v23 = (_QWORD *)*v23;
            }
            if ( v24 )
            {
              do
              {
                if ( !(unsigned int)MiVadMapsLargeImage(v24) && ((1 << (*(_BYTE *)(v24 + 48) & 7)) & 0x55) != 0 )
                {
                  SharedVm = MiGetSharedVm(v3);
                  v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
                  *(_DWORD *)(SharedVm + 4) = 0;
                  LOBYTE(v27) = v26;
                  BYTE4(v65[4]) = v26;
                  if ( (*(_DWORD *)(v24 + 48) & 0x80000) == 0 )
                  {
                    MiEnumerateLeafPtes(
                      *(_DWORD *)(v24 + 24) << 12,
                      *(_DWORD *)(v24 + 28) << 12,
                      (unsigned int)&MiOutSwapWorkingSetCallback,
                      (unsigned int)v65,
                      0);
                    LOBYTE(v27) = BYTE4(v65[4]);
                  }
                  MiUnlockWorkingSetExclusive(v3, v27);
                }
                v28 = *(_QWORD **)(v24 + 8);
                v29 = v24;
                if ( v28 )
                {
                  do
                  {
                    v24 = (unsigned __int64)v28;
                    v28 = (_QWORD *)*v28;
                  }
                  while ( v28 );
                }
                else
                {
                  while ( 1 )
                  {
                    v24 = *(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !v24 || *(_QWORD *)v24 == v29 )
                      break;
                    v29 = v24;
                  }
                }
              }
              while ( v24 );
              v22 = Process;
            }
            UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, v22);
            if ( *((_QWORD *)*v9 + 2) < v56 )
            {
              v30 = MiReAllocateWorkingSetSwapSupport(*v9);
              if ( v30 )
              {
                ExFreePoolWithTag(*v9, 0);
                *v9 = (PVOID)v30;
              }
            }
            v31 = v9[1];
            if ( v31 )
            {
              if ( v31[2] < v20 )
              {
                v53 = MiReAllocateWorkingSetSwapSupport(v31);
                if ( v53 )
                {
                  ExFreePoolWithTag(v9[1], 0);
                  v9[1] = (PVOID)v53;
                }
              }
            }
            v56 = *((_QWORD *)*v9 + 3);
            MiGetKernelStackSwapSupport(v9, Process);
            if ( v4 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*v9);
            v4 |= 4u;
            v32 = 0;
          }
        }
LABEL_33:
        v33 = SpinLock;
        v34 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport(v3, v35, v36) == 1 )
        {
          v38 = MiGetSharedVm(v37);
          if ( v4 < 4 )
          {
            *(_QWORD *)(v38 + 24) = 0LL;
          }
          else
          {
            *(_QWORD *)(v38 + 24) = v9;
            v9 = 0LL;
            v32 = 0;
          }
        }
        else
        {
          v32 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v33);
        __writecr8(v34);
        v5 = v58;
        MiFreeReservationRuns(v58, &v65[5]);
      }
      if ( v9 )
        MiFreeWorkingSetSwapContext(v5, v9);
    }
    else
    {
      v32 = -1073741670;
    }
    SessionId = -1;
  }
  if ( (v4 & 1) != 0 )
  {
    v39 = v5 + 1160;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 1160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 + 1160);
    v55 = 0;
    v40 = v5 + 1160;
    v41 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v40) == 1 )
    {
      SessionId = MmGetSessionIdEx(v41->ApcState.Process);
      v54 = SessionId;
    }
    --v41->SpecialApcDisable;
    v42 = ++v41->AbAllocationRegionCount;
    LODWORD(v43) = ((char)v41->AbEntrySummary | (char)v41->AbOrphanedEntrySummary) ^ 0x3F;
    v44 = v39 & 0x7FFFFFFFFFFFFFFCLL;
    v45 = !_BitScanReverse((unsigned int *)&v46, v43);
    LODWORD(v62) = v46;
    if ( !v45 )
    {
      while ( 1 )
      {
        v47 = (__int64)&v41->LockEntries[v46];
        v43 = ~(1 << v46) & (unsigned int)v43;
        if ( (*(_BYTE *)(v47 + 26) & 1) != 0
          && (*(_DWORD *)(v47 + 32) & 1) == 0
          && (*(_QWORD *)(v47 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v44
          && *(_DWORD *)(v47 + 40) == v54 )
        {
          *(_BYTE *)(v47 + 26) &= ~1u;
          if ( *(_QWORD *)(v47 + 32) )
            break;
        }
        v45 = !_BitScanReverse((unsigned int *)&v46, v43);
        LODWORD(v62) = v46;
        if ( v45 )
        {
          SessionId = v54;
          goto LABEL_70;
        }
      }
      if ( v47 )
      {
        *(_BYTE *)(v47 + 32) |= 2u;
        if ( *(__int64 *)(v47 + 32) < 0 )
          KiAbEntryRemoveFromTree(v47, v43, v44);
        v55 = 0;
        v55 = *(_DWORD *)(v47 + 88) & 0x1FFFF;
        *(_DWORD *)(v47 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v47 + 25) &= ~1u;
        *(_QWORD *)(v47 + 32) = 0LL;
        v48 = (v47 - (__int64)v41 - 800) / 96;
        if ( v42 == 1 )
          v41->AbEntrySummary |= 1 << v48;
        else
          _InterlockedOr8((volatile signed __int8 *)&v41->AbOrphanedEntrySummary, 1 << v48);
LABEL_56:
        --v41->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v41, v39, &v55);
        v49 = v41->SpecialApcDisable + 1;
        v41->SpecialApcDisable = v49;
        if ( !v49 && ($69CD3F157F9F39B6F7113F2231989901 *)v41->ApcState.ApcListHead[0].Flink != &v41->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        goto LABEL_60;
      }
      SessionId = v54;
    }
LABEL_70:
    if ( (*((_DWORD *)&v41->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v41, v39, SessionId, 0LL);
    goto LABEL_56;
  }
LABEL_60:
  v50 = P;
  if ( P )
  {
    if ( v4 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v50, 0);
  }
  v66 = v56;
  v67 = v65[15];
  v68 = v65[16];
  v69 = v65[17];
  v70 = v32;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v32;
}
