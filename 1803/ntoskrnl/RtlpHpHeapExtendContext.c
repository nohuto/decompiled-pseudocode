/*
 * XREFs of RtlpHpHeapExtendContext @ 0x1402953E0
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x140298130 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpHpAllocVA @ 0x1402943E0 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataCommit @ 0x140295C40 (RtlpHpMetadataCommit.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(int *a1, __int64 a2)
{
  int v2; // eax
  ULONG_PTR v3; // rdi
  volatile LONG *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  unsigned int v12; // r12d
  signed __int64 v13; // r15
  KIRQL v14; // al
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  KIRQL v18; // si
  unsigned __int64 v19; // r10
  struct _KTHREAD *v20; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v22; // r15
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rsi
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  int v30; // eax
  __int128 v31; // xmm0
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  bool v38; // sf
  int v39; // eax
  __int64 v40; // rdx
  unsigned __int8 v41; // r15
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rsi
  int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rdx
  struct _KTHREAD *v48; // rbx
  unsigned __int8 v49; // r14
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rcx
  _KLOCK_ENTRY *v53; // rsi
  __int64 v54; // rcx
  int v55; // ecx
  unsigned int v56; // edx
  __int64 v57; // rdx
  unsigned __int64 v59; // [rsp+50h] [rbp-19h] BYREF
  __int64 v60[3]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v61; // [rsp+70h] [rbp+7h] BYREF
  __int128 v62[4]; // [rsp+80h] [rbp+17h] BYREF
  int v63; // [rsp+D0h] [rbp+67h] BYREF
  int v64; // [rsp+E0h] [rbp+77h] BYREF
  int v65; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = *a1;
  v3 = (ULONG_PTR)(a1 + 90);
  v6 = a1 + 90;
  if ( (v2 & 1) != 0 )
  {
    v11 = ExAcquireSpinLockExclusive(v6);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
    __writecr8(v11);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3, v8, v9, v10);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v12 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *((_QWORD *)a1 + 46);
        if ( (unsigned __int64)(v13 + a2) > *((_QWORD *)a1 + 47) )
          break;
        if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 46, v13 + a2, v13) )
          return v13;
      }
      v14 = RtlpHpAcquireLockExclusive((volatile LONG *)v3, *a1 & 1);
      v17 = *((_QWORD *)a1 + 46);
      v18 = v14;
      v19 = *((_QWORD *)a1 + 47);
      if ( v17 + a2 > v19 )
        break;
      if ( (*a1 & 1) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v3, v17, v15, v16);
        v63 = 0;
        v20 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v20->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v20->SpecialApcDisable;
        v22 = ++v20->AbAllocationRegionCount;
        v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v24 = !_BitScanReverse((unsigned int *)&v25, v23);
          if ( v24 )
            break;
          v26 = (__int64)&v20->LockEntries[v25];
          v23 &= ~(1 << v25);
          if ( (*(_BYTE *)(v26 + 26) & 1) != 0
            && (*(_DWORD *)(v26 + 32) & 1) == 0
            && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v26 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v26 + 26) &= ~1u;
            if ( *(_QWORD *)(v26 + 32) )
            {
              if ( v26 )
              {
                *(_BYTE *)(v26 + 32) |= 2u;
                if ( *(__int64 *)(v26 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26, SessionId);
                v27 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
                v28 = *(_DWORD *)(v26 + 88) & 0xFFFE0000;
                *(_BYTE *)(v26 + 25) &= ~1u;
                v63 = v27;
                *(_DWORD *)(v26 + 88) = v28;
                *(_QWORD *)(v26 + 32) = 0LL;
                v29 = (v26 - (__int64)v20 - 800) / 96;
                if ( v22 == 1 )
                  v20->AbEntrySummary |= 1 << v29;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v29);
                goto LABEL_32;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v20, v3, (unsigned int)SessionId, 0LL);
LABEL_32:
        --v20->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v20, v3, (__int64)&v63);
        v24 = v20->SpecialApcDisable++ == -1;
        if ( v24 )
          goto LABEL_33;
        goto LABEL_35;
      }
LABEL_36:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
      __writecr8(v18);
    }
    v30 = a1[17];
    v31 = *(_OWORD *)a1;
    v32 = v17 - v19;
    v60[0] = *((_QWORD *)a1 + 47);
    v33 = (v32 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v59 = v33;
    if ( (v30 & 1) != 0 )
    {
      v61 = v31;
      v34 = RtlpHpMetadataCommit(a1, v19, (v32 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL, &v61);
    }
    else
    {
      v62[0] = v31;
      v34 = RtlpHpAllocVA(v60, (__int64 *)&v59, 0LL, 4096, 4, v62, 0LL);
      v33 = v59;
    }
    v38 = v34 < 0;
    v39 = *a1;
    if ( v38 )
      break;
    *((_QWORD *)a1 + 47) += v33;
    if ( (v39 & 1) != 0 )
      goto LABEL_36;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3, v35, v36, v37);
    v64 = 0;
    v20 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      v40 = (unsigned int)MmGetSessionIdEx((__int64)v20->ApcState.Process);
    else
      v40 = 0xFFFFFFFFLL;
    --v20->SpecialApcDisable;
    v41 = ++v20->AbAllocationRegionCount;
    v42 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v24 = !_BitScanReverse((unsigned int *)&v43, v42);
      if ( v24 )
        break;
      v44 = (__int64)&v20->LockEntries[v43];
      v42 &= ~(1 << v43);
      if ( (*(_BYTE *)(v44 + 26) & 1) != 0
        && (*(_DWORD *)(v44 + 32) & 1) == 0
        && (*(_QWORD *)(v44 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v44 + 40) == (_DWORD)v40 )
      {
        *(_BYTE *)(v44 + 26) &= ~1u;
        if ( *(_QWORD *)(v44 + 32) )
        {
          if ( v44 )
          {
            *(_BYTE *)(v44 + 32) |= 2u;
            if ( *(__int64 *)(v44 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v44, v40);
            v45 = *(_DWORD *)(v44 + 88) & 0x1FFFF;
            v46 = *(_DWORD *)(v44 + 88) & 0xFFFE0000;
            *(_BYTE *)(v44 + 25) &= ~1u;
            v64 = v45;
            *(_DWORD *)(v44 + 88) = v46;
            *(_QWORD *)(v44 + 32) = 0LL;
            v47 = (v44 - (__int64)v20 - 800) / 96;
            if ( v41 == 1 )
              v20->AbEntrySummary |= 1 << v47;
            else
              _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v47);
            goto LABEL_62;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, v3, (unsigned int)v40, 0LL);
LABEL_62:
    --v20->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v20, v3, (__int64)&v64);
    v24 = v20->SpecialApcDisable++ == -1;
    if ( v24 )
    {
LABEL_33:
      if ( ($005F0E83B22994B61E86C72E0CE43C71 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
        KiCheckForKernelApcDelivery();
    }
LABEL_35:
    KeLeaveCriticalRegion();
  }
  v13 = 0LL;
  if ( (v39 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
    __writecr8(v18);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3, v35, v36, v37);
    v65 = 0;
    v48 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      v12 = MmGetSessionIdEx((__int64)v48->ApcState.Process);
    --v48->SpecialApcDisable;
    v49 = ++v48->AbAllocationRegionCount;
    LODWORD(v50) = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v24 = !_BitScanReverse((unsigned int *)&v54, v50);
      if ( v24 )
        goto LABEL_79;
      v51 = 1 << v54;
      v52 = v54;
      v53 = &v48->LockEntries[v52];
      v50 = ~v51 & (unsigned int)v50;
      if ( (v53->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v53->LockState.0 & 1) == 0
        && (*(_QWORD *)&v53->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && v53->LockState.SessionId == v12 )
      {
        v53->AcquiredByte &= ~1u;
        if ( v53->LockState.0 )
          break;
      }
    }
    if ( !v53 )
    {
LABEL_79:
      if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v48, v3, v12, 0LL);
      goto LABEL_86;
    }
    v53->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v53->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v48->LockEntries[v52].TreeNode, v50);
    v55 = v53->BoostBitmap.AllFields & 0x1FFFF;
    v56 = v53->BoostBitmap.AllFields & 0xFFFE0000;
    v53->ThreadLocalFlags &= ~1u;
    v65 = v55;
    v53->BoostBitmap.AllFields = v56;
    v53->LockState.0 = 0LL;
    v57 = ((char *)v53 - (char *)v48 - 800) / 96;
    if ( v49 == 1 )
      v48->AbEntrySummary |= 1 << v57;
    else
      _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, 1 << v57);
LABEL_86:
    --v48->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v48, v3, (__int64)&v65);
    v24 = v48->SpecialApcDisable++ == -1;
    if ( v24 && ($005F0E83B22994B61E86C72E0CE43C71 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegion();
  }
  return v13;
}
