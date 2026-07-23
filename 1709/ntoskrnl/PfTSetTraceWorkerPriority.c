/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x1402399C8
 * Callers:
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PfSetSuperfetchInformation @ 0x14043E10C (PfSetSuperfetchInformation.c)
 *     PfpLogScenarioEvent @ 0x1406F268C (PfpLogScenarioEvent.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(unsigned int Priority)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // bp
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  _KLOCK_ENTRY *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h]

  if ( Priority > 0x1F )
  {
    return 32;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
    if ( Thread )
      v3 = KeSetPriorityThread(Thread, Priority);
    else
      v3 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    v16 = 0;
    v4 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PfTGlobals) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    --v4->SpecialApcDisable;
    v6 = ++v4->AbAllocationRegionCount;
    v7 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v7);
      v17 = v12;
      if ( v11 )
        goto LABEL_17;
      v8 = 1 << v12;
      v9 = v12;
      v10 = &v4->LockEntries[v9];
      v7 &= ~v8;
      if ( (v10->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v10->LockState.0 & 1) == 0
        && (*(_QWORD *)&v10->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PfTGlobals & 0x7FFFFFFFFFFFFFFCLL)
        && v10->LockState.SessionId == SessionId )
      {
        v10->AcquiredByte &= ~1u;
        if ( v10->LockState.0 )
          break;
      }
    }
    if ( !v10 )
    {
LABEL_17:
      if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v4, (ULONG_PTR)&PfTGlobals, SessionId, 0LL);
      goto LABEL_24;
    }
    v10->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v10->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v4->LockEntries[v9].TreeNode);
    v16 = 0;
    v16 = v10->BoostBitmap.AllFields & 0x1FFFF;
    v10->BoostBitmap.AllFields &= 0xFFFE0000;
    v10->ThreadLocalFlags &= ~1u;
    v10->LockState.0 = 0LL;
    v13 = ((char *)v10 - (char *)v4 - 800) / 96;
    if ( v6 == 1 )
      v4->AbEntrySummary |= 1 << v13;
    else
      _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v13);
LABEL_24:
    --v4->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&PfTGlobals, (unsigned int *)&v16);
    v11 = v4->SpecialApcDisable++ == -1;
    if ( v11 && ($B476B70DB57F76B110DA5B9238C3E934 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
      KiCheckForKernelApcDelivery(v14);
    KeLeaveCriticalRegion();
  }
  return v3;
}
