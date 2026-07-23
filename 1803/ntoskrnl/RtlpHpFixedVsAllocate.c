/*
 * XREFs of RtlpHpFixedVsAllocate @ 0x1400AB270
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400D8720 (RtlFindClearBitsAndSetEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlFindLongestRunClearEx @ 0x14016D6BC (RtlFindLongestRunClearEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__m128i *__fastcall RtlpHpFixedVsAllocate(unsigned __int64 a1, unsigned int a2, _DWORD *a3, char a4)
{
  unsigned __int64 v4; // rdi
  ULONG_PTR v5; // r14
  int v8; // r12d
  unsigned __int8 v9; // r13
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ClearBitsAndSet; // r15
  __m128i *v15; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v19; // r12
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rsi
  __int64 v26; // rdx
  _QWORD v27[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v28; // [rsp+80h] [rbp+40h] BYREF
  int v29; // [rsp+88h] [rbp+48h] BYREF
  int v30; // [rsp+98h] [rbp+58h]

  v4 = a2;
  v5 = a1 + 24;
  v8 = a4 & 1;
  if ( (a4 & 1) != 0 )
    v9 = -1;
  else
    v9 = RtlpHpAcquireLockExclusive(a1 + 24, *(unsigned int *)(a1 + 32));
  v10 = *(__m128i *)(a1 + 48);
  v27[0] = *(_QWORD *)(a1 + 48);
  v27[1] = a1 ^ _mm_srli_si128(v10, 8).m128i_u64[0];
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v27, v4 >> 12, 0LL);
  v28 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    if ( a3 )
      *a3 = (unsigned int)RtlFindLongestRunClearEx(v27, &v28) << 12;
    v15 = 0LL;
  }
  else
  {
    v15 = (__m128i *)(a1 + (ClearBitsAndSet << 12));
    if ( a3 )
      *a3 = 0;
  }
  if ( !v8 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5);
      __writecr8(v9);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5, v11, v12, v13);
      v29 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v19 = ++CurrentThread->AbAllocationRegionCount;
      v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        v30 = v22;
        if ( v21 )
          goto LABEL_20;
        v23 = 1 << v22;
        v24 = v22;
        v25 = &CurrentThread->LockEntries[v24];
        v20 &= ~v23;
        if ( (v25->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v25->LockState.0 & 1) == 0
          && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
          && v25->LockState.SessionId == SessionId )
        {
          v25->AcquiredByte &= ~1u;
          if ( v25->LockState.0 )
            break;
        }
      }
      if ( !v25 )
      {
LABEL_20:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, SessionId, 0LL);
        goto LABEL_32;
      }
      v25->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v25->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v24].TreeNode);
      v29 = 0;
      v29 = v25->BoostBitmap.AllFields & 0x1FFFF;
      v25->BoostBitmap.AllFields &= 0xFFFE0000;
      v25->ThreadLocalFlags &= ~1u;
      v25->LockState.0 = 0LL;
      v26 = ((char *)v25 - (char *)CurrentThread - 800) / 96;
      if ( v19 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v26;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
LABEL_32:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, v5, &v29);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v21
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KeLeaveCriticalRegion();
    }
  }
  return v15;
}
