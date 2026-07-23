/*
 * XREFs of MiIncrementLargeSubsections @ 0x140223008
 * Callers:
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x1406E3EE8 (MiCloneLargeFileOnlyVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiDecrementLargeSubsections @ 0x140222780 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x140222C04 (MiEnableLargeSubsection.c)
 */

__int64 __fastcall MiIncrementLargeSubsections(volatile LONG **a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbx
  __int64 v3; // rdi
  volatile LONG **v5; // r13
  __int64 v6; // rbp
  ULONG_PTR v7; // rbp
  volatile LONG *v8; // r15
  KIRQL v9; // r12
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  int v14; // ebx
  unsigned __int64 v15; // rax
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r14
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-48h]
  int v30; // [rsp+90h] [rbp+18h] BYREF
  int v31; // [rsp+98h] [rbp+20h]

  v2 = *a1;
  v3 = (__int64)a1;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)*a1;
  --CurrentThread->SpecialApcDisable;
  v7 = v6 + 40;
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  v8 = v2 + 18;
  v9 = ExAcquireSpinLockExclusive(v2 + 18);
  while ( 1 )
  {
    v10 = *(_DWORD *)(v3 + 48) >> 30;
    if ( !v10 )
      break;
    v11 = *(_DWORD *)(v3 + 108);
    v12 = v10 == 1;
    if ( v11 == -1 )
      break;
    v13 = v11 + 1;
    *(_DWORD *)(v3 + 108) = v13;
    if ( v13 == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      __writecr8(v9);
      v14 = MiEnableLargeSubsection(v3);
      ExAcquireSpinLockExclusive(v8);
      if ( !v14 )
      {
        --*(_DWORD *)(v3 + 108);
        break;
      }
    }
    v5 = (volatile LONG **)v3;
    if ( a2 )
    {
      v15 = *(unsigned int *)(v3 + 44);
      if ( a2 <= v15 )
        goto LABEL_13;
      a2 -= v15;
    }
    v3 = *(_QWORD *)(v3 + 16);
    if ( !v3 )
      goto LABEL_13;
  }
  v12 = -1;
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  __writecr8(v9);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  v30 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  else
    SessionId = -1;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount;
  v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v23 = !_BitScanReverse((unsigned int *)&v24, v19);
    v31 = v24;
    if ( v23 )
      goto LABEL_25;
    v20 = 1 << v24;
    v21 = v24;
    v22 = &v16->LockEntries[v21];
    v19 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
        break;
    }
  }
  if ( !v22 )
  {
LABEL_25:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v7, SessionId, 0LL);
    goto LABEL_32;
  }
  v22->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v22->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v16->LockEntries[v21].TreeNode);
  v30 = 0;
  v30 = v22->BoostBitmap.AllFields & 0x1FFFF;
  v22->BoostBitmap.AllFields &= 0xFFFE0000;
  v22->ThreadLocalFlags &= ~1u;
  v22->LockState.0 = 0LL;
  v25 = ((char *)v22 - (char *)v16 - 800) / 96;
  if ( v18 == 1 )
    v16->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
LABEL_32:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v7, (unsigned int *)&v30);
  v23 = v16->SpecialApcDisable++ == -1;
  if ( v23 && ($B476B70DB57F76B110DA5B9238C3E934 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery(v26);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v12 == -1 && v5 )
    MiDecrementLargeSubsections(a1, v5);
  return v12;
}
