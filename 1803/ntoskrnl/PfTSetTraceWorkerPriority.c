/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x14014F258
 * Callers:
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PfSetSuperfetchInformation @ 0x14048DBD0 (PfSetSuperfetchInformation.c)
 *     PfpLogScenarioEvent @ 0x1405EC760 (PfpLogScenarioEvent.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(unsigned int Priority)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // esi
  struct _KTHREAD *v7; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v9; // bp
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  __int64 v16; // rdx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h]

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
      v6 = KeSetPriorityThread(Thread, Priority);
    else
      v6 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals, v3, v4, v5);
    v18 = 0;
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PfTGlobals) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v7->SpecialApcDisable;
    v9 = ++v7->AbAllocationRegionCount;
    v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v10);
      v19 = v12;
      if ( v11 )
        break;
      v13 = 1 << v12;
      v14 = v12;
      v15 = &v7->LockEntries[v14];
      v10 &= ~v13;
      if ( (v15->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v15->LockState.0 & 1) == 0
        && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PfTGlobals & 0x7FFFFFFFFFFFFFFCLL)
        && v15->LockState.SessionId == (_DWORD)SessionId )
      {
        v15->AcquiredByte &= ~1u;
        if ( v15->LockState.0 )
        {
          if ( v15 )
          {
            v15->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v15->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v7->LockEntries[v14].TreeNode, SessionId);
            v18 = 0;
            v18 = v15->BoostBitmap.AllFields & 0x1FFFF;
            v15->BoostBitmap.AllFields &= 0xFFFE0000;
            v15->ThreadLocalFlags &= ~1u;
            v15->LockState.0 = 0LL;
            v16 = ((char *)v15 - (char *)v7 - 800) / 96;
            if ( v9 == 1 )
              v7->AbEntrySummary |= 1 << v16;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
            goto LABEL_20;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&PfTGlobals, (unsigned int)SessionId, 0LL);
LABEL_20:
    --v7->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&PfTGlobals, (__int64)&v18);
    v11 = v7->SpecialApcDisable++ == -1;
    if ( v11 && ($005F0E83B22994B61E86C72E0CE43C71 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegion();
  }
  return v6;
}
