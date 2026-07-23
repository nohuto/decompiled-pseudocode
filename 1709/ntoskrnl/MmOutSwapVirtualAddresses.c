/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x140230E70
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140275E70 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x140002204 (MiEnumerateLeafPtes.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14000B1B4 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14000B20C (MiAllocateWorkingSetSwapSupport.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiFindBestOutswapPagefile @ 0x14012BCF0 (MiFindBestOutswapPagefile.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiFreeReservationRuns @ 0x140444898 (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140451780 (MiReserveWorkingSetSwapSpace.c)
 *     MiValidateMemoryRangeEntries @ 0x1404D4A08 (MiValidateMemoryRangeEntries.c)
 *     EtwTraceWorkingSetSwap @ 0x1405983E0 (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406EC81C (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 v9; // r13
  unsigned int BestOutswapPagefile; // r14d
  unsigned __int64 v12; // r12
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rdi
  int v16; // r14d
  _QWORD *WorkingSetSwapSupport; // rax
  _QWORD *v18; // rdi
  struct _KPROCESS *v19; // rsi
  struct _KTHREAD *v20; // rbx
  unsigned int SessionId; // edx
  PEPROCESS v22; // rcx
  __int64 v23; // rbx
  unsigned __int64 *v24; // r15
  __int64 v25; // r12
  unsigned __int64 Address; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rcx
  LONG *SharedVm; // rbx
  KIRQL v30; // al
  __int64 v31; // rdx
  __int64 v32; // rbx
  unsigned __int8 v33; // r15
  unsigned int v34; // r8d
  int v35; // eax
  __int64 v36; // rcx
  _KLOCK_ENTRY *v37; // rdi
  bool v38; // zf
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-C8h]
  PEPROCESS Processa; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v46[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KTHREAD *v47; // [rsp+58h] [rbp-A8h]
  _QWORD *v48; // [rsp+60h] [rbp-A0h]
  _QWORD v49[18]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  __int64 v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+120h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Processa = Process;
  v7 = *((unsigned __int16 *)&Process[1].SecureState.Flags + 2);
  v48 = a4;
  v47 = CurrentThread;
  v9 = *(_QWORD *)(qword_140388AF0 + 8 * v7);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, v46);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v50) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v45);
  memset(v49, 0, sizeof(v49));
  --CurrentThread->SpecialApcDisable;
  v12 = v9 + 1112;
  ExAcquirePushLockExclusiveEx(v9 + 1112, 0LL);
  v14 = v46[0];
  v15 = v45;
  while ( 1 )
  {
    v16 = MiReserveWorkingSetSwapSpace(v9, &v49[5], v13, BestOutswapPagefile, v14, v15);
    if ( v16 >= 0 )
      break;
    if ( v14 >= 0x10 )
      goto LABEL_10;
    v16 = MiExtendWorkingSetSwapPagefile(v9, v15, v14);
    if ( v16 < 0 )
      goto LABEL_10;
    BestOutswapPagefile = v14;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v15);
  v18 = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
  {
    v16 = -1073741670;
LABEL_10:
    v19 = Processa;
    goto LABEL_11;
  }
  v22 = Processa;
  v23 = (__int64)v47;
  v49[0] = WorkingSetSwapSupport;
  v49[3] = v9;
  v49[2] = (char *)Processa + 1280;
  v43 = (unsigned __int64)&Processa[1].IdealNode[12];
  --v47->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v22[1].Affinity.Bitmap[7], 0LL);
  *(_BYTE *)(v23 + 1752) |= 2u;
  v24 = &a2[2 * a3];
  if ( a2 < v24 )
  {
    v25 = v43;
    do
    {
      Address = MiLocateAddress(*a2);
      v27 = Address;
      if ( Address )
      {
        if ( (*(_DWORD *)(Address + 48) & 0x8007) == 0x8000 )
        {
          v28 = *(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32);
          v43 = *a2 - 1 + a2[1];
          if ( v28 >= v43 >> 12 )
          {
            SharedVm = MiGetSharedVm(v25);
            v30 = ExAcquireSpinLockExclusive(SharedVm);
            SharedVm[1] = 0;
            LOBYTE(v31) = v30;
            BYTE4(v49[4]) = v30;
            if ( (*(_DWORD *)(v27 + 48) & 0x80000) == 0 )
            {
              MiEnumerateLeafPtes(
                *a2,
                v43,
                (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiOutSwapWorkingSetCallback,
                (__int64)v49,
                0);
              LOBYTE(v31) = BYTE4(v49[4]);
            }
            MiUnlockWorkingSetExclusive(v25, v31);
          }
        }
      }
      a2 += 2;
    }
    while ( a2 < v24 );
    v23 = (__int64)v47;
    v12 = v9 + 1112;
  }
  v19 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v23, (__int64)Processa);
  if ( v18[2] < v45 )
  {
    v32 = MiReAllocateWorkingSetSwapSupport((__int64)v18);
    if ( v32 )
    {
      ExFreePoolWithTag(v18, 0);
      v18 = (_QWORD *)v32;
    }
  }
  v16 = 0;
  v45 = v18[3];
  *v48 = v18;
LABEL_11:
  MiFreeReservationRuns(v9, &v49[5]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v12);
  v42 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  else
    SessionId = -1;
  --v20->SpecialApcDisable;
  v33 = ++v20->AbAllocationRegionCount;
  v34 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v38 = !_BitScanReverse((unsigned int *)&v39, v34);
    v46[1] = v39;
    if ( v38 )
      goto LABEL_37;
    v35 = 1 << v39;
    v36 = v39;
    v37 = &v20->LockEntries[v36];
    v34 &= ~v35;
    if ( (v37->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v37->LockState.0 & 1) == 0
      && (*(_QWORD *)&v37->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
      && v37->LockState.SessionId == SessionId )
    {
      v37->AcquiredByte &= ~1u;
      if ( v37->LockState.0 )
        break;
    }
  }
  if ( !v37 )
  {
LABEL_37:
    if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, v12, SessionId, 0LL);
    goto LABEL_44;
  }
  v37->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v37->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v20->LockEntries[v36].TreeNode);
  v42 = 0;
  v42 = v37->BoostBitmap.AllFields & 0x1FFFF;
  v37->BoostBitmap.AllFields &= 0xFFFE0000;
  v37->ThreadLocalFlags &= ~1u;
  v37->LockState.0 = 0LL;
  v40 = ((char *)v37 - (char *)v20 - 800) / 96;
  if ( v33 == 1 )
    v20->AbEntrySummary |= 1 << v40;
  else
    _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v40);
LABEL_44:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, v12, (unsigned int *)&v42);
  v38 = v20->SpecialApcDisable++ == -1;
  if ( v38 && ($B476B70DB57F76B110DA5B9238C3E934 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v41);
  KiLeaveGuardedRegionUnsafe((__int64)v47);
  v50 = v45;
  v51 = v49[15];
  v52 = v49[16];
  v53 = v49[17];
  v54 = v16;
  EtwTraceWorkingSetSwap(v19);
  return (unsigned int)v16;
}
