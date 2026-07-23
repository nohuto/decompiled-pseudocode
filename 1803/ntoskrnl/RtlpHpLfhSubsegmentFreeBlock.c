/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x14029C288
 * Callers:
 *     RtlpHpSegFree @ 0x140297E14 (RtlpHpSegFree.c)
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140299490 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14029A894 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14029BBD4 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14029BC78 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x14029CDCC (RtlpHpLfhSubsegmentLockOwner.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned __int64 a4)
{
  unsigned int v5; // eax
  unsigned __int64 v7; // r8
  unsigned int SessionId; // r13d
  unsigned int v9; // edi
  char v10; // si
  __int64 v12; // r14
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // eax
  char v17; // cl
  int v18; // edx
  unsigned __int16 v19; // cx
  int v20; // eax
  int v21; // r15d
  int v22; // esi
  unsigned __int16 v23; // dx
  int v24; // r8d
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r14
  __int64 v30; // r15
  struct _KTHREAD *v31; // rbx
  __int64 v32; // rdx
  unsigned __int8 v33; // r13
  unsigned int v34; // r8d
  __int64 v35; // rsi
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v41; // r15
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rcx
  _KLOCK_ENTRY *v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v49; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v50; // [rsp+34h] [rbp-1Ch]
  _DWORD v51[6]; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int8 v52; // [rsp+98h] [rbp+48h] BYREF
  int v53; // [rsp+A0h] [rbp+50h] BYREF
  int v54; // [rsp+A8h] [rbp+58h]

  v54 = a4;
  v52 = -1;
  v5 = qword_1403A5F28 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v50 = v5;
  v7 = (unsigned __int64)RtlpLfhBucketIndexMap;
  SessionId = -1;
  v9 = 1;
  v10 = a4;
  v12 = 0LL;
  if ( !a3 )
    goto LABEL_14;
  v13 = (unsigned __int16)v5;
  v14 = *(_QWORD *)(a1
                  + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v5 + 15) >> 4]
                  + 224);
  v15 = a3 - HIWORD(v5) - a2;
  v16 = *(_DWORD *)(v14 + 72);
  v17 = *(_BYTE *)(v14 + 76);
  if ( v16 )
  {
    v7 = (v15 * (unsigned __int64)v16) >> v17;
    v18 = v15 - v7 * v13;
  }
  else
  {
    v7 = v15 >> v17;
    v18 = v15 & ((1 << v17) - 1);
  }
  if ( !v18 )
  {
    v19 = *(_WORD *)(a2 + 36);
    if ( v19 >= (unsigned __int16)v7 )
      v19 = v7;
    *(_WORD *)(a2 + 36) = v19;
    a4 = (unsigned __int64)(unsigned int)(2 * v7) >> 6;
    _m_prefetchw((const void *)(a2 + 8 * a4 + 48));
    if ( (((unsigned __int64)_InterlockedAnd64(
                               (volatile signed __int64 *)(a2 + 8 * a4 + 48),
                               ~(3LL << ((2 * v7) & 0x3F))) >> ((2 * v7) & 0x3F)) & 1) == 0 )
    {
      RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, a2, (unsigned int)v7);
      return 0;
    }
    if ( *(_BYTE *)(a2 + 45) > 1u )
    {
      v20 = RtlpHpLfhSubsegmentDecBlockCounts(a2, (int)a3 - (int)a2, (unsigned __int16)v50, 0, v51);
      if ( v20 != -1 )
      {
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
          (unsigned __int64)(unsigned int)(v51[0] << *(_BYTE *)(a2 + 44)) >> 12);
        RtlpHpLfhSubsegmentDecommitPages((volatile LONG *)a1, a2, v20, 2u, v10);
      }
    }
