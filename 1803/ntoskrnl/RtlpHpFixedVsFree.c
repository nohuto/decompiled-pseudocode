/*
 * XREFs of RtlpHpFixedVsFree @ 0x1400AC960
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
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
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpHpFixedVsFree(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned int v6; // r11d
  int v7; // r13d
  __int64 v8; // r12
  int v10; // r15d
  unsigned __int8 v11; // r14
  __m128i v12; // xmm0
  unsigned __int64 v13; // r10
  const signed __int64 *v14; // rcx
  const signed __int64 *v15; // rdx
  signed __int64 v16; // r8
  const signed __int64 *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  bool i; // zf
  unsigned __int8 v22; // al
  KIRQL v23; // al
  ULONG_PTR v24; // rsi
  char *v25; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v28; // bp
  unsigned int v29; // r8d
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  _KLOCK_ENTRY *v33; // rdi
  __int64 v34; // rdx
  _QWORD v35[9]; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+90h] [rbp+18h] BYREF
  int v38; // [rsp+98h] [rbp+20h]

  v4 = (unsigned __int64)a3 >> 12;
  v5 = (a2 - a1) >> 12;
  v6 = a3;
  v7 = a2;
  v8 = a4;
  v10 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v11 = -1;
  }
  else
  {
    v23 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 24), *(unsigned int *)(a1 + 32));
    v6 = a3;
    v11 = v23;
  }
  v12 = *(__m128i *)(a1 + 48);
  v13 = v5 + v4 - 1;
  v35[0] = *(_QWORD *)(a1 + 48);
  v14 = (const signed __int64 *)(a1 ^ _mm_srli_si128(v12, 8).m128i_u64[0]);
  v35[1] = v14;
  if ( v13 >= v35[0] )
    goto LABEL_19;
  if ( v4 <= 1 )
  {
    if ( v4 != 1 )
      goto LABEL_19;
    v22 = _bittest64(v14, v5);
LABEL_18:
    if ( !v22 )
      goto LABEL_19;
    goto LABEL_7;
  }
  v15 = &v14[v5 >> 6];
  v16 = *v15;
  v17 = &v14[v13 >> 6];
  if ( v15 == v17 )
  {
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v5) & v16) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v5 )
      goto LABEL_7;
LABEL_19:
    RtlpLogHeapFailure(8, a1, v7, v6, v8);
    __fastfail(0x32u);
  }
  for ( i = ((-1LL << v5) & v16) == -1LL << v5; ; i = *v15 == -1 )
  {
    if ( !i )
      goto LABEL_19;
    if ( ++v15 == v17 )
      break;
  }
  if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v13) & *v15) != 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v13 )
  {
    v22 = 0;
    goto LABEL_18;
  }
LABEL_7:
  RtlClearBitsEx((__int64)v35, v5, v4);
  if ( !v10 )
  {
    v24 = a1 + 24;
    if ( *(_DWORD *)(a1 + 32) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 24));
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24), v18, v19, v20);
      v37 = 0;
      v25 = (char *)(a1 + 24);
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v25) == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v28 = ++CurrentThread->AbAllocationRegionCount;
      v29 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        i = !_BitScanReverse((unsigned int *)&v30, v29);
        v38 = v30;
        if ( i )
          goto LABEL_28;
        v31 = 1 << v30;
        v32 = v30;
        v33 = &CurrentThread->LockEntries[v32];
        v29 &= ~v31;
        if ( (v33->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v33->LockState.0 & 1) == 0
          && (*(_QWORD *)&v33->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v24 & 0x7FFFFFFFFFFFFFFCLL)
          && v33->LockState.SessionId == SessionId )
        {
          v33->AcquiredByte &= ~1u;
          if ( v33->LockState.0 )
            break;
        }
      }
      if ( !v33 )
      {
LABEL_28:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v24, SessionId, 0LL);
        goto LABEL_40;
      }
      v33->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v33->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v32].TreeNode);
      v37 = 0;
      v37 = v33->BoostBitmap.AllFields & 0x1FFFF;
      v33->BoostBitmap.AllFields &= 0xFFFE0000;
      v33->ThreadLocalFlags &= ~1u;
      v33->LockState.0 = 0LL;
      v34 = ((char *)v33 - (char *)CurrentThread - 800) / 96;
      if ( v28 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v34;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v34);
LABEL_40:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, v24, &v37);
      i = CurrentThread->SpecialApcDisable++ == -1;
      if ( i && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegion();
    }
  }
}
