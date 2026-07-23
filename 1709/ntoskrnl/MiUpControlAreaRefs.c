/*
 * XREFs of MiUpControlAreaRefs @ 0x140120C6C
 * Callers:
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiInsertChildVads @ 0x14057B0BC (MiInsertChildVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUnlockNestedVad @ 0x1404D4DA0 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x1404D4DD8 (MiLockNestedVad.c)
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
  int active; // eax
  int v14; // r12d
  __int64 *v16; // rsi
  unsigned __int64 v17; // r14
  struct _KTHREAD *v18; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v20; // r13
  unsigned int v21; // r8d
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rax
  int v30; // [rsp+30h] [rbp-30h]
  int v31; // [rsp+34h] [rbp-2Ch]
  BOOL v32; // [rsp+38h] [rbp-28h]
  __int64 *v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v34; // [rsp+48h] [rbp-18h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-8h]
  KIRQL v37; // [rsp+A0h] [rbp+40h]
  int v38; // [rsp+B0h] [rbp+50h]
  int v39; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0LL;
  v31 = 0;
  v5 = **(_QWORD **)(a1 + 72);
  v6 = MiControlAreaRequiresCharge(v5);
  if ( !v6 )
    return 3221227019LL;
  v7 = *(_QWORD *)(v5 + 64);
  v32 = v7 != 0;
  if ( ((((*(_DWORD *)(a1 + 48) >> 3) & 0x1F) - 4) & 0xFFFFFFFD) == 0 && v7 && (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 92));
    else
      _InterlockedAdd((volatile signed __int32 *)(v5 + 92), 0xFFFFFFFF);
    v31 = 1;
  }
  v8 = (*(_DWORD *)(v5 + 56) & 0x400) == 0;
  v9 = 0LL;
  v38 = 0;
  v10 = 0LL;
  v30 = 0;
  v33 = 0LL;
  v34 = 0LL;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad(a1);
    if ( *(_QWORD *)(v5 + 64) && (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
    {
      MiGetProtoPteAddress(a1, v11, 1u, &v33);
      v10 = v33;
    }
    else
    {
      v10 = (__int64 *)(v5 + 128);
      v33 = (__int64 *)(v5 + 128);
    }
    if ( v10 )
      v30 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *(_QWORD *)(v5 + 64) )
  {
    CurrentThread = 0LL;
    v35 = 0LL;
  }
  else
  {
    v28 = *(_QWORD *)v5;
    CurrentThread = KeGetCurrentThread();
    v35 = v28;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v28 + 40, 0LL);
    v10 = v33;
    v4 = 0LL;
  }
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  v37 = v12;
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
      v29 = MiDecrementSubsections((ULONG_PTR)v10, (__int64)v10, 8u);
LABEL_72:
      v9 = v29;
LABEL_28:
      v14 = v38;
      goto LABEL_16;
    }
    if ( v6 == 2 )
    {
      v29 = MiDecrementSubsectionViewCount((ULONG_PTR)v10, 24);
      goto LABEL_72;
    }
LABEL_73:
    v14 = 0;
    goto LABEL_16;
  }
  MiGetProtoPteAddress(
    a1,
    *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
    3u,
    &v34);
  v16 = v10;
  while ( !a2 )
  {
    v9 += MiDecrementSubsections((ULONG_PTR)v10, (__int64)v10, 8u);
LABEL_27:
    v4 = (__int64)v16;
    if ( v16 != v34 )
    {
      v16 = (__int64 *)v16[2];
      if ( v16 )
        continue;
    }
    goto LABEL_28;
  }
  active = MiReferenceActiveSubsection(v16, 8, v37);
  v38 = active;
  if ( active >= 0 )
    goto LABEL_27;
  if ( v4 )
  {
    v9 += MiDecrementSubsections((ULONG_PTR)v10, v4, 8u);
    goto LABEL_28;
  }
LABEL_15:
  v14 = active;
LABEL_16:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  __writecr8(v37);
  if ( v9 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)), v32, v9);
  if ( !*(_QWORD *)(v5 + 64) )
  {
    v17 = v35 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v17);
    v39 = 0;
    v18 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v18->ApcState.Process);
    else
      SessionId = -1;
    --v18->SpecialApcDisable;
    v20 = ++v18->AbAllocationRegionCount;
    v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v22, v21);
      if ( v8 )
        break;
      v23 = 1 << v22;
      v24 = v22;
      v25 = &v18->LockEntries[v24];
      v21 &= ~v23;
      if ( (v25->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v25->LockState.0 & 1) == 0
        && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
        && v25->LockState.SessionId == SessionId )
      {
        v25->AcquiredByte &= ~1u;
        if ( v25->LockState.0 )
        {
          if ( v25 )
          {
            v25->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v25->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v18->LockEntries[v24].TreeNode);
            v39 = 0;
            v39 = v25->BoostBitmap.AllFields & 0x1FFFF;
            v25->BoostBitmap.AllFields &= 0xFFFE0000;
            v25->ThreadLocalFlags &= ~1u;
            v25->LockState.0 = 0LL;
            v26 = ((char *)v25 - (char *)v18 - 800) / 96;
            if ( v20 == 1 )
              v18->AbEntrySummary |= 1 << v26;
            else
              _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v26);
            goto LABEL_46;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, v17, SessionId, 0LL);
LABEL_46:
    --v18->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v18, v17, (unsigned int *)&v39);
    v8 = v18->SpecialApcDisable++ == -1;
    if ( v8 && ($B476B70DB57F76B110DA5B9238C3E934 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery(v27);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v30 == 1 )
    MiUnlockNestedVad(a1);
  if ( v14 < 0 && v31 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 92));
  return (unsigned int)v14;
}
