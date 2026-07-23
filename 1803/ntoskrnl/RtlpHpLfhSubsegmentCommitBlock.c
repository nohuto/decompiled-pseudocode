/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x14029B504
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x14029B370 (RtlpHpLfhSubsegmentAllocateBlock.c)
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
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14029BBD4 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14029C8C8 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  int v6; // eax
  int v7; // ebx
  int v8; // r14d
  unsigned __int64 v9; // rdx
  _WORD *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  unsigned int SessionId; // r13d
  int v14; // r15d
  char v15; // cl
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v19; // r14
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rdi
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v28; // [rsp+40h] [rbp-18h] BYREF
  int v29; // [rsp+44h] [rbp-14h]
  int v30; // [rsp+48h] [rbp-10h]
  unsigned __int8 v31; // [rsp+A0h] [rbp+48h] BYREF
  int v32; // [rsp+A8h] [rbp+50h] BYREF
  int v33; // [rsp+B0h] [rbp+58h]
  unsigned int v34; // [rsp+B8h] [rbp+60h] BYREF

  v33 = a3;
  v3 = *(unsigned __int8 *)(a1 + 64);
  v29 = 0;
  v6 = *(unsigned __int16 *)(a2 + 40);
  v7 = 0;
  v28 = 0;
  v8 = (unsigned __int16)qword_1403A5F28 ^ v6 ^ (unsigned __int16)((unsigned int)a2 >> 12);
  v12 = (unsigned int)RtlpHpLfhSubsegmentIncBlockCounts(
                        a2,
                        a3,
                        v8,
                        (unsigned int)&v34,
                        (__int64)&v28,
                        v3,
                        (__int64)&v31);
  SessionId = -1;
  if ( (_DWORD)v12 == -1 )
  {
LABEL_2:
    v14 = 0;
    goto LABEL_11;
  }
  v15 = *(_BYTE *)(a2 + 44);
  v7 = 1;
  v29 = 1;
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
          *(_QWORD *)a1,
          a2 + (unsigned int)((_DWORD)v12 << v15),
          v34 << v15);
  if ( v14 >= 0 )
  {
    v10 = (_WORD *)(a2 + *(unsigned __int16 *)(a2 + 46) + 2 * v12);
    v16 = v34;
    v9 = 0LL;
    if ( v10 > &v10[v34] )
      v16 = 0LL;
    if ( v16 )
    {
      do
      {
        if ( !*v10 )
          *v10 = 1;
        ++v10;
        ++v9;
      }
      while ( v9 < v16 );
    }
    v7 = 0;
    goto LABEL_2;
  }
LABEL_11:
  if ( v28 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
      -(__int64)((unsigned __int64)(unsigned int)(v28 << *(_BYTE *)(a2 + 44)) >> 12));
  if ( v7 )
    RtlpHpLfhSubsegmentDecBlockCounts(a2, v33, v8, 2, 0LL);
  if ( v29 )
  {
    v17 = a2 + 24;
    if ( *(_BYTE *)(a1 + 64) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v17);
      __writecr8(v31);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v17, v9, (__int64)v10, v11);
      v32 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      --CurrentThread->SpecialApcDisable;
      v19 = ++CurrentThread->AbAllocationRegionCount;
      LODWORD(v20) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v24 = !_BitScanReverse((unsigned int *)&v25, v20);
        v30 = v25;
        if ( v24 )
          goto LABEL_28;
        v21 = 1 << v25;
        v22 = v25;
        v23 = &CurrentThread->LockEntries[v22];
        v20 = ~v21 & (unsigned int)v20;
        if ( (v23->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v23->LockState.0 & 1) == 0
          && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
          && v23->LockState.SessionId == SessionId )
        {
          v23->AcquiredByte &= ~1u;
          if ( v23->LockState.0 )
            break;
        }
      }
      if ( !v23 )
      {
LABEL_28:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v17, SessionId, 0LL);
        goto LABEL_35;
      }
      v23->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v23->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v22].TreeNode, v20);
      v32 = 0;
      v32 = v23->BoostBitmap.AllFields & 0x1FFFF;
      v23->BoostBitmap.AllFields &= 0xFFFE0000;
      v23->ThreadLocalFlags &= ~1u;
      v23->LockState.0 = 0LL;
      v26 = ((char *)v23 - (char *)CurrentThread - 800) / 96;
      if ( v19 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v26;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
LABEL_35:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v17, (__int64)&v32);
      v24 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v24
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KeLeaveCriticalRegion();
    }
  }
  return (unsigned int)v14;
}
