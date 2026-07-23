/*
 * XREFs of MiIncrementLargeSubsections @ 0x14025DC18
 * Callers:
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x14074E2D4 (MiCloneLargeFileOnlyVad.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiDecrementLargeSubsections @ 0x14025D3E0 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14025D860 (MiEnableLargeSubsection.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *v22; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v24; // r14
  unsigned int v25; // r8d
  int v26; // eax
  __int64 v27; // rcx
  _KLOCK_ENTRY *v28; // rdi
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // rdx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-48h]
  int v35; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

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
      v17 = MiEnableLargeSubsection(v3, v14, v15, v16);
      ExAcquireSpinLockExclusive(v8);
      if ( !v17 )
      {
        --*(_DWORD *)(v3 + 108);
        break;
      }
    }
    v5 = (volatile LONG **)v3;
    if ( a2 )
    {
      v18 = *(unsigned int *)(v3 + 44);
      if ( a2 <= v18 )
        goto LABEL_13;
      a2 -= v18;
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
    ExfTryToWakePushLock((volatile signed __int64 *)v7, v19, v20, v21);
  v35 = 0;
  v22 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v22->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v22->SpecialApcDisable;
  v24 = ++v22->AbAllocationRegionCount;
  v25 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v29 = !_BitScanReverse((unsigned int *)&v30, v25);
    v36 = v30;
    if ( v29 )
      goto LABEL_25;
    v26 = 1 << v30;
    v27 = v30;
    v28 = &v22->LockEntries[v27];
    v25 &= ~v26;
    if ( (v28->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v28->LockState.0 & 1) == 0
      && (*(_QWORD *)&v28->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v28->LockState.SessionId == (_DWORD)SessionId )
    {
      v28->AcquiredByte &= ~1u;
      if ( v28->LockState.0 )
        break;
    }
  }
  if ( !v28 )
  {
LABEL_25:
    if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v22, v7, (unsigned int)SessionId, 0LL);
    goto LABEL_32;
  }
  v28->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v28->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v22->LockEntries[v27].TreeNode, SessionId);
  v35 = 0;
  v35 = v28->BoostBitmap.AllFields & 0x1FFFF;
  v28->BoostBitmap.AllFields &= 0xFFFE0000;
  v28->ThreadLocalFlags &= ~1u;
  v28->LockState.0 = 0LL;
  v31 = ((char *)v28 - (char *)v22 - 800) / 96;
  if ( v24 == 1 )
    v22->AbEntrySummary |= 1 << v31;
  else
    _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v31);
LABEL_32:
  --v22->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v22, v7, (__int64)&v35);
  v29 = v22->SpecialApcDisable++ == -1;
  if ( v29 && ($005F0E83B22994B61E86C72E0CE43C71 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v12 == -1 && v5 )
    MiDecrementLargeSubsections(a1, v5);
  return v12;
}
