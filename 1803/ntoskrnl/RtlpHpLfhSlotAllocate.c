/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x14029A9A8
 * Callers:
 *     RtlpHpLfhBucketAllocate @ 0x14029972C (RtlpHpLfhBucketAllocate.c)
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
 *     RtlpHpAcquireLockShared @ 0x1402975A4 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140299490 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140299878 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140299C08 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14029A894 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x14029B370 (RtlpHpLfhSubsegmentAllocateBlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x14029B8A4 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14029C288 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentReserveBlock @ 0x14029D07C (RtlpHpLfhSubsegmentReserveBlock.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x14029D110 (RtlpHpLfhSubsegmentSetOwner.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  KIRQL v6; // r15
  __int64 v8; // rsi
  int v9; // r14d
  __int64 Subsegment; // r12
  unsigned int v11; // eax
  int v12; // ecx
  __int64 v13; // r8
  signed __int64 v14; // rbx
  signed __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rdi
  int v18; // eax
  volatile signed __int64 *v19; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v22; // r15
  unsigned int v23; // r8d
  __int64 v24; // r14
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // rdx
  volatile signed __int64 *v28; // rdi
  struct _KTHREAD *v29; // rbx
  __int64 v30; // rdx
  unsigned __int8 v31; // r14
  unsigned int v32; // r8d
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 Block; // r15
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // eax
  unsigned __int64 v41; // rsi
  struct _KTHREAD *v42; // rbx
  ULONG_PTR v43; // r9
  unsigned __int8 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rdx
  KIRQL v50; // [rsp+30h] [rbp-30h]
  unsigned __int16 v51; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int i; // [rsp+38h] [rbp-28h]
  int v53; // [rsp+3Ch] [rbp-24h] BYREF
  int v54; // [rsp+40h] [rbp-20h] BYREF
  int v55; // [rsp+44h] [rbp-1Ch] BYREF
  _DWORD v56[6]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v59; // [rsp+B8h] [rbp+58h]

  v59 = a4;
  v5 = a2;
  v6 = -1;
  v56[0] = 0;
  v50 = -1;
  v8 = a1;
  v9 = 0;
  Subsegment = 0LL;
  v11 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  for ( i = v11; ; v11 = i )
  {
    HIWORD(v12) = -1;
    v13 = 4095LL;
    if ( v11 )
      break;
    if ( !v9 )
    {
      v9 = 1;
      v6 = RtlpHpAcquireLockShared((volatile LONG *)(a3 + 16), *(unsigned __int8 *)(v8 + 64));
      v50 = v6;
      v13 = 4095LL;
LABEL_14:
      v11 = i;
      HIWORD(v12) = -1;
    }
    if ( *(_QWORD *)(a3 + 8) )
    {
      LOWORD(v12) = v11 != 0 ? 4096 : 1;
      v17 = *(_QWORD *)(a3 + 24);
      v51 = v12;
      while ( 1 )
      {
        if ( v17 == a3 + 24 )
        {
          v17 = 0LL;
          goto LABEL_21;
        }
        if ( (unsigned int)RtlpHpLfhSubsegmentReserveBlock(v12, v17, v9, (unsigned int)&v51, (__int64)v56) )
          break;
        v17 = *(_QWORD *)v17;
      }
      if ( !*(_WORD *)(v17 + 32) )
        RtlpHpLfhOwnerMoveSubsegment(a3, (__int64 *)v17, 1);
LABEL_21:
      if ( v17 && v51 > 1u )
        *(_QWORD *)(a3 + 56) = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v51 - 1)) & 0xFFF;
      v18 = *(unsigned __int8 *)(v8 + 64);
      v19 = (volatile signed __int64 *)(a3 + 16);
      if ( v9 == 2 )
      {
        if ( !v18 )
        {
          if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 16), 0LL, v13, a4);
          v53 = 0;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(a3 + 16) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --CurrentThread->SpecialApcDisable;
          v22 = ++CurrentThread->AbAllocationRegionCount;
          v23 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v25 = !_BitScanReverse((unsigned int *)&v26, v23);
            v56[1] = v26;
            if ( v25 )
              goto LABEL_40;
            v24 = (__int64)&CurrentThread->LockEntries[v26];
            v23 &= ~(1 << v26);
            if ( (*(_BYTE *)(v24 + 26) & 1) != 0
              && (*(_DWORD *)(v24 + 32) & 1) == 0
              && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v19 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v24 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v24 + 26) &= ~1u;
              if ( *(_QWORD *)(v24 + 32) )
                break;
            }
          }
          if ( !v24 )
          {
LABEL_40:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a3 + 16, (unsigned int)SessionId, 0LL);
            goto LABEL_41;
          }
          *(_BYTE *)(v24 + 32) |= 2u;
          if ( *(__int64 *)(v24 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24, SessionId);
          v53 = 0;
          v53 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
          *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v24 + 25) &= ~1u;
          *(_QWORD *)(v24 + 32) = 0LL;
          v27 = (v24 - (__int64)CurrentThread - 800) / 96;
          if ( v22 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v27;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v27);
