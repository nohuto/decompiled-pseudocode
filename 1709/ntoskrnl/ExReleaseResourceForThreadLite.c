/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x14007D110
 * Callers:
 *     CcUnpinDataForThread @ 0x140687650 (CcUnpinDataForThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpFindCurrentThread @ 0x140080790 (ExpFindCurrentThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     ExpFreeOwnerEntry @ 0x140112FB0 (ExpFreeOwnerEntry.c)
 *     ExpPrepareToWakeResourceShared @ 0x140113C80 (ExpPrepareToWakeResourceShared.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     ExpFastResourceLegacyRelease @ 0x1401400C4 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceRelease @ 0x14027E788 (PerfLogExecutiveResourceRelease.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  __int16 v4; // ax
  char v5; // al
  __int64 v6; // rdx
  struct _KTHREAD *v7; // r8
  USHORT Flag; // cx
  bool v9; // r14
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // r15d
  ULONG ContentionCount; // r12d
  __int64 Next; // rax
  unsigned int v17; // esi
  unsigned int WaiterPriority; // r15d
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  ULONG v21; // eax
  _BYTE v22[8]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v23[8]; // [rsp+38h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+20h]
  unsigned __int8 v26; // [rsp+A0h] [rbp+38h] BYREF
  char v27; // [rsp+A8h] [rbp+40h] BYREF

  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v4 = Resource->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v4 )
  {
    v26 = 2;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v5 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, &Resource->SpinLock, &v26);
    }
    else
    {
      v5 = 0;
      v6 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&LockHandle);
      if ( v6 )
      {
        KxWaitForLockOwnerShipWithIrql(&LockHandle, v6, &v26);
        v5 = 1;
      }
    }
    if ( v5 )
    {
      _disable();
      __writecr8(v26);
    }
    v7 = KeGetCurrentThread();
    Flag = Resource->Flag;
    if ( ((Flag & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (ResourceThreadId & 3) != 3
      && (struct _KTHREAD *)ResourceThreadId != v7 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v7, ResourceThreadId, 0LL);
    }
    if ( (Flag & 0x80u) != 0 )
    {
      ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
      return;
    }
    v9 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    if ( (ResourceThreadId & 3) != 0 )
      v10 = 0;
    else
      v10 = *(unsigned __int8 *)(ResourceThreadId + 649);
    v11 = ExpFindCurrentThread((_DWORD)Resource, ResourceThreadId, (unsigned int)&LockHandle, 0, 0, v10);
    if ( !v11 )
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, ResourceThreadId, (ULONG_PTR)Resource->OwnerTable, 2uLL);
    v12 = *(_DWORD *)(v11 + 8) & 7 | (8 * (*(_DWORD *)(v11 + 8) >> 3) - 8);
    *(_DWORD *)(v11 + 8) = v12;
    v13 = v12 >> 3;
    if ( !v13 )
    {
      ExpFreeOwnerEntry(v11);
      ContentionCount = Resource->ContentionCount;
      ExpPrepareToWakeResourceShared(Resource, v23, &v27, v22);
      if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
        Resource->Flag &= 0xF9u;
      v17 = 1;
      WaiterPriority = Resource->WaiterPriority;
      if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
      {
        v21 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = 1LL;
        Resource->OwnerEntry.TableSize = v21 | 8;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      if ( v27 )
        v17 = 3;
      KeWakeWaitChain(v23, WaiterPriority, v17);
      v14 = 65602;
      v13 = 0;
      goto LABEL_20;
    }
    v14 = 65618;
    ContentionCount = Resource->ContentionCount;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_19;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_19:
        _enable();
LABEL_20:
        __incgsdword(0x6370u);
        if ( v9 )
          PerfLogExecutiveResourceRelease(v14, Resource, v13, ContentionCount);
        return;
      }
      Next = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_19;
  }
  if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
    KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
  ExpFastResourceLegacyRelease(Resource);
}
