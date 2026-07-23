/*
 * XREFs of RtlpHpVsChunkSplit @ 0x1400AB668
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1400ABD80 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVsChunkFree @ 0x1400AB964 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1400AC2DC (RtlpHpVsFreeChunkRemove.c)
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

__int64 __fastcall RtlpHpVsChunkSplit(
        unsigned __int64 SpinLock,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned __int8 *a6)
{
  __int64 v7; // rbx
  __int64 v9; // rdi
  unsigned int SessionId; // r12d
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  unsigned int v14; // edi
  unsigned int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r10
  char *v21; // r9
  unsigned __int64 v22; // r8
  int v23; // edx
  unsigned __int64 v24; // r10
  unsigned __int8 *v26; // rax
  char v27; // r13
  unsigned __int8 v28; // bl
  unsigned __int64 v29; // rcx
  int v30; // eax
  struct _KTHREAD *CurrentThread; // rbx
  int v32; // edx
  unsigned int v33; // edx
  bool v34; // zf
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  _KLOCK_ENTRY *v38; // rdi
  __int64 v39; // rdx
  unsigned int v40; // [rsp+34h] [rbp-1Ch]
  int v41; // [rsp+38h] [rbp-18h]
  unsigned __int64 v42; // [rsp+40h] [rbp-10h]
  __int64 v43; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+50h]
  __int16 v45; // [rsp+A8h] [rbp+58h]

  v7 = RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v9 = a4;
  RtlpHpVsFreeChunkRemove();
  SessionId = -1;
  v12 = (((unsigned int)a3 ^ (unsigned int)v7) >> 16) - v9;
  if ( v12 && (*(_DWORD *)(SpinLock + 112) & 1) != 0 )
  {
    v29 = (((a3 + 16 * v9 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16 * v9)) >> 4;
    v30 = 16 * v29;
    if ( (unsigned int)(16 * v29) >= 0x20 )
    {
      if ( (v30 & 0xFFFFFFC0) == 0 && v30 != 32 )
      {
        LODWORD(v9) = v9 + 1;
        --v12;
      }
    }
    else
    {
      LODWORD(v9) = v29 + v9;
      v12 -= v29;
    }
  }
  v13 = v12 + v9;
  if ( 16 * v12 >= 0x20 )
    v13 = v9;
  v14 = 0;
  v40 = v13;
  if ( 16 * v12 >= 0x20 )
    v14 = v12;
  HIDWORD(v43) = HIDWORD(v43) & 0xFF00FFFF | 0x10000;
  v15 = v13;
  v16 = (unsigned int)(a3 - a2) >> 12;
  v44 = v14;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(v43) ^ BYTE6(RtlpHpHeapGlobals);
  v17 = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ v16);
  v18 = 16 * v13 + 32;
  *(_DWORD *)(a3 + 8) = v17;
  if ( !v14 )
    v18 = 16 * v13;
  v19 = (-1LL << v16) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                 - (unsigned __int8)((unsigned __int64)(unsigned int)(a3 + v18 - a2 - 1) >> 12)));
  v20 = (v19 ^ *(_QWORD *)(a2 + 16)) & v19;
  v42 = v20;
  if ( v20 )
  {
    v26 = a6;
    LODWORD(v17) = v17 | 0x200;
    *(_DWORD *)(a3 + 8) = v17;
    v27 = -1;
    v28 = *v26;
    v41 = a5 & 1;
    if ( (a5 & 1) == 0 )
    {
      if ( *(_DWORD *)(SpinLock + 8) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
        __writecr8(v28);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)SpinLock, -1LL, v16, v17);
        LODWORD(v43) = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(SpinLock) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        --CurrentThread->SpecialApcDisable;
        ++CurrentThread->AbAllocationRegionCount;
        v32 = (char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary;
        LOBYTE(v45) = CurrentThread->AbAllocationRegionCount;
        v33 = v32 ^ 0x3F;
        while ( 1 )
        {
          v34 = !_BitScanReverse((unsigned int *)&v35, v33);
          if ( v34 )
            break;
          v36 = ~(1 << v35);
          v37 = v35;
          v33 &= v36;
          v38 = &CurrentThread->LockEntries[v37];
          if ( (v38->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v38->LockState.0 & 1) == 0
            && (*(_QWORD *)&v38->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (SpinLock & 0x7FFFFFFFFFFFFFFCLL)
            && v38->LockState.SessionId == SessionId )
          {
            v38->AcquiredByte &= ~1u;
            if ( v38->LockState.0 )
            {
              if ( v38 )
              {
                v38->CrossThreadReleasableAndBusyByte |= 2u;
                if ( (__int64)v38->LockState.LockState < 0 )
                  KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v37].TreeNode);
                LODWORD(v43) = 0;
                LODWORD(v43) = v38->BoostBitmap.AllFields & 0x1FFFF;
                v38->BoostBitmap.AllFields &= 0xFFFE0000;
                v38->ThreadLocalFlags &= ~1u;
                v38->LockState.0 = 0LL;
                v39 = ((char *)v38 - (char *)CurrentThread - 800) / 96;
                if ( (_BYTE)v45 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v39;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v39);
                goto LABEL_46;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, SpinLock, SessionId, 0LL);
LABEL_46:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(CurrentThread, SpinLock, &v43);
        v34 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v34
          && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KeLeaveCriticalRegion();
      }
      v20 = v42;
    }
    v14 = v44;
    v15 = v40;
    if ( (int)RtlpHpVsSubsegmentCommitPages(
                SpinLock,
                a2,
                v20,
                (unsigned int)((0x101010101010101LL
                              * ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                1) < 0 )
    {
      v14 += v40;
      v15 = 0;
    }
    if ( !v41 )
      v27 = RtlpHpAcquireLockExclusive(SpinLock, *(unsigned int *)(SpinLock + 8));
    v21 = (char *)a6;
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    *v21 = v27;
  }
  else
  {
    v21 = (char *)a6;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ v15;
  if ( v14 )
  {
    v43 = 0LL;
    v22 = a3 + 16LL * v15;
    if ( v15 )
      v23 = (unsigned __int16)v15;
    else
      v23 = (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v22 ^ v22) >> 32);
    LODWORD(v43) = (v14 << 16) | (unsigned __int16)v43;
    v24 = v22 + 16LL * v14;
    HIDWORD(v43) = v23 & 0xFF00FFFF | 0x10000;
    *(_QWORD *)v22 = v43 ^ RtlpHpHeapGlobals ^ v22;
    *(_DWORD *)(v22 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v22 ^ ((unsigned int)(v22 - a2) >> 12));
    if ( v24 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      HIDWORD(v43) ^= (unsigned __int16)(v14 ^ WORD2(v43));
      *(_WORD *)(v24 + 4) = WORD2(v24) ^ WORD2(RtlpHpHeapGlobals) ^ WORD2(v43);
    }
    RtlpHpVsChunkFree((PEX_SPIN_LOCK)SpinLock, (__int64)v21);
  }
  return v15;
}
