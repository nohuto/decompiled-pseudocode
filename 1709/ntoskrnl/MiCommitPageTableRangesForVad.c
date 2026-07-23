/*
 * XREFs of MiCommitPageTableRangesForVad @ 0x14012099C
 * Callers:
 *     MiInsertChildVads @ 0x14057B0BC (MiInsertChildVads.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiCommitPageTableRangesForVad(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // r12d
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rsi
  ULONG_PTR v7; // rsi
  _QWORD *v8; // rbp
  __int64 i; // rdi
  unsigned __int64 v10; // rdx
  struct _KTHREAD *v11; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v13; // bp
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD **)(a1 + 8);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)(a1 + 16) = 1LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  do
  {
    v8 = (_QWORD *)*v1;
    if ( v2 >= 0 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v1 + 2); i = (unsigned int)(i + 1) )
      {
        v10 = v1[i + 2] & 0xFFFFFFFFFFE00000uLL;
        v2 = MiCommitPageTablesForVad(a1, v10, v10 + ((v1[i + 2] & 0x1FFFFFLL) << 21) + 0x1FFFFF);
        if ( v2 < 0 )
          break;
      }
    }
    ExFreePoolWithTag(v1, 0);
    v1 = v8;
  }
  while ( v8 );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  v22 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
  else
    SessionId = -1;
  --v11->SpecialApcDisable;
  v13 = ++v11->AbAllocationRegionCount;
  v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v14);
    v23 = v16;
    if ( v15 )
      break;
    v17 = 1 << v16;
    v18 = v16;
    v19 = &v11->LockEntries[v18];
    v14 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
      {
        if ( v19 )
        {
          v19->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v19->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v11->LockEntries[v18].TreeNode);
          v22 = 0;
          v22 = v19->BoostBitmap.AllFields & 0x1FFFF;
          v19->BoostBitmap.AllFields &= 0xFFFE0000;
          v19->ThreadLocalFlags &= ~1u;
          v19->LockState.0 = 0LL;
          v20 = ((char *)v19 - (char *)v11 - 800) / 96;
          if ( v13 == 1 )
            v11->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v20);
          goto LABEL_25;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v11, v7, SessionId, 0LL);
LABEL_25:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11, v7, (unsigned int *)&v22);
  v15 = v11->SpecialApcDisable++ == -1;
  if ( v15 && ($B476B70DB57F76B110DA5B9238C3E934 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v21);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  result = (unsigned int)v2;
  *(_QWORD *)(a1 + 16) = -2LL;
  return result;
}