LABEL_41:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a3 + 16, (__int64)&v53);
          v25 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v25
            && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
LABEL_55:
          KeLeaveCriticalRegion();
LABEL_58:
          if ( v17 )
          {
            v8 = a1;
            Block = RtlpHpLfhSubsegmentAllocateBlock(a1, a3, v17, v59);
            if ( !Block )
              RtlpHpLfhSubsegmentFreeBlock(a1, v17, 0LL, a5);
            goto LABEL_134;
          }
          v9 = 2;
          v8 = a1;
          v6 = RtlpHpAcquireLockExclusive((volatile LONG *)(a3 + 16), *(unsigned __int8 *)(a1 + 64));
          v5 = a2;
          v50 = v6;
          continue;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a3 + 16));
      }
      else
      {
        if ( !v18 )
        {
          if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a3 + 16));
          KeAbPostRelease(a3 + 16);
          goto LABEL_55;
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a3 + 16));
      }
      __writecr8(v6);
      goto LABEL_58;
    }
    v28 = (volatile signed __int64 *)(a3 + 16);
    if ( v9 == 2 )
    {
      if ( !*(_BYTE *)(v8 + 64) )
      {
        if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 16), 0LL, 4095LL, a4);
        v54 = 0;
        v29 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a3 + 16) == 1 )
          v30 = (unsigned int)MmGetSessionIdEx((__int64)v29->ApcState.Process);
        else
          v30 = 0xFFFFFFFFLL;
        --v29->SpecialApcDisable;
        v31 = ++v29->AbAllocationRegionCount;
        v32 = ((char)v29->AbEntrySummary | (char)v29->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v25 = !_BitScanReverse((unsigned int *)&v34, v32);
          v56[2] = v34;
          if ( v25 )
            goto LABEL_75;
          v33 = (__int64)&v29->LockEntries[v34];
          v32 &= ~(1 << v34);
          if ( (*(_BYTE *)(v33 + 26) & 1) != 0
            && (*(_DWORD *)(v33 + 32) & 1) == 0
            && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v28 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v33 + 40) == (_DWORD)v30 )
          {
            *(_BYTE *)(v33 + 26) &= ~1u;
            if ( *(_QWORD *)(v33 + 32) )
              break;
          }
        }
        if ( !v33 )
        {
LABEL_75:
          if ( (*((_DWORD *)&v29->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v29, a3 + 16, (unsigned int)v30, 0LL);
          goto LABEL_76;
        }
        *(_BYTE *)(v33 + 32) |= 2u;
        if ( *(__int64 *)(v33 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33, v30);
        v54 = 0;
        v54 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
        *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v33 + 25) &= ~1u;
        *(_QWORD *)(v33 + 32) = 0LL;
        v35 = (v33 - (__int64)v29 - 800) / 96;
        if ( v31 == 1 )
          v29->AbEntrySummary |= 1 << v35;
        else
          _InterlockedOr8((volatile signed __int8 *)&v29->AbOrphanedEntrySummary, 1 << v35);
LABEL_76:
        --v29->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v29, a3 + 16, (__int64)&v54);
        v25 = v29->SpecialApcDisable++ == -1;
        if ( v25 && ($005F0E83B22994B61E86C72E0CE43C71 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        v8 = a1;
        v5 = a2;
        goto LABEL_93;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a3 + 16));
    }
    else
    {
      if ( !*(_BYTE *)(v8 + 64) )
      {
        if ( _InterlockedCompareExchange64(v28, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(a3 + 16));
        KeAbPostRelease(a3 + 16);
        KeLeaveCriticalRegion();
        goto LABEL_93;
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a3 + 16));
    }
    __writecr8(v6);
