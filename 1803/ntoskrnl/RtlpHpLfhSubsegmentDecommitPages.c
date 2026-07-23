/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x14029BC78
 * Callers:
 *     RtlpHpLfhCacheAddSubsegment @ 0x14029A288 (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14029C288 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpHpAcquireLockShared @ 0x1402975A4 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14029BBD4 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x14029C0F4 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(volatile LONG *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  unsigned int v5; // esi
  int v6; // r12d
  unsigned int v10; // edi
  __int64 v11; // r9
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned int EmptyUnits; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  KIRQL v20; // r13
  char v21; // cl
  unsigned int v22; // ebx
  unsigned int v23; // r13d
  ULONG_PTR v24; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v27; // bp
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  _KLOCK_ENTRY *v31; // rdi
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // rdx
  KIRQL v35; // [rsp+30h] [rbp-58h]
  int v36; // [rsp+34h] [rbp-54h] BYREF
  _DWORD v37[20]; // [rsp+38h] [rbp-50h] BYREF
  char v38; // [rsp+A0h] [rbp+18h]

  v35 = -1;
  v5 = (unsigned int)a3 >> 31;
  v6 = 0;
  v38 = -1;
  if ( !a3 )
    return;
  v10 = 1;
  if ( a3 >= 0 )
    v10 = a3;
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && a3 >= 0 )
  {
    v11 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 1) == 0 )
    {
      v12 = *(_QWORD **)(v11 + 72);
      v13 = v12[1] >> *(_BYTE *)(v11 + 11);
      if ( v13 <= 8 )
        v13 = 8LL;
      v14 = v12[1] >> *(_BYTE *)(v11 + 12);
      if ( v14 <= 8 )
        v14 = 8LL;
      v15 = v12[3] + v12[2];
      if ( v15 <= v13 && v15 <= v14 )
        return;
    }
  }
  if ( v10 >= *(unsigned __int8 *)(a2 + 45) )
    return;
  while ( 1 )
  {
    EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v10, v37);
    v10 = EmptyUnits;
    if ( EmptyUnits == -1 )
      break;
    if ( v37[0] < a4 )
    {
      if ( !v5 )
        break;
      v10 = v37[0] + EmptyUnits;
LABEL_18:
      v20 = v38;
      goto LABEL_19;
    }
    if ( !v6 )
    {
      if ( (a5 & 1) == 0 )
        v35 = RtlpHpAcquireLockShared(a1 + 24, *((unsigned __int8 *)a1 + 64));
      v6 = 2;
      if ( a3 != -2 )
      {
        v20 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 24), *((unsigned __int8 *)a1 + 64));
        v38 = v20;
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    v21 = *(_BYTE *)(a2 + 44);
    v22 = EmptyUnits << v21;
    v23 = v37[0] << v21;
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a1 + 4)))(
      *(_QWORD *)a1,
      a2 + (EmptyUnits << v21),
      (unsigned int)(v37[0] << v21));
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*((_QWORD *)a1 + 9) + 24LL),
      -(__int64)((unsigned __int64)v23 >> 12));
    RtlpHpLfhSubsegmentDecBlockCounts(a2, v22, v23, 1, 0LL);
    v20 = v38;
    if ( !v5 )
      goto LABEL_29;
    v10 += v37[0];
LABEL_19:
    if ( v10 >= *(unsigned __int8 *)(a2 + 45) )
      goto LABEL_29;
  }
  v20 = v38;
LABEL_29:
  if ( v6 )
  {
    if ( a3 != -2 )
    {
      v24 = a2 + 24;
      if ( *((_BYTE *)a1 + 64) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 24));
        __writecr8(v20);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 24), v17, v18, v19);
        v36 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a2 + 24) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v27 = ++CurrentThread->AbAllocationRegionCount;
        LODWORD(v28) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v32 = !_BitScanReverse((unsigned int *)&v33, v28);
          v37[1] = v33;
          if ( v32 )
            goto LABEL_44;
          v29 = 1 << v33;
          v30 = v33;
          v31 = &CurrentThread->LockEntries[v30];
          v28 = ~v29 & (unsigned int)v28;
          if ( (v31->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v31->LockState.0 & 1) == 0
            && (*(_QWORD *)&v31->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v24 & 0x7FFFFFFFFFFFFFFCLL)
            && v31->LockState.SessionId == SessionId )
          {
            v31->AcquiredByte &= ~1u;
            if ( v31->LockState.0 )
              break;
          }
        }
        if ( !v31 )
        {
LABEL_44:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v24, SessionId, 0LL);
          goto LABEL_51;
        }
        v31->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v31->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v30].TreeNode, v28);
        v36 = 0;
        v36 = v31->BoostBitmap.AllFields & 0x1FFFF;
        v31->BoostBitmap.AllFields &= 0xFFFE0000;
        v31->ThreadLocalFlags &= ~1u;
        v31->LockState.0 = 0LL;
        v34 = ((char *)v31 - (char *)CurrentThread - 800) / 96;
        if ( v27 == 1 )
          CurrentThread->AbEntrySummary |= 1 << v34;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v34);
LABEL_51:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v24, (__int64)&v36);
        v32 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v32
          && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( (a5 & 1) == 0 )
    {
      if ( *((_BYTE *)a1 + 64) )
      {
        ExReleaseSpinLockSharedFromDpcLevel(a1 + 24);
        __writecr8(v35);
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 12, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)a1 + 12);
        KeAbPostRelease((ULONG_PTR)(a1 + 24));
        KeLeaveCriticalRegion();
      }
    }
  }
}
