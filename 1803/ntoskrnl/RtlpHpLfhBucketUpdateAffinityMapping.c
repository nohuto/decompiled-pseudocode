/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x140299C08
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140078030 (KeGetCurrentProcessorNumberEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpLfhOwnerInitialize @ 0x14029A814 (RtlpHpLfhOwnerInitialize.c)
 */

void __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int8 v9; // bl
  unsigned __int64 v10; // rsi
  KIRQL v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  KIRQL v15; // r14
  _BYTE *v16; // r11
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned __int8 v20; // r10
  __int64 v21; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v24; // al
  struct _KTHREAD *v25; // rbx
  __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // r8d
  int v29; // eax
  __int64 v30; // rcx
  _KLOCK_ENTRY *v31; // r14
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  void *v36; // rax
  void *v37; // rbx
  __int64 v38; // rcx
  unsigned __int8 v39; // r14
  unsigned int v40; // r8d
  int v41; // eax
  __int64 v42; // rcx
  _KLOCK_ENTRY *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rdx
  signed __int32 v46[8]; // [rsp+0h] [rbp-89h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+30h] [rbp-59h]
  int v48; // [rsp+34h] [rbp-55h] BYREF
  _DWORD v49[4]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v50; // [rsp+48h] [rbp-41h]
  __int64 v51; // [rsp+50h] [rbp-39h]
  _BYTE v52[64]; // [rsp+60h] [rbp-29h] BYREF

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v5 = *(unsigned __int8 *)(a1 + 48);
  v6 = CurrentProcessorNumber & 0x3F;
  if ( v6 >= v5 )
  {
    if ( v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0;
    else
      v6 = *(unsigned __int8 *)(v6 - v5 - 1 + *(_QWORD *)(a1 + 56));
  }
  v7 = v6;
  v8 = *(_QWORD *)(a2 + 88);
  v51 = v7;
  v9 = *(_BYTE *)(v7 + v8);
  memset(v52, 0, sizeof(v52));
  v10 = a2 + 80;
  v11 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 80), *(unsigned __int8 *)(a1 + 64));
  v14 = *(_QWORD *)(a2 + 88);
  v15 = v11;
  v16 = (_BYTE *)(v14 + v7);
  if ( v9 != *(_BYTE *)(v14 + v7) )
    goto LABEL_19;
  v17 = *(unsigned __int8 *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 48) )
  {
    v12 = *(unsigned __int8 *)(a1 + 48);
    do
    {
      v18 = *(unsigned __int8 *)v14++;
      ++v52[v18];
      --v12;
    }
    while ( v12 );
  }
  if ( v52[v9] == 1 )
  {
LABEL_19:
    if ( *(_BYTE *)(a1 + 64) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v10);
      __writecr8(v15);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10, v14, v12, v13);
      v49[0] = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v10) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --CurrentThread->SpecialApcDisable;
      v39 = ++CurrentThread->AbAllocationRegionCount;
      v40 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v32 = !_BitScanReverse((unsigned int *)&v44, v40);
        v49[2] = v44;
        if ( v32 )
          goto LABEL_65;
        v41 = 1 << v44;
        v42 = v44;
        v43 = &CurrentThread->LockEntries[v42];
        v40 &= ~v41;
        if ( (v43->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v43->LockState.0 & 1) == 0
          && (*(_QWORD *)&v43->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v10 & 0x7FFFFFFFFFFFFFFCLL)
          && v43->LockState.SessionId == (_DWORD)SessionId )
        {
          v43->AcquiredByte &= ~1u;
          if ( v43->LockState.0 )
            break;
        }
      }
      if ( !v43 )
      {
LABEL_65:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v10, (unsigned int)SessionId, 0LL);
        goto LABEL_72;
      }
      v43->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v43->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v42].TreeNode, SessionId);
      v49[0] = 0;
      v49[0] = v43->BoostBitmap.AllFields & 0x1FFFF;
      v43->BoostBitmap.AllFields &= 0xFFFE0000;
      v43->ThreadLocalFlags &= ~1u;
      v43->LockState.0 = 0LL;
      v45 = ((char *)v43 - (char *)CurrentThread - 800) / 96;
      if ( v39 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v45;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v45);
