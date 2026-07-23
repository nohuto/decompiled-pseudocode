/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x14020E7A4
 * Callers:
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 * Callees:
 *     MiUnlockProbePacketWorkingSet @ 0x140026948 (MiUnlockProbePacketWorkingSet.c)
 *     MiLockProbePacketWorkingSet @ 0x14002A578 (MiLockProbePacketWorkingSet.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 a1, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rcx
  int v6; // r12d
  __int64 v7; // rbp
  struct _KTHREAD *v8; // rdi
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR SessionId; // r9
  unsigned __int8 v11; // r15
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // ax
  int v21; // edi
  unsigned int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // r9d
  int v26; // r10d
  unsigned __int64 v27; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v29; // rcx
  __int64 v30; // r10
  __int64 v31; // rdi
  int v33; // [rsp+70h] [rbp+8h] BYREF
  int v34; // [rsp+80h] [rbp+18h]
  __int64 v35; // [rsp+88h] [rbp+20h] BYREF

  MiUnlockProbePacketWorkingSet(a1, (__int64)a2);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 55) = 1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v5 + 880, 0LL);
  v6 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 64), 1LL);
  if ( v6 >= 0 )
  {
    v21 = 1;
    MiLockProbePacketWorkingSet(a1);
    v22 = 3;
    while ( 1 )
    {
      v23 = MI_READ_PTE_LOCK_FREE(a2[v22]);
      v35 = v23;
      if ( (v23 & 1) == 0 || (v23 & 0x80u) != 0LL )
        break;
      v22 = v25 + v26;
      if ( !v22 )
      {
        v35 = **a2;
        if ( (v35 & 1) != 0 )
        {
          v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v35) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0 )
          {
            v24 = *(_QWORD *)(v27 + 8);
            if ( v24 < 0 )
            {
              CloneAddress = MiLocateCloneAddress(*(_QWORD *)(a1 + 64), v24 | 0x8000000000000000uLL);
              if ( CloneAddress )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v29 + 1296) + 240LL) > CloneAddress[9]
                  && (unsigned int)MiCopyOnWriteEx(*(_QWORD *)a1, v30, 0xFFFFFFFFFFFFFFFFuLL, *(_BYTE *)(a1 + 52), 0) )
                {
                  v21 = 0;
                }
              }
            }
          }
        }
        break;
      }
    }
    MiUnlockProbePacketWorkingSet(a1, v24);
    if ( v21 )
      MiReturnFullProcessCommitment(*(_QWORD *)(a1 + 64));
    v31 = *(_QWORD *)(a1 + 64);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v31 + 880));
    KeAbPostRelease(v31 + 880);
    v6 = 0;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 64) + 880LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    v33 = 0;
    v8 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    {
      SessionId = (unsigned int)MmGetSessionIdEx(v8->ApcState.Process);
      BugCheckParameter4 = 0LL;
    }
    else
    {
      SessionId = 0xFFFFFFFFLL;
    }
    --v8->SpecialApcDisable;
    v11 = ++v8->AbAllocationRegionCount;
    LODWORD(v12) = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      v34 = v14;
      if ( v13 )
        break;
      v15 = 1 << v14;
      v16 = v14;
      v17 = &v8->LockEntries[v16];
      v12 = ~v15 & (unsigned int)v12;
      if ( (v17->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v17->LockState.0 & 1) == 0
        && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
        && v17->LockState.SessionId == (_DWORD)SessionId )
      {
        v17->AcquiredByte &= ~1u;
        if ( v17->LockState.0 )
        {
          if ( v17 )
          {
            v17->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v17->LockState.LockState < 0 )
            {
              KiAbEntryRemoveFromTree(&v8->LockEntries[v16].TreeNode, v12);
              BugCheckParameter4 = 0LL;
            }
            v33 = BugCheckParameter4;
            v33 = v17->BoostBitmap.AllFields & 0x1FFFF;
            v17->BoostBitmap.AllFields &= 0xFFFE0000;
            v17->ThreadLocalFlags &= ~1u;
            v17->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)BugCheckParameter4;
            v18 = ((char *)v17 - (char *)v8 - 800) / 96;
            if ( v11 == 1 )
              v8->AbEntrySummary |= 1 << v18;
            else
              _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v18);
            goto LABEL_19;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v8->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, v7, SessionId, BugCheckParameter4);
LABEL_19:
    --v8->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(&v8->Header.Lock, v7, (unsigned int *)&v33);
    v20 = v8->SpecialApcDisable + 1;
    v8->SpecialApcDisable = v20;
    if ( !v20 && ($69CD3F157F9F39B6F7113F2231989901 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
      KiCheckForKernelApcDelivery(v19);
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiLockProbePacketWorkingSet(a1);
  return (unsigned int)v6;
}
