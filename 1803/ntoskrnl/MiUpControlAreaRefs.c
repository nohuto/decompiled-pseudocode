/*
 * XREFs of MiUpControlAreaRefs @ 0x140142EB4
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiInsertChildVads @ 0x1405BFB04 (MiInsertChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiControlAreaRequiresCharge @ 0x1400E481C (MiControlAreaRequiresCharge.c)
 *     MiDecrementSubsections @ 0x1400E5350 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x1400E5D50 (MiReferenceActiveSubsection.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUnlockNestedVad @ 0x1405BFC80 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x1405BFCB8 (MiLockNestedVad.c)
 */

__int64 __fastcall MiUpControlAreaRefs(__int64 a1, int a2)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // r14
  __int64 *v10; // rdi
  unsigned __int64 v11; // rdi
  KIRQL v12; // al
  __int64 v13; // r8
  int active; // eax
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v20; // rsi
  unsigned __int64 v21; // r14
  struct _KTHREAD *v22; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v24; // r13
  unsigned int v25; // r8d
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 v32; // rax
  int v33; // [rsp+30h] [rbp-30h]
  int v34; // [rsp+34h] [rbp-2Ch]
  BOOL v35; // [rsp+38h] [rbp-28h]
  __int64 *v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v37; // [rsp+48h] [rbp-18h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-8h]
  KIRQL v40; // [rsp+A0h] [rbp+40h]
  int v41; // [rsp+B0h] [rbp+50h]
  int v42; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0LL;
  v34 = 0;
  v5 = **(_QWORD **)(a1 + 72);
  v6 = MiControlAreaRequiresCharge(v5, 0LL);
  if ( !v6 )
    return 3221227019LL;
  v7 = *(_QWORD *)(v5 + 64);
  v35 = v7 != 0;
  if ( ((((*(_DWORD *)(a1 + 48) >> 3) & 0x1F) - 4) & 0xFFFFFFFD) == 0 && v7 && (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 92));
    else
      _InterlockedAdd((volatile signed __int32 *)(v5 + 92), 0xFFFFFFFF);
    v34 = 1;
  }
  v8 = (*(_DWORD *)(v5 + 56) & 0x400) == 0;
  v9 = 0LL;
  v41 = 0;
  v10 = 0LL;
  v33 = 0;
  v36 = 0LL;
  v37 = 0LL;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad(a1);
    if ( *(_QWORD *)(v5 + 64) && (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
    {
      MiGetProtoPteAddress(a1, v11, 0, &v36);
      v10 = v36;
    }
    else
    {
      v10 = (__int64 *)(v5 + 128);
      v36 = (__int64 *)(v5 + 128);
    }
    if ( v10 )
      v33 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *(_QWORD *)(v5 + 64) )
  {
    CurrentThread = 0LL;
    v38 = 0LL;
  }
  else
  {
    v31 = *(_QWORD *)v5;
    CurrentThread = KeGetCurrentThread();
    v38 = v31;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v31 + 40, 0LL);
    v10 = v36;
    v4 = 0LL;
  }
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  v40 = v12;
  if ( !v10 )
    goto LABEL_73;
  if ( ((*(_DWORD *)(v5 + 56) >> 5) & 1) != 0 || !*(_QWORD *)(v5 + 64) )
  {
    if ( a2 )
    {
      active = MiReferenceActiveSubsection(v10, 8, v12);
      goto LABEL_15;
    }
    if ( ((*(_DWORD *)(v5 + 56) >> 5) & 1) == 0 )
    {
      v32 = MiDecrementSubsections((ULONG_PTR)v10, (__int64)v10, 8u);
LABEL_72:
      v9 = v32;
LABEL_28:
      v15 = v41;
      goto LABEL_16;
    }
    if ( v6 == 2 )
    {
      v32 = MiDecrementSubsectionViewCount(v10, 24LL, v13);
      goto LABEL_72;
    }
LABEL_73:
    v15 = 0;
    goto LABEL_16;
  }
  MiGetProtoPteAddress(
    a1,
    *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
    1,
    &v37);
  v20 = v10;
  while ( !a2 )
  {
    v9 += MiDecrementSubsections((ULONG_PTR)v10, (__int64)v10, 8u);
LABEL_27:
    v4 = (__int64)v20;
    if ( v20 != v37 )
    {
      v20 = (__int64 *)v20[2];
      if ( v20 )
        continue;
    }
    goto LABEL_28;
  }
  active = MiReferenceActiveSubsection(v20, 8, v40);
  v41 = active;
  if ( active >= 0 )
    goto LABEL_27;
  if ( v4 )
  {
    v9 += MiDecrementSubsections((ULONG_PTR)v10, v4, 8u);
    goto LABEL_28;
  }
LABEL_15:
  v15 = active;
LABEL_16:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  __writecr8(v40);
  if ( v9 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)), v35, v9);
  if ( !*(_QWORD *)(v5 + 64) )
  {
    v21 = v38 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v21, v16, v17, v18);
    v42 = 0;
    v22 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v21) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v22->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v22->SpecialApcDisable;
    v24 = ++v22->AbAllocationRegionCount;
    v25 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v26, v25);
      if ( v8 )
        break;
      v27 = 1 << v26;
      v28 = v26;
      v29 = &v22->LockEntries[v28];
      v25 &= ~v27;
      if ( (v29->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v29->LockState.0 & 1) == 0
        && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v21 & 0x7FFFFFFFFFFFFFFCLL)
        && v29->LockState.SessionId == (_DWORD)SessionId )
      {
        v29->AcquiredByte &= ~1u;
        if ( v29->LockState.0 )
        {
          if ( v29 )
          {
            v29->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v29->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v22->LockEntries[v28].TreeNode, SessionId);
            v42 = 0;
            v42 = v29->BoostBitmap.AllFields & 0x1FFFF;
            v29->BoostBitmap.AllFields &= 0xFFFE0000;
            v29->ThreadLocalFlags &= ~1u;
            v29->LockState.0 = 0LL;
            v30 = ((char *)v29 - (char *)v22 - 800) / 96;
            if ( v24 == 1 )
              v22->AbEntrySummary |= 1 << v30;
            else
              _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v30);
            goto LABEL_45;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v22, v21, (unsigned int)SessionId, 0LL);
LABEL_45:
    --v22->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v22, v21, (__int64)&v42);
    v8 = v22->SpecialApcDisable++ == -1;
    if ( v8 && ($005F0E83B22994B61E86C72E0CE43C71 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v33 == 1 )
    MiUnlockNestedVad(a1);
  if ( v15 < 0 && v34 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 92));
  return (unsigned int)v15;
}
