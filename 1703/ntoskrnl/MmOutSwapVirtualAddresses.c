/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x140004100
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x1400040B8 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiEnumerateLeafPtes @ 0x140079AD8 (MiEnumerateLeafPtes.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14007D260 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14007D2B8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x14007D30C (MiFindBestOutswapPagefile.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
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
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14041F274 (MiReserveWorkingSetSwapSpace.c)
 *     MiValidateMemoryRangeEntries @ 0x14049AD94 (MiValidateMemoryRangeEntries.c)
 *     EtwTraceWorkingSetSwap @ 0x1404C9698 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x1404CA080 (MiFreeReservationRuns.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406BF54C (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 v9; // r13
  unsigned int BestOutswapPagefile; // edi
  __int64 v11; // r8
  ULONG_PTR v12; // r12
  __int64 v13; // r8
  unsigned int v14; // ebx
  int v15; // r14d
  __int64 WorkingSetSwapSupport; // rax
  _QWORD *v17; // rdi
  PEPROCESS v18; // rcx
  struct _KTHREAD *v19; // rbx
  _QWORD *v20; // r15
  unsigned __int64 v21; // r12
  __int64 Address; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rcx
  __int64 SharedVm; // rbx
  KIRQL v26; // al
  __int64 v27; // rdx
  struct _KPROCESS *v28; // r15
  __int64 v29; // rbx
  struct _KTHREAD *v30; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v32; // r13
  unsigned int v33; // r8d
  bool v34; // zf
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int16 v38; // ax
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  PEPROCESS Processa; // [rsp+40h] [rbp-C0h]
  _DWORD v43[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _KTHREAD *v44; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v45; // [rsp+58h] [rbp-A8h]
  _QWORD *v46; // [rsp+60h] [rbp-A0h]
  _QWORD *v47; // [rsp+68h] [rbp-98h]
  _QWORD v48[18]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  __int64 v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  int v53; // [rsp+120h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Processa = Process;
  v7 = WORD2(Process[1].SecurePid);
  v47 = a4;
  v44 = CurrentThread;
  v9 = *(_QWORD *)(qword_14036C8F8 + 8 * v7);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, v43);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v49) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, v11, &v41);
  memset(v48, 0, sizeof(v48));
  --CurrentThread->SpecialApcDisable;
  v12 = v9 + 1160;
  ExAcquirePushLockExclusiveEx(v9 + 1160, 0LL);
  v14 = v43[0];
  while ( 1 )
  {
    v15 = MiReserveWorkingSetSwapSpace(v9, &v48[5], v13, BestOutswapPagefile, v14, v41);
    if ( v15 >= 0 )
      break;
    if ( v14 < 0x10 )
    {
      BestOutswapPagefile = v14;
      v15 = MiExtendWorkingSetSwapPagefile(v9, v41, v14);
      if ( v15 >= 0 )
        continue;
    }
    goto LABEL_47;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v41);
  v15 = 0;
  v46 = (_QWORD *)WorkingSetSwapSupport;
  v17 = (_QWORD *)WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
  {
    v15 = -1073741670;
LABEL_47:
    v28 = Processa;
    goto LABEL_19;
  }
  v18 = Processa;
  v19 = v44;
  v48[0] = WorkingSetSwapSupport;
  v48[3] = v9;
  v48[2] = (char *)Processa + 1280;
  v45 = (unsigned __int64)&Processa[1].IdealNode[12];
  --v44->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v18[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(v19[1].Queue) |= 2u;
  v20 = &a2[2 * a3];
  if ( a2 < v20 )
  {
    v21 = v45;
    do
    {
      Address = MiLocateAddress(*a2);
      v23 = Address;
      if ( Address )
      {
        if ( (*(_DWORD *)(Address + 48) & 0x8007) == 0x8000 )
        {
          v24 = *(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32);
          v45 = *a2 - 1LL + a2[1];
          if ( v24 >= v45 >> 12 )
          {
            SharedVm = MiGetSharedVm(v21);
            v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
            *(_DWORD *)(SharedVm + 4) = 0;
            LOBYTE(v27) = v26;
            BYTE4(v48[4]) = v26;
            if ( (*(_DWORD *)(v23 + 48) & 0x80000) == 0 )
            {
              MiEnumerateLeafPtes(*a2, v45, (unsigned int)&MiOutSwapWorkingSetCallback, (unsigned int)v48, 0);
              LOBYTE(v27) = BYTE4(v48[4]);
            }
            MiUnlockWorkingSetExclusive(v21, v27);
          }
        }
      }
      a2 += 2;
    }
    while ( a2 < v20 );
    v17 = v46;
    v12 = v9 + 1160;
    v19 = v44;
    v15 = 0;
  }
  v28 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v19, Processa);
  if ( v17[2] < v41 )
  {
    v29 = MiReAllocateWorkingSetSwapSupport(v17);
    if ( v29 )
    {
      ExFreePoolWithTag(v17, 0);
      v17 = (_QWORD *)v29;
    }
  }
  v41 = v17[3];
  *v47 = v17;
LABEL_19:
  MiFreeReservationRuns(v9, &v48[5]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  v40 = 0;
  v30 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
    SessionId = MmGetSessionIdEx(v30->ApcState.Process);
  else
    SessionId = -1;
  --v30->SpecialApcDisable;
  v32 = ++v30->AbAllocationRegionCount;
  v33 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v34 = !_BitScanReverse((unsigned int *)&v35, v33);
    v43[1] = v35;
    if ( v34 )
      break;
    v36 = (__int64)&v30->LockEntries[v35];
    v33 &= ~(1 << v35);
    if ( (*(_BYTE *)(v36 + 26) & 1) != 0
      && (*(_DWORD *)(v36 + 32) & 1) == 0
      && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v36 + 40) == SessionId )
    {
      *(_BYTE *)(v36 + 26) &= ~1u;
      if ( *(_QWORD *)(v36 + 32) )
      {
        if ( v36 )
        {
          *(_BYTE *)(v36 + 32) |= 2u;
          if ( *(__int64 *)(v36 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v36);
          v40 = 0;
          v40 = *(_DWORD *)(v36 + 88) & 0x1FFFF;
          *(_DWORD *)(v36 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v36 + 25) &= ~1u;
          *(_QWORD *)(v36 + 32) = 0LL;
          v37 = (v36 - (__int64)v30 - 800) / 96;
          if ( v32 == 1 )
            v30->AbEntrySummary |= 1 << v37;
          else
            _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, 1 << v37);
          goto LABEL_35;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v30->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v30, v12, SessionId, 0LL);
LABEL_35:
  --v30->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v30, v12, &v40);
  v38 = v30->SpecialApcDisable + 1;
  v30->SpecialApcDisable = v38;
  if ( !v38 && ($69CD3F157F9F39B6F7113F2231989901 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(v44);
  v49 = v41;
  v50 = v48[15];
  v51 = v48[16];
  v52 = v48[17];
  v53 = v15;
  EtwTraceWorkingSetSwap(v28);
  return (unsigned int)v15;
}
