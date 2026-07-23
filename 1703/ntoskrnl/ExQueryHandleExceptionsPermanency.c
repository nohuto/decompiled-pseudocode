/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x14025A5F4
 * Callers:
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     ObpCloseHandle @ 0x1404F9CCC (ObpCloseHandle.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, bool *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  struct _KTHREAD *v9; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v11; // r14
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // ax
  int v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    *a2 = 1;
    *a3 = (*(_BYTE *)(v8 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    *a3 = 1;
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  v22 = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v9->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v12);
    v23 = v17;
    if ( v16 )
      goto LABEL_18;
    v13 = 1 << v17;
    v14 = v17;
    v15 = &v9->LockEntries[v14];
    v12 &= ~v13;
    if ( (v15->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v15->LockState.0 & 1) == 0
      && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v15->LockState.SessionId == (_DWORD)SessionId )
    {
      v15->AcquiredByte &= ~1u;
      if ( v15->LockState.0 )
        break;
    }
  }
  if ( !v15 )
  {
LABEL_18:
    if ( (*((_DWORD *)&v9->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v9, v7, (unsigned int)SessionId, 0LL);
    goto LABEL_25;
  }
  v15->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v15->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v9->LockEntries[v14].TreeNode, SessionId);
  v22 = 0;
  v22 = v15->BoostBitmap.AllFields & 0x1FFFF;
  v15->BoostBitmap.AllFields &= 0xFFFE0000;
  v15->ThreadLocalFlags &= ~1u;
  v15->LockState.0 = 0LL;
  v18 = ((char *)v15 - (char *)v9 - 800) / 96;
  if ( v11 == 1 )
    v9->AbEntrySummary |= 1 << v18;
  else
    _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v18);
LABEL_25:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v9->Header.Lock, v7, (unsigned int *)&v22);
  v20 = v9->SpecialApcDisable + 1;
  v9->SpecialApcDisable = v20;
  if ( !v20 && ($69CD3F157F9F39B6F7113F2231989901 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v19);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
