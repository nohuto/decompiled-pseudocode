/*
 * XREFs of MiIncrementLargeSubsections @ 0x140218D2C
 * Callers:
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiDecrementLargeSubsections @ 0x1402184D4 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x140218958 (MiEnableLargeSubsection.c)
 */

__int64 __fastcall MiIncrementLargeSubsections(volatile LONG **a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // r14
  ULONG_PTR v6; // r14
  volatile LONG *v7; // r12
  KIRQL v8; // r13
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // ebx
  unsigned __int64 v14; // rax
  struct _KTHREAD *v15; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v17; // r15
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // ax
  volatile LONG **v28; // [rsp+30h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-40h]
  int v31; // [rsp+90h] [rbp+18h] BYREF
  int v32; // [rsp+98h] [rbp+20h]

  v2 = *a1;
  v3 = (__int64)a1;
  v28 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)*a1;
  --CurrentThread->SpecialApcDisable;
  v6 = v5 + 40;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  v7 = v2 + 18;
  v8 = ExAcquireSpinLockExclusive(v2 + 18);
  while ( 1 )
  {
    v9 = *(_DWORD *)(v3 + 48);
    if ( v9 < 0x40000000 )
      break;
    v10 = *(_DWORD *)(v3 + 108);
    v11 = (v9 & 0xC0000000) == 0x40000000;
    if ( v10 == -1 )
      break;
    v12 = v10 + 1;
    *(_DWORD *)(v3 + 108) = v12;
    if ( v12 == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      __writecr8(v8);
      v13 = MiEnableLargeSubsection(v3);
      ExAcquireSpinLockExclusive(v7);
      if ( !v13 )
      {
        --*(_DWORD *)(v3 + 108);
        goto LABEL_13;
      }
    }
    v28 = (volatile LONG **)v3;
    if ( a2 )
    {
      v14 = *(unsigned int *)(v3 + 44);
      if ( a2 <= v14 )
        goto LABEL_13;
      a2 -= v14;
    }
    v3 = *(_QWORD *)(v3 + 16);
    if ( !v3 )
      goto LABEL_13;
  }
  v11 = -1;
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  __writecr8(v8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  v31 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v15->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v15->SpecialApcDisable;
  v17 = ++v15->AbAllocationRegionCount;
  v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v22 = !_BitScanReverse((unsigned int *)&v23, v18);
    v32 = v23;
    if ( v22 )
      goto LABEL_25;
    v19 = 1 << v23;
    v20 = v23;
    v21 = &v15->LockEntries[v20];
    v18 &= ~v19;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == (_DWORD)SessionId )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
        break;
    }
  }
  if ( !v21 )
  {
LABEL_25:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v6, (unsigned int)SessionId, 0LL);
    goto LABEL_32;
  }
  v21->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v21->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v15->LockEntries[v20].TreeNode, SessionId);
  v31 = 0;
  v31 = v21->BoostBitmap.AllFields & 0x1FFFF;
  v21->BoostBitmap.AllFields &= 0xFFFE0000;
  v21->ThreadLocalFlags &= ~1u;
  v21->LockState.0 = 0LL;
  v24 = ((char *)v21 - (char *)v15 - 800) / 96;
  if ( v17 == 1 )
    v15->AbEntrySummary |= 1 << v24;
  else
    _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v24);
LABEL_32:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v15->Header.Lock, v6, (unsigned int *)&v31);
  v26 = v15->SpecialApcDisable + 1;
  v15->SpecialApcDisable = v26;
  if ( !v26 && ($69CD3F157F9F39B6F7113F2231989901 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v25);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v11 == -1 && v28 )
    MiDecrementLargeSubsections(a1, v28);
  return v11;
}