LABEL_93:
    Block = 0LL;
    v9 = 0;
    Subsegment = RtlpHpLfhBucketGetSubsegment(v5, *(unsigned __int8 *)(v8 + 64));
    if ( !Subsegment )
    {
      Subsegment = RtlpHpLfhSubsegmentCreate(v8);
      if ( !Subsegment )
        goto LABEL_105;
    }
    v9 = 2;
    v50 = RtlpHpAcquireLockExclusive((volatile LONG *)(a3 + 16), *(unsigned __int8 *)(v8 + 64));
    v6 = v50;
    RtlpHpLfhSubsegmentSetOwner(Subsegment, a3);
    if ( *(_QWORD *)(a3 + 8) && *(_WORD *)(Subsegment + 32) == *(_WORD *)(Subsegment + 34) )
      *(_QWORD *)(Subsegment + 16) = 0LL;
    else
      Subsegment = (__int64)RtlpHpLfhOwnerMoveSubsegment(a3, (__int64 *)Subsegment, 0);
  }
  while ( 1 )
  {
    _m_prefetchw((const void *)(a3 + 56));
    v14 = *(_QWORD *)(a3 + 56);
    if ( (v14 & 0xFFF) != 0 )
    {
      while ( 1 )
      {
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 56), v14 - 1, v14);
        if ( v14 == v15 )
          break;
        v56[0] = 1;
        v14 = v15;
        if ( (v15 & 0xFFF) == 0 )
          goto LABEL_6;
      }
      v16 = v14 & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
LABEL_6:
      v16 = 0LL;
    }
    if ( v16 )
      break;
    if ( v9 == 2 )
    {
      v5 = a2;
      goto LABEL_14;
    }
    v9 = 2;
    v6 = RtlpHpAcquireLockExclusive((volatile LONG *)(a3 + 16), *(unsigned __int8 *)(v8 + 64));
    v50 = v6;
    v13 = 4095LL;
  }
  Block = RtlpHpLfhSubsegmentAllocateBlock(v8, a3, v16, v59);
  if ( !Block )
    RtlpHpLfhSubsegmentFreeBlock(v8, v16, 0LL, a5);
LABEL_105:
  if ( v9 )
  {
    v40 = *(unsigned __int8 *)(v8 + 64);
    v41 = a3 + 16;
    if ( v40 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v41);
      __writecr8(v50);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v41, v37, v38, v39);
      v55 = 0;
      v42 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v41) == 1 )
        v43 = (unsigned int)MmGetSessionIdEx((__int64)v42->ApcState.Process);
      else
        v43 = 0xFFFFFFFFLL;
      --v42->SpecialApcDisable;
      v44 = ++v42->AbAllocationRegionCount;
      LODWORD(v45) = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v25 = !_BitScanReverse((unsigned int *)&v46, v45);
        v56[3] = v46;
        if ( v25 )
          break;
        v47 = (__int64)&v42->LockEntries[v46];
        v45 = ~(1 << v46) & (unsigned int)v45;
        if ( (*(_BYTE *)(v47 + 26) & 1) != 0
          && (*(_DWORD *)(v47 + 32) & 1) == 0
          && (*(_QWORD *)(v47 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v41 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v47 + 40) == (_DWORD)v43 )
        {
          *(_BYTE *)(v47 + 26) &= ~1u;
          if ( *(_QWORD *)(v47 + 32) )
          {
            if ( v47 )
            {
              *(_BYTE *)(v47 + 32) |= 2u;
              if ( *(__int64 *)(v47 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v47, v45);
              v55 = 0;
              v55 = *(_DWORD *)(v47 + 88) & 0x1FFFF;
              *(_DWORD *)(v47 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v47 + 25) &= ~1u;
              *(_QWORD *)(v47 + 32) = 0LL;
              v48 = (v47 - (__int64)v42 - 800) / 96;
              if ( v44 == 1 )
                v42->AbEntrySummary |= 1 << v48;
              else
                _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, 1 << v48);
              goto LABEL_125;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v42->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v42, v41, v43, 0LL);
LABEL_125:
      --v42->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v42, v41, (__int64)&v55);
      v25 = v42->SpecialApcDisable++ == -1;
      if ( v25 && ($005F0E83B22994B61E86C72E0CE43C71 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegion();
    }
    v8 = a1;
  }
LABEL_134:
  if ( v56[0] )
    RtlpHpLfhBucketUpdateAffinityMapping(v8, a2);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(v8, a2, Subsegment, a5);
  return Block;
}
