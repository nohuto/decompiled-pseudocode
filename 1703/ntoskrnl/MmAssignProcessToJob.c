/*
 * XREFs of MmAssignProcessToJob @ 0x14011D7EC
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140546C9C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140519510 (PspChangeJobMemoryUsageByProcess.c)
 *     MiUnlockVadRange @ 0x14054B6D0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14054B808 (MiLockVadRange.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // rdx
  struct _KTHREAD *v6; // rbx
  __int64 SessionId; // rdx
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int16 v16; // ax
  unsigned __int8 v17; // bl
  unsigned __int8 AbAllocationRegionCount; // [rsp+30h] [rbp-78h]
  unsigned __int8 v20; // [rsp+31h] [rbp-77h]
  int v21; // [rsp+34h] [rbp-74h] BYREF
  int v22; // [rsp+38h] [rbp-70h]
  $5BC46E0569261879018906DEC3127961 v23; // [rsp+40h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v3 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v23);
  }
  v4 = MiLockVadRange(a1, -1LL, -1LL);
  if ( v4 || (*(_DWORD *)(a1 + 1740) & 1) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 880, 0LL);
    v5 = *(_QWORD *)(a1 + 1264);
    *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 944);
    v20 = PspChangeJobMemoryUsageByProcess(20LL, v5, KeGetCurrentThread()->ApcState.Process);
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x10u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 880));
    v21 = 0;
    v6 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 880) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v6->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v6->SpecialApcDisable;
    ++v6->AbAllocationRegionCount;
    v8 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
    AbAllocationRegionCount = v6->AbAllocationRegionCount;
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    v22 = v10;
    if ( v9 )
      goto LABEL_28;
    while ( 1 )
    {
      v11 = 1 << v10;
      v12 = v10;
      v13 = &v6->LockEntries[v12];
      v8 &= ~v11;
      if ( (v13->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v13->LockState.0 & 1) == 0
        && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 880) & 0x7FFFFFFFFFFFFFFCLL)
        && v13->LockState.SessionId == (_DWORD)SessionId )
      {
        v13->AcquiredByte &= ~1u;
        if ( v13->LockState.0 )
          break;
      }
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      v22 = v10;
      if ( v9 )
        goto LABEL_28;
    }
    if ( !v13 )
    {
LABEL_28:
      if ( (*((_DWORD *)&v6->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v6, a1 + 880, (unsigned int)SessionId, 0LL);
    }
    else
    {
      v13->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v13->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v6->LockEntries[v12].TreeNode, SessionId);
      v21 = 0;
      v21 = v13->BoostBitmap.AllFields & 0x1FFFF;
      v13->BoostBitmap.AllFields &= 0xFFFE0000;
      v13->ThreadLocalFlags &= ~1u;
      v13->LockState.0 = 0LL;
      v14 = ((char *)v13 - (char *)v6 - 800) / 96;
      if ( AbAllocationRegionCount == 1 )
        v6->AbEntrySummary |= 1 << v14;
      else
        _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v14);
    }
    --v6->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(&v6->Header.Lock, a1 + 880, (unsigned int *)&v21);
    v16 = v6->SpecialApcDisable + 1;
    v6->SpecialApcDisable = v16;
    if ( !v16 && ($69CD3F157F9F39B6F7113F2231989901 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
      KiCheckForKernelApcDelivery(v15);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v17 = v20;
  }
  else
  {
    v17 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v4);
  if ( v3 )
    KiUnstackDetachProcess(&v23, 0LL);
  return v17;
}