LABEL_72:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v10, (__int64)v49);
      v32 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v32
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KeLeaveCriticalRegion();
    }
    return;
  }
  v19 = v9 + 1;
  v14 = v19;
  if ( v19 < v17 )
  {
    v12 = (__int64)&v52[v19];
    do
    {
      v20 = *(_BYTE *)v12;
      v13 = (unsigned int)v14;
      if ( !*(_BYTE *)v12 )
        break;
      v14 = (unsigned int)(v14 + 1);
      ++v12;
      if ( v20 >= v52[v19] )
        v13 = v19;
      v19 = v13;
    }
    while ( (unsigned int)v14 < v17 );
  }
  v21 = v19;
  if ( v52[v19] )
  {
    *v16 = v19;
    goto LABEL_19;
  }
  v24 = *(_BYTE *)(a2 + 77);
  if ( v24 < 0x1Eu )
  {
    *(_BYTE *)(a2 + 77) = v24 + 1;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(a1 + 64) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 80));
    __writecr8(v15);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 80), v14, v12, v13);
    v48 = 0;
    v25 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a2 + 80) == 1 )
      v26 = (unsigned int)MmGetSessionIdEx((__int64)v25->ApcState.Process);
    else
      v26 = 0xFFFFFFFFLL;
    --v25->SpecialApcDisable;
    ++v25->AbAllocationRegionCount;
    v27 = (char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary;
    AbAllocationRegionCount = v25->AbAllocationRegionCount;
    v28 = v27 ^ 0x3F;
    while ( 1 )
    {
      v32 = !_BitScanReverse((unsigned int *)&v33, v28);
      v49[1] = v33;
      if ( v32 )
        goto LABEL_39;
      v29 = 1 << v33;
      v30 = v33;
      v31 = &v25->LockEntries[v30];
      v28 &= ~v29;
      if ( (v31->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v31->LockState.0 & 1) == 0
        && (*(_QWORD *)&v31->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v10 & 0x7FFFFFFFFFFFFFFCLL)
        && v31->LockState.SessionId == (_DWORD)v26 )
      {
        v31->AcquiredByte &= ~1u;
        if ( v31->LockState.0 )
          break;
      }
    }
    if ( !v31 )
    {
LABEL_39:
      if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v25, a2 + 80, (unsigned int)v26, 0LL);
      goto LABEL_46;
    }
    v31->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v31->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v25->LockEntries[v30].TreeNode, v26);
    v48 = 0;
    v48 = v31->BoostBitmap.AllFields & 0x1FFFF;
    v31->BoostBitmap.AllFields &= 0xFFFE0000;
    v31->ThreadLocalFlags &= ~1u;
    v31->LockState.0 = 0LL;
    v34 = ((char *)v31 - (char *)v25 - 800) / 96;
    if ( AbAllocationRegionCount == 1 )
      v25->AbEntrySummary |= 1 << v34;
    else
      _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v34);
LABEL_46:
    --v25->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v25, a2 + 80, (__int64)&v48);
    v32 = v25->SpecialApcDisable++ == -1;
    if ( v32 && ($005F0E83B22994B61E86C72E0CE43C71 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegion();
    v21 = v19;
  }
  v35 = *(_QWORD *)(a2 + 96);
  v50 = 2LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 8 * v21), 2LL, 0LL) )
  {
    v36 = (void *)((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
                    *(_QWORD *)a1,
                    64LL);
    v37 = v36;
    if ( v36 )
    {
      memset(v36, 0, 0x40uLL);
      RtlpHpLfhOwnerInitialize(v37, *(unsigned __int8 *)(a2 + 1), v19, a1);
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL * v19) = v37;
    if ( v37 )
    {
      _InterlockedOr(v46, 0);
      v38 = v51;
      *(_BYTE *)(a2 + 2) = v19 + 1;
      *(_BYTE *)(v38 + *(_QWORD *)(a2 + 88)) = v19;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
}
