/*
 * XREFs of RtlpHpLargeFree @ 0x14029E80C
 * Callers:
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x140295D08 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x14029E588 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x14029ED0C (RtlpHpLargeLockAcquire.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(ULONG_PTR a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // bl
  unsigned __int8 v5; // si
  _RTL_BALANCED_NODE *Metadata; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // r12
  volatile signed __int64 *v13; // r15
  struct _KTHREAD *v14; // rbx
  __int64 v15; // rdx
  unsigned __int8 v16; // r12
  unsigned int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  _KLOCK_ENTRY *v20; // rsi
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  volatile signed __int64 *v27; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  int v30; // r8d
  unsigned int v31; // r8d
  int v32; // eax
  __int64 v33; // rcx
  _KLOCK_ENTRY *v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  char v38; // cl
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  int v43; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v44[3]; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-30h] BYREF
  __int128 v46; // [rsp+50h] [rbp-20h] BYREF
  __int128 v47; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v48; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+C8h] [rbp+58h]

  v48 = a2;
  v3 = a3;
  v5 = RtlpHpLargeLockAcquire(a1, a3);
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1, v48);
  v10 = 0LL;
  v11 = v3 & 1;
  v12 = (__int64)Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 80), Metadata);
    if ( !v11 )
    {
      v27 = (volatile signed __int64 *)(a1 + 72);
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        __writecr8(v5);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72), v24, v25, v26);
        v44[0] = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 72) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        ++CurrentThread->AbAllocationRegionCount;
        v30 = (char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary;
        AbAllocationRegionCount = CurrentThread->AbAllocationRegionCount;
        v31 = v30 ^ 0x3F;
        while ( 1 )
        {
          v21 = !_BitScanReverse((unsigned int *)&v35, v31);
          v44[2] = v35;
          if ( v21 )
            goto LABEL_44;
          v32 = 1 << v35;
          v33 = v35;
          v34 = &CurrentThread->LockEntries[v33];
          v31 &= ~v32;
          if ( (v34->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v34->LockState.0 & 1) == 0
            && (*(_QWORD *)&v34->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v27 & 0x7FFFFFFFFFFFFFFCLL)
            && v34->LockState.SessionId == (_DWORD)SessionId )
          {
            v34->AcquiredByte &= ~1u;
            if ( v34->LockState.0 )
              break;
          }
        }
        if ( !v34 )
        {
LABEL_44:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 72, (unsigned int)SessionId, 0LL);
          goto LABEL_51;
        }
        v34->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v34->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v33].TreeNode, SessionId);
        v44[0] = 0;
        v44[0] = v34->BoostBitmap.AllFields & 0x1FFFF;
        v34->BoostBitmap.AllFields &= 0xFFFE0000;
        v34->ThreadLocalFlags &= ~1u;
        v34->LockState.0 = 0LL;
        v36 = ((char *)v34 - (char *)CurrentThread - 800) / 96;
        if ( AbAllocationRegionCount == 1 )
          CurrentThread->AbEntrySummary |= 1 << v36;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v36);
LABEL_51:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 72, (__int64)v44);
        v21 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v21
          && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KeLeaveCriticalRegion();
      }
    }
    v37 = *(_QWORD *)(v12 + 32);
    v38 = (unsigned __int8)v37 >> 2;
    v46 = *(_OWORD *)a1;
    v39 = (((v37 >> 12) + ((v37 >> 1) & 1)) << 12) - 1;
    v45 = (1LL << v38) - (((1LL << v38) - 1) & ((1LL << v38) + v39)) + v39;
    RtlpHpFreeVA(&v48, &v45, 0x8000LL, &v46);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), -(*(_QWORD *)(v12 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(__int64)(v45 >> 12));
    v47 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v12, &v47, v40, v41);
    return v45;
  }
  else
  {
    if ( !v11 )
    {
      v13 = (volatile signed __int64 *)(a1 + 72);
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        __writecr8(v5);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72), v7, v8, v9);
        v43 = 0;
        v14 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 72) == 1 )
          v15 = (unsigned int)MmGetSessionIdEx((__int64)v14->ApcState.Process);
        else
          v15 = 0xFFFFFFFFLL;
        --v14->SpecialApcDisable;
        v16 = ++v14->AbAllocationRegionCount;
        v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v21 = !_BitScanReverse((unsigned int *)&v22, v17);
          v44[1] = v22;
          if ( v21 )
            goto LABEL_16;
          v18 = 1 << v22;
          v19 = v22;
          v20 = &v14->LockEntries[v19];
          v17 &= ~v18;
          if ( (v20->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v20->LockState.0 & 1) == 0
            && (*(_QWORD *)&v20->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v13 & 0x7FFFFFFFFFFFFFFCLL)
            && v20->LockState.SessionId == (_DWORD)v15 )
          {
            v20->AcquiredByte &= ~1u;
            if ( v20->LockState.0 )
              break;
          }
        }
        if ( !v20 )
        {
LABEL_16:
          if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v14, a1 + 72, (unsigned int)v15, 0LL);
          goto LABEL_23;
        }
        v20->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v20->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v14->LockEntries[v19].TreeNode, v15);
        v43 = 0;
        v43 = v20->BoostBitmap.AllFields & 0x1FFFF;
        v20->BoostBitmap.AllFields &= 0xFFFE0000;
        v20->ThreadLocalFlags &= ~1u;
        v20->LockState.0 = 0LL;
        v23 = ((char *)v20 - (char *)v14 - 800) / 96;
        if ( v16 == 1 )
          v14->AbEntrySummary |= 1 << v23;
        else
          _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v23);
LABEL_23:
        --v14->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v14, a1 + 72, (__int64)&v43);
        v21 = v14->SpecialApcDisable++ == -1;
        if ( v21 && ($005F0E83B22994B61E86C72E0CE43C71 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
      }
    }
    RtlpLogHeapFailure(8, a1, v48, 0LL, 0LL);
  }
  return v10;
}
