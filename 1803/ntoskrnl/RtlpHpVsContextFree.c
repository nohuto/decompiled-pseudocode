/*
 * XREFs of RtlpHpVsContextFree @ 0x1400AB428
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1400AB3B8 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x140297E14 (RtlpHpSegFree.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVsChunkFree @ 0x1400AB964 (RtlpHpVsChunkFree.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpVsSubsegmentFree @ 0x1400AC914 (RtlpHpVsSubsegmentFree.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFree(
        unsigned __int64 SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  __int64 v5; // r14
  int v6; // r13d
  unsigned __int64 v7; // rsi
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rsi
  int v13; // r12d
  unsigned __int8 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD *v25; // rsi
  unsigned int v26; // edx
  unsigned __int8 v27; // r15
  unsigned int v28; // r8d
  bool v29; // zf
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  _KLOCK_ENTRY *v33; // r14
  __int64 v34; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // edx
  unsigned __int8 v37; // r12
  unsigned int v38; // r8d
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  _KLOCK_ENTRY *v42; // r14
  __int64 v43; // rdx
  unsigned __int8 v44; // [rsp+90h] [rbp+48h] BYREF
  int v45; // [rsp+98h] [rbp+50h] BYREF
  int v46; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v47; // [rsp+A8h] [rbp+60h]

  v47 = a4;
  v5 = a3 - 16;
  v6 = a3;
  v7 = a2;
  if ( (*(_DWORD *)(SpinLock + 112) & 1) != 0 && (a3 & 0xFFF) == 0 )
    v5 = a3 - 32;
  v9 = 0;
  if ( !a2 )
  {
    v10 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v5) ^ HIDWORD(*(_QWORD *)v5);
    if ( (v10 & 0xFF0000) != 0 )
    {
      v11 = (unsigned __int8)(RtlpHpHeapGlobals ^ v5 ^ *(_BYTE *)(v5 + 8));
    }
    else
    {
      if ( (_WORD)v10 )
      {
        v12 = v5 - 16LL * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v5) ^ HIDWORD(*(_QWORD *)v5));
        v20 = HIDWORD(*(_QWORD *)v12);
        v21 = HIDWORD(RtlpHpHeapGlobals) ^ v20 ^ HIDWORD(v12);
        if ( (v21 & 0xFF0000) == 0 )
        {
          if ( !(_WORD)v21 )
          {
            v11 = 0;
            goto LABEL_6;
          }
          v12 -= 16LL * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ v20 ^ WORD2(v12));
        }
        v11 = (unsigned __int8)(RtlpHpHeapGlobals ^ v12 ^ *(_BYTE *)(v12 + 8));
LABEL_6:
        LOBYTE(a4) = v47;
        v7 = (v12 - (unsigned int)(v11 << 12)) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_7;
      }
      v11 = 0;
    }
    v12 = v5;
    goto LABEL_6;
  }
LABEL_7:
  if ( (*(_WORD *)(v7 + 34) ^ 0xABED) == *(_WORD *)(v7 + 32) )
  {
    *a5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
    v13 = a4 & 1;
    if ( (a4 & 1) != 0 )
      v14 = -1;
    else
      v14 = RtlpHpAcquireLockExclusive(SpinLock, *(unsigned int *)(SpinLock + 8));
    v44 = v14;
    if ( ((*(_QWORD *)v5 ^ v5 ^ RtlpHpHeapGlobals) & 0xFF000000000000LL) != 0 )
    {
      v18 = RtlpHpVsChunkFree((PEX_SPIN_LOCK)SpinLock, (__int64)&v44);
      if ( !v13 )
      {
        if ( *(_DWORD *)(SpinLock + 8) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
          __writecr8(v44);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)SpinLock, v15, v16, v17);
          v46 = 0;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(SpinLock) == 1 )
            SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
          else
            SessionId = -1;
          --CurrentThread->SpecialApcDisable;
          v37 = ++CurrentThread->AbAllocationRegionCount;
          v38 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v29 = !_BitScanReverse((unsigned int *)&v39, v38);
            if ( v29 )
              goto LABEL_62;
            v40 = 1 << v39;
            v41 = v39;
            v42 = &CurrentThread->LockEntries[v41];
            v38 &= ~v40;
            if ( (v42->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v42->LockState.0 & 1) == 0
              && (*(_QWORD *)&v42->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (SpinLock & 0x7FFFFFFFFFFFFFFCLL)
              && v42->LockState.SessionId == SessionId )
            {
              v42->AcquiredByte &= ~1u;
              if ( v42->LockState.0 )
                break;
            }
          }
          if ( !v42 )
          {
LABEL_62:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, SpinLock, SessionId, 0LL);
            goto LABEL_74;
          }
          v42->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v42->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v41].TreeNode);
          v46 = 0;
          v46 = v42->BoostBitmap.AllFields & 0x1FFFF;
          v42->BoostBitmap.AllFields &= 0xFFFE0000;
          v42->ThreadLocalFlags &= ~1u;
          v42->LockState.0 = 0LL;
          v43 = ((char *)v42 - (char *)CurrentThread - 800) / 96;
          if ( v37 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v43;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v43);
LABEL_74:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(CurrentThread, SpinLock, &v46);
          v29 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v29
            && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          KeLeaveCriticalRegion();
        }
      }
      if ( v18 )
        RtlpHpVsSubsegmentFree(SpinLock, v18, v47);
      return 1;
    }
    else
    {
      RtlpLogHeapFailure(8, SpinLock ^ *(_DWORD *)(SpinLock + 64), v6, v5, 0LL);
      if ( !v13 )
      {
        if ( *(_DWORD *)(SpinLock + 8) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
          __writecr8(v14);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)SpinLock, v22, v23, v24);
          v45 = 0;
          v25 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(SpinLock) == 1 )
            v26 = MmGetSessionIdEx(v25->ApcState.Process);
          else
            v26 = -1;
          --v25->SpecialApcDisable;
          v27 = ++v25->AbAllocationRegionCount;
          v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v29 = !_BitScanReverse((unsigned int *)&v30, v28);
            if ( v29 )
              goto LABEL_36;
            v31 = 1 << v30;
            v32 = v30;
            v33 = &v25->LockEntries[v32];
            v28 &= ~v31;
            if ( (v33->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v33->LockState.0 & 1) == 0
              && (*(_QWORD *)&v33->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (SpinLock & 0x7FFFFFFFFFFFFFFCLL)
              && v33->LockState.SessionId == v26 )
            {
              v33->AcquiredByte &= ~1u;
              if ( v33->LockState.0 )
                break;
            }
          }
          if ( !v33 )
          {
LABEL_36:
            if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v25, SpinLock, v26, 0LL);
            goto LABEL_48;
          }
          v33->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v33->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v25->LockEntries[v32].TreeNode);
          v45 = 0;
          v45 = v33->BoostBitmap.AllFields & 0x1FFFF;
          v33->BoostBitmap.AllFields &= 0xFFFE0000;
          v33->ThreadLocalFlags &= ~1u;
          v33->LockState.0 = 0LL;
          v34 = ((char *)v33 - (char *)v25 - 800) / 96;
          if ( v27 == 1 )
            v25->AbEntrySummary |= 1 << v34;
          else
            _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v34);
LABEL_48:
          --v25->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v25, SpinLock, &v45);
          v29 = v25->SpecialApcDisable++ == -1;
          if ( v29 && ($005F0E83B22994B61E86C72E0CE43C71 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
            KiCheckForKernelApcDelivery();
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  else
  {
    RtlpLogHeapFailure(18, SpinLock ^ *(_DWORD *)(SpinLock + 64), v7, 0, 0LL);
  }
  return v9;
}