LABEL_14:
    v21 = *(unsigned __int16 *)(a2 + 34);
    LOWORD(v22) = *(_WORD *)(a2 + 32);
    do
    {
      if ( !v12 && (!(_WORD)v22 || (unsigned __int16)v22 == v21 - 1) )
      {
        v12 = RtlpHpLfhSubsegmentLockOwner(a2, *(unsigned __int8 *)(a1 + 64), &v52);
        if ( !v12 )
          return v9;
      }
      v23 = v22 + 1;
      v22 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 32), v22 + 1, v22);
    }
    while ( v23 != v22 + 1 );
    if ( (_WORD)v22 )
    {
      if ( (unsigned __int16)v22 != v21 - 1 )
      {
LABEL_52:
        if ( v12 )
        {
          v39 = v12 + 16;
          if ( *(_BYTE *)(a1 + 64) )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v39);
            __writecr8(v52);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v39, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v39, -1LL, v7, a4);
            v49 = 0;
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v39) == 1 )
              SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
            --CurrentThread->SpecialApcDisable;
            v41 = ++CurrentThread->AbAllocationRegionCount;
            LODWORD(v42) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            while ( 1 )
            {
              v36 = !_BitScanReverse((unsigned int *)&v46, v42);
              v51[2] = v46;
              if ( v36 )
                goto LABEL_65;
              v43 = 1 << v46;
              v44 = v46;
              v45 = &CurrentThread->LockEntries[v44];
              v42 = ~v43 & (unsigned int)v42;
              if ( (v45->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v45->LockState.0 & 1) == 0
                && (*(_QWORD *)&v45->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v39 & 0x7FFFFFFFFFFFFFFCLL)
                && v45->LockState.SessionId == SessionId )
              {
                v45->AcquiredByte &= ~1u;
                if ( v45->LockState.0 )
                  break;
              }
            }
            if ( !v45 )
            {
LABEL_65:
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v39, SessionId, 0LL);
              goto LABEL_72;
            }
            v45->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v45->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v44].TreeNode, v42);
            v49 = 0;
            v49 = v45->BoostBitmap.AllFields & 0x1FFFF;
            v45->BoostBitmap.AllFields &= 0xFFFE0000;
            v45->ThreadLocalFlags &= ~1u;
            v45->LockState.0 = 0LL;
            v47 = ((char *)v45 - (char *)CurrentThread - 800) / 96;
            if ( v41 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v47;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v47);
LABEL_72:
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v39, (__int64)&v49);
            v36 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v36
              && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            KeLeaveCriticalRegion();
          }
        }
        return v9;
      }
      v24 = 2;
    }
    else
    {
      v24 = 0;
    }
    v25 = RtlpHpLfhOwnerMoveSubsegment(v12, (__int64 *)a2, v24);
    v29 = v12 + 16;
    v30 = (__int64)v25;
    if ( *(_BYTE *)(a1 + 64) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v29);
      __writecr8(v52);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v29, v26, v27, v28);
      v53 = 0;
      v31 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v29) == 1 )
        v32 = (unsigned int)MmGetSessionIdEx((__int64)v31->ApcState.Process);
      else
        v32 = 0xFFFFFFFFLL;
      --v31->SpecialApcDisable;
      v33 = ++v31->AbAllocationRegionCount;
      v34 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v36 = !_BitScanReverse((unsigned int *)&v37, v34);
        v51[1] = v37;
        if ( v36 )
          goto LABEL_37;
        v35 = (__int64)&v31->LockEntries[v37];
        v34 &= ~(1 << v37);
        if ( (*(_BYTE *)(v35 + 26) & 1) != 0
          && (*(_DWORD *)(v35 + 32) & 1) == 0
          && (*(_QWORD *)(v35 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v29 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v35 + 40) == (_DWORD)v32 )
        {
          *(_BYTE *)(v35 + 26) &= ~1u;
          if ( *(_QWORD *)(v35 + 32) )
            break;
        }
      }
      if ( !v35 )
      {
LABEL_37:
        if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v31, v29, (unsigned int)v32, 0LL);
        goto LABEL_44;
      }
      *(_BYTE *)(v35 + 32) |= 2u;
      if ( *(__int64 *)(v35 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v35, v32);
      v53 = 0;
      v53 = *(_DWORD *)(v35 + 88) & 0x1FFFF;
      *(_DWORD *)(v35 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v35 + 25) &= ~1u;
      *(_QWORD *)(v35 + 32) = 0LL;
      v38 = (v35 - (__int64)v31 - 800) / 96;
      if ( v33 == 1 )
        v31->AbEntrySummary |= 1 << v38;
      else
        _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v38);
LABEL_44:
      --v31->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v31, v29, (__int64)&v53);
      v36 = v31->SpecialApcDisable++ == -1;
      if ( v36 && ($005F0E83B22994B61E86C72E0CE43C71 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegion();
      SessionId = -1;
    }
    v12 = 0LL;
    if ( v30 )
      RtlpHpLfhBucketAddSubsegment(
        a1,
        *(_QWORD *)(a1
                  + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v50 + 15) >> 4]
                  + 224),
        v30,
        v54);
    goto LABEL_52;
  }
  return 0;
}
