/*
 * XREFs of MiFreeUnusedPfnPages @ 0x14015A8A0
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MiPfnRangeIsZero @ 0x14015B174 (MiPfnRangeIsZero.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlCompareMemoryUlong @ 0x140189B80 (RtlCompareMemoryUlong.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFreeUnusedPfnPages(ULONG_PTR *a1)
{
  ULONG_PTR *v1; // r15
  ULONG_PTR *v2; // rdi
  unsigned __int64 v3; // rsi
  ULONG_PTR v4; // r12
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r13
  LONG *SharedVm; // rdi
  __int64 v9; // r9
  struct _KTHREAD *v10; // rdi
  __int64 v11; // rdx
  unsigned __int8 v12; // r13
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int16 v19; // ax
  __int64 result; // rax
  struct _KTHREAD *v21; // rdi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v23; // si
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  _KLOCK_ENTRY *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int16 v31; // ax
  __int64 NextPageTable; // rax
  __int64 v33; // r10
  SIZE_T i; // rdi
  __int64 v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v37; // r15
  __int64 v38; // r11
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r11
  __int64 v43; // rax
  __int64 v44; // r15
  SIZE_T v45; // rax
  __int64 v46; // rdx
  void *v47; // r13
  char *v48; // r13
  char *v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // [rsp+30h] [rbp-59h]
  SIZE_T v52; // [rsp+30h] [rbp-59h]
  unsigned int v53; // [rsp+40h] [rbp-49h] BYREF
  __int64 v54; // [rsp+48h] [rbp-41h] BYREF
  char *AnyMultiplexedVm; // [rsp+50h] [rbp-39h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-31h]
  ULONG_PTR *v57; // [rsp+60h] [rbp-29h]
  ULONG_PTR v58; // [rsp+68h] [rbp-21h] BYREF
  __int16 v59; // [rsp+70h] [rbp-19h] BYREF
  char v60; // [rsp+72h] [rbp-17h]
  int v61; // [rsp+74h] [rbp-15h]
  _QWORD v62[2]; // [rsp+78h] [rbp-11h] BYREF
  PVOID Source; // [rsp+88h] [rbp-1h]
  unsigned __int64 v64; // [rsp+90h] [rbp+7h]
  ULONG_PTR *v65; // [rsp+98h] [rbp+Fh]
  __int64 v67; // [rsp+F0h] [rbp+67h]
  KIRQL v68; // [rsp+F8h] [rbp+6Fh]
  int v69; // [rsp+100h] [rbp+77h] BYREF
  int v70; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = &MiSystemPartition;
  v2 = a1;
  if ( a1 )
    v1 = a1;
  v57 = v1;
  v3 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = (ULONG_PTR)(v1 + 28);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v65 = v1 + 28;
  while ( 1 )
  {
    v51 = (v5 & ((unsigned __int64)(48 * qword_14036C290 - 0x57FFFFFFFD0LL) >> 9)) + v6;
    v7 = v51 - 8;
    v64 = v51 - 8;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    if ( !v2 && *((_BYTE *)v1 + 236) == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      v70 = 0;
      v21 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(v21->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v21->SpecialApcDisable;
      v23 = ++v21->AbAllocationRegionCount;
      LODWORD(v24) = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v14 = !_BitScanReverse((unsigned int *)&v25, v24);
        if ( v14 )
          break;
        v26 = 1 << v25;
        v27 = v25;
        v28 = &v21->LockEntries[v27];
        v24 = ~v26 & (unsigned int)v24;
        if ( (v28->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v28->LockState.0 & 1) == 0
          && (*(_QWORD *)&v28->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
          && v28->LockState.SessionId == (_DWORD)SessionId )
        {
          v28->AcquiredByte &= ~1u;
          if ( v28->LockState.0 )
          {
            if ( v28 )
            {
              v28->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v28->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v21->LockEntries[v27].TreeNode, v24);
              v70 = 0;
              v70 = v28->BoostBitmap.AllFields & 0x1FFFF;
              v28->BoostBitmap.AllFields &= 0xFFFE0000;
              v28->ThreadLocalFlags &= ~1u;
              v28->LockState.0 = 0LL;
              v29 = ((char *)v28 - (char *)v21 - 800) / 96;
              if ( v23 == 1 )
                v21->AbEntrySummary |= 1 << v29;
              else
                _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v29);
              goto LABEL_52;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v21->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v21, v4, SessionId, 0LL);
LABEL_52:
      --v21->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(&v21->Header.Lock, v4, (unsigned int *)&v70);
      v31 = v21->SpecialApcDisable + 1;
      v21->SpecialApcDisable = v31;
      if ( !v31 && ($69CD3F157F9F39B6F7113F2231989901 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
        KiCheckForKernelApcDelivery(v30);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v68 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1 + 58);
    if ( !v1[9] )
      break;
    if ( a1 )
    {
      v59 = 263;
      v62[1] = v62;
      v62[0] = v62;
      v58 = v1[15];
      v1[15] = (ULONG_PTR)&v58;
      v60 = 6;
      v61 = 0;
    }
    else
    {
      v3 = v51;
      v1[10] = 0LL;
      v1[12] = (ULONG_PTR)MiFreeUnusedPfnPages;
      v1[13] = (ULONG_PTR)v1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 10), DelayedWorkQueue);
      *((_BYTE *)v1 + 236) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 58);
    __writecr8(2uLL);
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v68);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    v69 = 0;
    v10 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      v11 = (unsigned int)MmGetSessionIdEx(v10->ApcState.Process);
    else
      v11 = 0xFFFFFFFFLL;
    --v10->SpecialApcDisable;
    v12 = ++v10->AbAllocationRegionCount;
    v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v15, v13);
      if ( v14 )
        break;
      v16 = (__int64)&v10->LockEntries[v15];
      v13 &= ~(1 << v15);
      if ( (*(_BYTE *)(v16 + 26) & 1) != 0
        && (*(_DWORD *)(v16 + 32) & 1) == 0
        && (*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v16 + 40) == (_DWORD)v11 )
      {
        *(_BYTE *)(v16 + 26) &= ~1u;
        if ( *(_QWORD *)(v16 + 32) )
        {
          if ( v16 )
          {
            *(_BYTE *)(v16 + 32) |= 2u;
            if ( *(__int64 *)(v16 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v16, v11);
            v69 = 0;
            v69 = *(_DWORD *)(v16 + 88) & 0x1FFFF;
            *(_DWORD *)(v16 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v16 + 25) &= ~1u;
            *(_QWORD *)(v16 + 32) = 0LL;
            v17 = (v16 - (__int64)v10 - 800) / 96;
            if ( v12 == 1 )
              v10->AbEntrySummary |= 1 << v17;
            else
              _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v17);
            goto LABEL_27;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v10->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v10, v4, (unsigned int)v11, 0LL);
LABEL_27:
    --v10->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(&v10->Header.Lock, v4, (unsigned int *)&v69);
    v19 = v10->SpecialApcDisable + 1;
    v10->SpecialApcDisable = v19;
    if ( !v19 && ($69CD3F157F9F39B6F7113F2231989901 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
      KiCheckForKernelApcDelivery(v18);
    result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v2 = a1;
    if ( !a1 )
      return result;
    KeWaitForGate((__int64)&v59, 0x12u);
    v1 = v57;
    v5 = 0x7FFFFFFFF8LL;
    v6 = 0xFFFFF68000000000uLL;
  }
  if ( !a1 )
    *((_BYTE *)v1 + 236) = 1;
  if ( v3 <= v7 )
  {
    while ( 1 )
    {
      LOBYTE(v9) = 17;
      NextPageTable = MiGetNextPageTable(v3, v7, 0LL, v9, 7, &v53);
      v33 = NextPageTable;
      if ( !NextPageTable )
        goto LABEL_100;
      if ( v53 )
      {
        i = 0x200000LL;
        if ( v53 > 1 )
        {
          v35 = v53 - 1;
          do
          {
            i <<= 9;
            --v35;
          }
          while ( v35 );
        }
        v36 = (__int64)(v7 - NextPageTable) >> 3;
        v37 = NextPageTable;
        if ( i >> 12 > v36 + 1 )
          i = (v36 + 1) << 12;
      }
      else
      {
        v3 = NextPageTable;
        while ( 1 )
        {
          v54 = MI_READ_PTE_LOCK_FREE(v3);
          if ( (v54 & 1) != 0 )
          {
            if ( v9 == v38 )
              break;
            v39 = MI_READ_PTE_LOCK_FREE(&v54);
            if ( ((v39 >> 12) & 0xFFFFFFFFFLL) != v9 )
              break;
          }
          v3 += 8LL;
          if ( v3 > v7 )
            goto LABEL_100;
          if ( (v3 & 0xFFF) == 0 )
            goto LABEL_99;
        }
        v37 = v3;
        if ( !v3 )
          goto LABEL_99;
        v40 = v3 + 8;
        for ( i = 4096LL; v40 <= v7; i += 4096LL )
        {
          if ( (v40 & 0xFFF) == 0 )
            break;
          v41 = MI_READ_PTE_LOCK_FREE(v40);
          v40 += 8LL;
          v54 = v41;
          if ( (v41 & 1) == 0 )
            break;
          if ( v9 != v42 )
          {
            v43 = MI_GET_PAGE_FRAME_FROM_PTE(&v54);
            if ( v43 == v9 )
              break;
          }
        }
      }
      v44 = (__int64)(v37 << 25) >> 16;
      v3 = v33 + 8 * (i >> 12);
      do
      {
        if ( *(_QWORD *)v44 )
          goto LABEL_96;
        v45 = RtlCompareMemoryUlong((PVOID)v44, i, 0);
        v52 = v45;
        if ( v45 < 0x1000 )
        {
          if ( v45 )
            goto LABEL_97;
LABEL_96:
          v45 = 4096LL;
          goto LABEL_97;
        }
        v67 = v44;
        v46 = (v44 + 0x58000000000LL) / 48;
        v47 = (void *)(48 * v46 - 0x58000000000LL);
        if ( v47 != (void *)v44
          && (!MiIsAddressValid(48 * v46 - 0x58000000000LL) || RtlCompareMemoryUlong(v47, 0x30uLL, 0) != 48) )
        {
          v67 = v44 + 4096;
        }
        v48 = (char *)(v44 + (v52 & 0xFFFFFFFFFFFFF000uLL));
        v49 = (char *)(48 * ((__int64)(v48 + 0x58000000000LL) / 48) - 0x58000000000LL);
        Source = v49;
        if ( v49 != v48 && (!MiIsAddressValid((__int64)(v49 + 48)) || RtlCompareMemoryUlong(Source, 0x30uLL, 0) != 48) )
          v48 -= 4096;
        MiPfnRangeIsZero(v67, v48);
        v45 = v52;
LABEL_97:
        v50 = (v45 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v44 += v50;
        i -= v50;
      }
      while ( i >= 0x1000 );
      v7 = v64;
LABEL_99:
      if ( v3 > v7 )
      {
LABEL_100:
        v4 = (ULONG_PTR)v65;
        v1 = v57;
        break;
      }
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 58);
  __writecr8(2uLL);
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v68);
  *((_BYTE *)v1 + 236) = 0;
  v1[14] = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease(v4);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
