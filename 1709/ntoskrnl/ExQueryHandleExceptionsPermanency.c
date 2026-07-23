/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x14015BB34
 * Callers:
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     ObpCloseHandle @ 0x1404D4BEC (ObpCloseHandle.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, bool *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  struct _KTHREAD *v9; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // bp
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+20h]

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
  v21 = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    v22 = v14;
    if ( v13 )
      break;
    v15 = 1 << v14;
    v16 = v14;
    v17 = &v9->LockEntries[v16];
    v12 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
      {
        if ( v17 )
        {
          v17->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v17->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v9->LockEntries[v16].TreeNode);
          v21 = 0;
          v21 = v17->BoostBitmap.AllFields & 0x1FFFF;
          v17->BoostBitmap.AllFields &= 0xFFFE0000;
          v17->ThreadLocalFlags &= ~1u;
          v17->LockState.0 = 0LL;
          v18 = ((char *)v17 - (char *)v9 - 800) / 96;
          if ( v11 == 1 )
            v9->AbEntrySummary |= 1 << v18;
          else
            _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v18);
          goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, v7, SessionId, 0LL);
LABEL_20:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, v7, (unsigned int *)&v21);
  v13 = v9->SpecialApcDisable++ == -1;
  if ( v13 && ($B476B70DB57F76B110DA5B9238C3E934 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v19);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
