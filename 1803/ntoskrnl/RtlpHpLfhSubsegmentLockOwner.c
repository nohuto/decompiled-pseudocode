/*
 * XREFs of RtlpHpLfhSubsegmentLockOwner @ 0x14029CDCC
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14029C288 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall RtlpHpLfhSubsegmentLockOwner(__int64 a1, unsigned int a2, KIRQL *a3)
{
  signed __int64 v3; // rbx
  unsigned __int64 v7; // rcx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rbp
  signed __int64 v10; // rdi
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  KIRQL v15; // si
  struct _KTHREAD *CurrentThread; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v18; // r12
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rsi
  __int64 v25; // rdx
  int v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
      {
        v7 = 3LL;
        v8 = 0LL;
        goto LABEL_33;
      }
      if ( (v3 & 1) != 0 )
        break;
      v9 = v3 + 16;
      v10 = v3;
      v11 = RtlpHpAcquireLockExclusive((volatile LONG *)(v3 + 16), a2);
      v3 = *(_QWORD *)(a1 + 16);
      v15 = v11;
      *a3 = v11;
      if ( v10 == v3 )
        return v10;
      if ( a2 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9);
        __writecr8(v15);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v9, v12, v13, v14);
        v27 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v9) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v18 = ++CurrentThread->AbAllocationRegionCount;
        v19 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v21, v19);
          v28 = v21;
          if ( v20 )
            break;
          v22 = 1 << v21;
          v23 = v21;
          v24 = &CurrentThread->LockEntries[v23];
          v19 &= ~v22;
          if ( (v24->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v24->LockState.0 & 1) == 0
            && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
            && v24->LockState.SessionId == (_DWORD)SessionId )
          {
            v24->AcquiredByte &= ~1u;
            if ( v24->LockState.0 )
            {
              if ( v24 )
              {
                v24->CrossThreadReleasableAndBusyByte |= 2u;
                if ( (__int64)v24->LockState.LockState < 0 )
                  KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v23].TreeNode, SessionId);
                v27 = 0;
                v27 = v24->BoostBitmap.AllFields & 0x1FFFF;
                v24->BoostBitmap.AllFields &= 0xFFFE0000;
                v24->ThreadLocalFlags &= ~1u;
                v24->LockState.0 = 0LL;
                v25 = ((char *)v24 - (char *)CurrentThread - 800) / 96;
                if ( v18 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v25;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
                goto LABEL_27;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v9, (unsigned int)SessionId, 0LL);
LABEL_27:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v9, (__int64)&v27);
        v20 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v20
          && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KeLeaveCriticalRegion();
      }
    }
    v7 = v3 & 1 | (v3 + 2) & 0xFFFFFFFFFFFFFFFEuLL;
    v8 = v3;
LABEL_33:
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v7, v8);
  }
  while ( v8 != v3 );
  return 0LL;
}
