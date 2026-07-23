/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x140215F00
 * Callers:
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 * Callees:
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14010030C (MiUnlockProbePacketWorkingSet.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiLockProbePacketWorkingSet @ 0x140125258 (MiLockProbePacketWorkingSet.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 a1, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // rcx
  int v6; // r15d
  __int64 v7; // rbp
  struct _KTHREAD *v8; // rdi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v10; // r14
  unsigned int v11; // edx
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  unsigned int v20; // r10d
  int v21; // r9d
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v27; // rcx
  __int64 *v28; // r10
  __int64 v29; // rdi
  int v31; // [rsp+70h] [rbp+8h] BYREF
  int v32; // [rsp+80h] [rbp+18h]
  __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  MiUnlockProbePacketWorkingSet(a1, (__int64)a2);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 55) = 1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v5 + 880, 0LL);
  v6 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 64), 1LL);
  if ( v6 >= 0 )
  {
    v19 = 1;
    MiLockProbePacketWorkingSet(a1);
    v20 = 3;
    v21 = -1;
    while ( 1 )
    {
      v22 = a2[v20];
      v23 = *v22;
      v24 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL )
      {
        v24 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
          LOBYTE(v23) = MiReadPteShadow();
      }
      if ( (v23 & 1) == 0 || (v23 & 0x80u) != 0LL )
        break;
      v20 += v21;
      if ( !v20 )
      {
        v33 = **a2;
        if ( (v33 & 1) != 0 )
        {
          v25 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v33) - 0x58000000000LL;
          if ( (*(_QWORD *)(v25 + 40) & 0x200000000000000LL) != 0 )
          {
            v24 = *(_QWORD *)(v25 + 8);
            if ( v24 < 0 )
            {
              CloneAddress = MiLocateCloneAddress(*(_QWORD *)(a1 + 64), v24 | 0x8000000000000000uLL);
              if ( CloneAddress )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v27 + 1296) + 240LL) > CloneAddress[9]
                  && (unsigned int)MiCopyOnWriteEx(*(_QWORD *)a1, v28, -1LL, *(_BYTE *)(a1 + 52), 0) )
                {
                  v19 = 0;
                }
              }
            }
          }
        }
        break;
      }
    }
    MiUnlockProbePacketWorkingSet(a1, v24);
    if ( v19 )
      MiReturnFullProcessCommitment(*(_QWORD *)(a1 + 64), 1LL);
    v29 = *(_QWORD *)(a1 + 64);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v29 + 880));
    KeAbPostRelease(v29 + 880);
    v6 = 0;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 64) + 880LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    v31 = 0;
    v8 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v8->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v8->SpecialApcDisable;
    v10 = ++v8->AbAllocationRegionCount;
    v11 = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v12 = !_BitScanReverse((unsigned int *)&v13, v11);
      v32 = v13;
      if ( v12 )
        break;
      v14 = 1 << v13;
      v15 = v13;
      v16 = &v8->LockEntries[v15];
      v11 &= ~v14;
      if ( (v16->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v16->LockState.0 & 1) == 0
        && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
        && v16->LockState.SessionId == (_DWORD)SessionId )
      {
        v16->AcquiredByte &= ~1u;
        if ( v16->LockState.0 )
        {
          if ( v16 )
          {
            v16->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v16->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v8->LockEntries[v15].TreeNode);
            v31 = 0;
            v31 = v16->BoostBitmap.AllFields & 0x1FFFF;
            v16->BoostBitmap.AllFields &= 0xFFFE0000;
            v16->ThreadLocalFlags &= ~1u;
            v16->LockState.0 = 0LL;
            v17 = ((char *)v16 - (char *)v8 - 800) / 96;
            if ( v10 == 1 )
              v8->AbEntrySummary |= 1 << v17;
            else
              _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v17);
            goto LABEL_19;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, v7, SessionId, 0LL);
LABEL_19:
    --v8->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v8, v7, (unsigned int *)&v31);
    v12 = v8->SpecialApcDisable++ == -1;
    if ( v12 && ($B476B70DB57F76B110DA5B9238C3E934 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
      KiCheckForKernelApcDelivery(v18);
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v6;
}
