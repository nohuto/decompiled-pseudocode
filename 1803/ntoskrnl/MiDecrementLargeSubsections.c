/*
 * XREFs of MiDecrementLargeSubsections @ 0x14025D3E0
 * Callers:
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiIncrementLargeSubsections @ 0x14025DC18 (MiIncrementLargeSubsections.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x14074E2D4 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementLargeSubsections(volatile LONG **a1, volatile LONG **a2)
{
  volatile LONG *v2; // rbx
  volatile LONG **v3; // rdi
  volatile LONG **v4; // r12
  __int64 v5; // rsi
  volatile LONG *v6; // r14
  KIRQL v7; // r13
  int v8; // eax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rsi
  struct _KTHREAD *v17; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v19; // bp
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rdi
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+90h] [rbp+8h] BYREF
  volatile LONG **v30; // [rsp+98h] [rbp+10h]
  int v31; // [rsp+A0h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+20h]

  v30 = a2;
  v2 = *a1;
  v3 = a1;
  v4 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)*a1;
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v5 + 40;
  ExAcquirePushLockExclusiveEx(v5 + 40, 0LL);
  v6 = v2 + 18;
  v7 = ExAcquireSpinLockExclusive(v2 + 18);
  while ( 1 )
  {
    v8 = *((_DWORD *)v3 + 27);
    if ( v8 == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      __writecr8(2uLL);
      v9 = *((unsigned int *)v3 + 11);
      v10 = (unsigned __int64)v3[1];
      if ( (_DWORD)v9 )
      {
        v11 = (unsigned int)v9;
        do
        {
          v12 = MiLockLeafPage(v10, 0);
          MiDecrementShareCount(v12);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KeShouldYieldProcessor() )
          {
            __writecr8(v7);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          v10 += 8LL;
          --v11;
        }
        while ( v11 );
        v4 = v30;
      }
      MiReturnResidentAvailable(v9 >> 9);
      ExAcquireSpinLockExclusive(v6);
      v8 = *((_DWORD *)v3 + 27);
    }
    *((_DWORD *)v3 + 27) = v8 - 1;
    if ( v3 == v4 )
      break;
    v3 = (volatile LONG **)v3[2];
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  __writecr8(v7);
  v16 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v16, v13, v14, v15);
  v29 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v16) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v17->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v17->SpecialApcDisable;
  v19 = ++v17->AbAllocationRegionCount;
  v20 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v24 = !_BitScanReverse((unsigned int *)&v25, v20);
    v31 = v25;
    if ( v24 )
      goto LABEL_24;
    v21 = 1 << v25;
    v22 = v25;
    v23 = &v17->LockEntries[v22];
    v20 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == (_DWORD)SessionId )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
        break;
    }
  }
  if ( !v23 )
  {
LABEL_24:
    if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, v16, (unsigned int)SessionId, 0LL);
    goto LABEL_31;
  }
  v23->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v23->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v17->LockEntries[v22].TreeNode, SessionId);
  v29 = 0;
  v29 = v23->BoostBitmap.AllFields & 0x1FFFF;
  v23->BoostBitmap.AllFields &= 0xFFFE0000;
  v23->ThreadLocalFlags &= ~1u;
  v23->LockState.0 = 0LL;
  v26 = ((char *)v23 - (char *)v17 - 800) / 96;
  if ( v19 == 1 )
    v17->AbEntrySummary |= 1 << v26;
  else
    _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v26);
LABEL_31:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, v16, (__int64)&v29);
  v24 = v17->SpecialApcDisable++ == -1;
  if ( v24 && ($005F0E83B22994B61E86C72E0CE43C71 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
