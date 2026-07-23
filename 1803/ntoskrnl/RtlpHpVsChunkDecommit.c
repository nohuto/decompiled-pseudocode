/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x1400ABBE8
 * Callers:
 *     RtlpHpVsChunkFree @ 0x1400AB964 (RtlpHpVsChunkFree.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVsChunkComputeCost @ 0x1400AC348 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1400AC488 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(unsigned __int64 SpinLock, __int64 a2, __int64 a3, char a4, char *a5)
{
  int v7; // esi
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // ebx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  char v15; // r13
  bool v16; // zf
  unsigned __int8 v17; // si
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rsi
  __int64 v25; // rdx
  unsigned __int8 v26; // [rsp+30h] [rbp-20h]
  int v27; // [rsp+34h] [rbp-1Ch] BYREF
  _DWORD v28[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-Ch]
  unsigned __int64 v30; // [rsp+48h] [rbp-8h] BYREF
  int v31; // [rsp+98h] [rbp+48h]
  int v33; // [rsp+A8h] [rbp+58h]

  v31 = a2;
  v7 = a2;
  v8 = 0;
  RtlpHpVsChunkComputeCost(a3, a2, v28, &v30);
  if ( v28[0] )
  {
    v12 = v30;
    if ( v30 )
    {
      v13 = (0x101010101010101LL
           * ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( (*(_DWORD *)(SpinLock + 112) & 2) != 0 )
        goto LABEL_8;
      v14 = *(_QWORD *)(SpinLock + 48) >> 7;
      if ( v14 <= 8 )
        v14 = 8LL;
      if ( *(_QWORD *)(SpinLock + 56) + (unsigned __int64)(unsigned int)v13 > v14 )
      {
LABEL_8:
        v8 = 1;
        v29 = v29 & 0xFF00FFFF | 0x10000;
        v15 = -1;
        *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE2(v29) ^ BYTE6(RtlpHpHeapGlobals);
        v16 = (a4 & 1) == 0;
        v33 = a4 & 1;
        *(_DWORD *)(a3 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ ((unsigned int)(a3 - v7) >> 12)) | 0x200;
        v17 = *a5;
        if ( v16 )
        {
          if ( *(_DWORD *)(SpinLock + 8) )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
            __writecr8(v17);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)SpinLock, 0x3333333333333333LL, v9, v10);
            v27 = 0;
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(SpinLock) == 1 )
              SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
            else
              SessionId = -1;
            --CurrentThread->SpecialApcDisable;
            v26 = ++CurrentThread->AbAllocationRegionCount;
            v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            while ( 1 )
            {
              v16 = !_BitScanReverse((unsigned int *)&v21, v20);
              v28[2] = v21;
              if ( v16 )
                goto LABEL_20;
              v22 = 1 << v21;
              v23 = v21;
              v24 = &CurrentThread->LockEntries[v23];
              v20 &= ~v22;
              if ( (v24->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v24->LockState.0 & 1) == 0
                && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (SpinLock & 0x7FFFFFFFFFFFFFFCLL)
                && v24->LockState.SessionId == SessionId )
              {
                v24->AcquiredByte &= ~1u;
                if ( v24->LockState.0 )
                  break;
              }
            }
            if ( !v24 )
            {
LABEL_20:
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, SpinLock, SessionId, 0LL);
              goto LABEL_32;
            }
            v24->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v24->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v23].TreeNode);
            v27 = 0;
            v27 = v24->BoostBitmap.AllFields & 0x1FFFF;
            v24->BoostBitmap.AllFields &= 0xFFFE0000;
            v24->ThreadLocalFlags &= ~1u;
            v24->LockState.0 = 0LL;
            v25 = ((char *)v24 - (char *)CurrentThread - 800) / 96;
            if ( v26 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v25;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
LABEL_32:
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts(CurrentThread, SpinLock, &v27);
            v16 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v16
              && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            KeLeaveCriticalRegion();
            v12 = v30;
          }
        }
        RtlpHpVsSubsegmentCommitPages(SpinLock, v31, v12, v13, 0);
        if ( !v33 )
          v15 = RtlpHpAcquireLockExclusive(SpinLock, *(unsigned int *)(SpinLock + 8));
        *(_DWORD *)(a3 + 8) &= ~0x200u;
        *a5 = v15;
      }
    }
  }
  return v8;
}
