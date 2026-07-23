/*
 * XREFs of MmAssignProcessToJob @ 0x1400D43A8
 * Callers:
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14050CBD0 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     PsChangeJobMemoryUsage @ 0x1404961D4 (PsChangeJobMemoryUsage.c)
 *     MiUnlockVadRange @ 0x1405405F8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140540730 (MiLockVadRange.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  int v2; // r15d
  __int64 v4; // r13
  __int64 v5; // rdx
  unsigned __int8 v6; // r12
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rdi
  __int64 v15; // rdx
  unsigned __int8 v17; // [rsp+30h] [rbp-88h]
  unsigned int v18[3]; // [rsp+34h] [rbp-84h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v19; // [rsp+40h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v19);
  }
  v4 = MiLockVadRange(a1, -1LL, -1LL);
  if ( v4 || (*(_DWORD *)(a1 + 1740) & 1) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 880, 0LL);
    v5 = *(_QWORD *)(a1 + 1264);
    *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 944);
    v6 = PsChangeJobMemoryUsage(20LL, v5, a1);
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x10u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 880));
    v18[0] = 0;
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 880) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      SessionId = -1;
    --v7->SpecialApcDisable;
    v17 = ++v7->AbAllocationRegionCount;
    v9 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v10 = !_BitScanReverse((unsigned int *)&v11, v9);
      v18[1] = v11;
      if ( v10 )
        break;
      v12 = 1 << v11;
      v13 = v11;
      v14 = &v7->LockEntries[v13];
      v9 &= ~v12;
      if ( (v14->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v14->LockState.0 & 1) == 0
        && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 880) & 0x7FFFFFFFFFFFFFFCLL)
        && v14->LockState.SessionId == SessionId )
      {
        v14->AcquiredByte &= ~1u;
        if ( v14->LockState.0 )
        {
          if ( v14 )
          {
            v14->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v14->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v7->LockEntries[v13].TreeNode);
            v18[0] = 0;
            v18[0] = v14->BoostBitmap.AllFields & 0x1FFFF;
            v14->BoostBitmap.AllFields &= 0xFFFE0000;
            v14->ThreadLocalFlags &= ~1u;
            v14->LockState.0 = 0LL;
            v15 = ((char *)v14 - (char *)v7 - 800) / 96;
            if ( v17 == 1 )
              v7->AbEntrySummary |= 1 << v15;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v15);
            goto LABEL_20;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, a1 + 880, SessionId, 0LL);
LABEL_20:
    --v7->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v7, a1 + 880, v18);
    v10 = v7->SpecialApcDisable++ == -1;
    if ( v10 && ($B476B70DB57F76B110DA5B9238C3E934 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    v6 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v4);
  if ( v2 )
    KiUnstackDetachProcess(&v19, 0LL);
  return v6;
}
