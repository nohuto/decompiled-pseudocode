/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x14009C194
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14009C150 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiOutSwapWorkingSet @ 0x140062EF0 (MiOutSwapWorkingSet.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiFindBestOutswapPagefile @ 0x14007FC04 (MiFindBestOutswapPagefile.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14009D454 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14009D4AC (MiAllocateWorkingSetSwapSupport.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiValidateMemoryRangeEntries @ 0x1404B36A4 (MiValidateMemoryRangeEntries.c)
 *     EtwTraceWorkingSetSwap @ 0x14052C59C (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x14053AF80 (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14053AFC8 (MiReserveWorkingSetSwapSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140756438 (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 v9; // r13
  unsigned int BestOutswapPagefile; // esi
  ULONG_PTR v11; // r15
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned __int16 *v14; // r12
  int v15; // esi
  __int64 WorkingSetSwapSupport; // rax
  _QWORD *v17; // rbx
  PEPROCESS v18; // rcx
  struct _KTHREAD *v19; // rsi
  unsigned __int64 *v20; // r14
  __int64 v21; // r15
  unsigned __int64 Address; // rax
  struct _KPROCESS *v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KTHREAD *v28; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v30; // r12
  unsigned int v31; // r8d
  bool v32; // zf
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  _KLOCK_ENTRY *v36; // rdi
  __int64 v37; // rdx
  int v39; // [rsp+30h] [rbp-D0h] BYREF
  PEPROCESS Processa; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v41; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v42[4]; // [rsp+48h] [rbp-B8h] BYREF
  struct _KTHREAD *v43; // [rsp+58h] [rbp-A8h]
  _QWORD *v44; // [rsp+60h] [rbp-A0h]
  _QWORD v45[18]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int64 v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+120h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Processa = Process;
  v7 = *((unsigned __int16 *)&Process[1].SecureState.Flags + 3);
  v44 = a4;
  v43 = CurrentThread;
  v9 = *(_QWORD *)(qword_1403CBD88 + 8 * v7);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, v42);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v46) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v41);
  memset(v45, 0, sizeof(v45));
  --CurrentThread->SpecialApcDisable;
  v11 = v9 + 1112;
  ExAcquirePushLockExclusiveEx(v9 + 1112, 0LL);
  v13 = v42[0];
  v14 = v41;
  while ( 1 )
  {
    v15 = MiReserveWorkingSetSwapSpace(v9, &v45[5], v12, BestOutswapPagefile, v13, v14);
    if ( v15 >= 0 )
      break;
    if ( v13 >= 0x10 )
      goto LABEL_45;
    v15 = MiExtendWorkingSetSwapPagefile(v9, v14, v13);
    if ( v15 < 0 )
      goto LABEL_45;
    BestOutswapPagefile = v13;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v14);
  v17 = (_QWORD *)WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
  {
    v15 = -1073741670;
LABEL_45:
    v23 = Processa;
    goto LABEL_17;
  }
  v18 = Processa;
  v19 = v43;
  v45[0] = WorkingSetSwapSupport;
  v45[3] = v9;
  v45[2] = (char *)Processa + 1280;
  v41 = &Processa[1].IdealNode[12];
  --v43->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v18[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(v19[1].Queue) |= 2u;
  v20 = &a2[2 * a3];
  if ( a2 < v20 )
  {
    v21 = (__int64)v41;
    do
    {
      Address = MiLocateAddress(*a2);
      if ( Address
        && (*(_DWORD *)(Address + 48) & 0x4007) == 0x4000
        && (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) >= (*a2 + a2[1] - 1) >> 12 )
      {
        MiOutSwapWorkingSet(v21, Address, *a2, *a2 + a2[1] - 1, (__int64)v45);
      }
      a2 += 2;
    }
    while ( a2 < v20 );
    v11 = v9 + 1112;
  }
  v23 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v19, Processa);
  if ( v17[2] < (unsigned __int64)v14 )
  {
    v24 = MiReAllocateWorkingSetSwapSupport(v17);
    if ( v24 )
    {
      ExFreePoolWithTag(v17, 0);
      v17 = (_QWORD *)v24;
    }
  }
  v15 = 0;
  v41 = (unsigned __int16 *)v17[3];
  *v44 = v17;
LABEL_17:
  MiFreeReservationRuns(v9, &v45[5]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11, v25, v26, v27);
  v39 = 0;
  v28 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    SessionId = MmGetSessionIdEx(v28->ApcState.Process);
  else
    SessionId = -1;
  --v28->SpecialApcDisable;
  v30 = ++v28->AbAllocationRegionCount;
  v31 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v32 = !_BitScanReverse((unsigned int *)&v33, v31);
    v42[2] = v33;
    if ( v32 )
      break;
    v34 = 1 << v33;
    v35 = v33;
    v36 = &v28->LockEntries[v35];
    v31 &= ~v34;
    if ( (v36->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v36->LockState.0 & 1) == 0
      && (*(_QWORD *)&v36->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
      && v36->LockState.SessionId == SessionId )
    {
      v36->AcquiredByte &= ~1u;
      if ( v36->LockState.0 )
      {
        if ( v36 )
        {
          v36->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v36->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v28->LockEntries[v35].TreeNode);
          v39 = 0;
          v39 = v36->BoostBitmap.AllFields & 0x1FFFF;
          v36->BoostBitmap.AllFields &= 0xFFFE0000;
          v36->ThreadLocalFlags &= ~1u;
          v36->LockState.0 = 0LL;
          v37 = ((char *)v36 - (char *)v28 - 800) / 96;
          if ( v30 == 1 )
            v28->AbEntrySummary |= 1 << v37;
          else
            _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v37);
          goto LABEL_33;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v28, v11, SessionId, 0LL);
LABEL_33:
  --v28->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v28, v11, &v39);
  v32 = v28->SpecialApcDisable++ == -1;
  if ( v32 && ($005F0E83B22994B61E86C72E0CE43C71 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(v43);
  v46 = v41;
  v47 = v45[15];
  v48 = v45[16];
  v49 = v45[17];
  v50 = v15;
  EtwTraceWorkingSetSwap(v23);
  return (unsigned int)v15;
}
