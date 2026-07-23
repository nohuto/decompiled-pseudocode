/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x1402239A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiWsSwapPageFileNumber @ 0x14007D3A8 (MiWsSwapPageFileNumber.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  volatile signed __int64 *v7; // r15
  KIRQL v8; // di
  _QWORD *v9; // rdx
  __int64 v10; // r9
  struct _KTHREAD *v11; // rbx
  __int64 SessionId; // rdx
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // rdi
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 result; // rax
  _QWORD v23[18]; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int8 v24; // [rsp+D0h] [rbp+67h]
  int v25; // [rsp+D8h] [rbp+6Fh] BYREF
  int v26; // [rsp+E0h] [rbp+77h]

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 5600);
  memset(v23, 0, 0x60uLL);
  v23[3] = a1;
  v23[4] = -1LL;
  v6 = *(_BYTE *)(v5 + 204) & 0xF;
  v23[5] = 0x10000LL;
  BYTE4(v23[9]) = v6;
  v23[8] = &v23[7];
  v23[7] = &v23[7];
  LOWORD(v23[6]) = 0;
  BYTE2(v23[6]) = 6;
  HIDWORD(v23[6]) = 0;
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 1160);
  ExAcquirePushLockExclusiveEx(a1 + 1160, 0LL);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v9 = *(_QWORD **)(a1 + 1464);
  if ( *v9 != a1 + 1456 )
    __fastfail(3u);
  v23[1] = a1 + 1456;
  v23[2] = v9;
  *v9 = &v23[1];
  *(_QWORD *)(a1 + 1464) = &v23[1];
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
  __writecr8(v8);
  KeReleaseSemaphoreEx(a1 + 1424, 0, 1, v10, 1);
  KeWaitForSingleObject(&v23[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1160));
  v25 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1160) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v11->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v11->SpecialApcDisable;
  v24 = ++v11->AbAllocationRegionCount;
  v13 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v18, v13);
    v26 = v18;
    if ( v17 )
      goto LABEL_15;
    v14 = 1 << v18;
    v15 = v18;
    v16 = &v11->LockEntries[v15];
    v13 &= ~v14;
    if ( (v16->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v16->LockState.0 & 1) == 0
      && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v16->LockState.SessionId == (_DWORD)SessionId )
    {
      v16->AcquiredByte &= ~1u;
      if ( v16->LockState.0 )
        break;
    }
  }
  if ( !v16 )
  {
LABEL_15:
    if ( (*((_DWORD *)&v11->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v11, a1 + 1160, (unsigned int)SessionId, 0LL);
    goto LABEL_22;
  }
  v16->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v16->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v11->LockEntries[v15].TreeNode, SessionId);
  v25 = 0;
  v25 = v16->BoostBitmap.AllFields & 0x1FFFF;
  v16->BoostBitmap.AllFields &= 0xFFFE0000;
  v16->ThreadLocalFlags &= ~1u;
  v16->LockState.0 = 0LL;
  v19 = ((char *)v16 - (char *)v11 - 800) / 96;
  if ( v24 == 1 )
    v11->AbEntrySummary |= 1 << v19;
  else
    _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v19);
LABEL_22:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v11->Header.Lock, a1 + 1160, (unsigned int *)&v25);
  v21 = v11->SpecialApcDisable + 1;
  v11->SpecialApcDisable = v21;
  if ( !v21 && ($69CD3F157F9F39B6F7113F2231989901 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v20);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  _InterlockedExchange((volatile __int32 *)(a1 + 1152), 0);
  return result;
}
