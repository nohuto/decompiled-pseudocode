/*
 * XREFs of AlpciSendDeferredMessageBeforeWait @ 0x14006AB80
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011DF30 (AlpcpQueueIoCompletionPort.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpciSendDeferredMessageBeforeWait(
        _QWORD *a1,
        void *a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v11; // r15
  unsigned int v12; // edi
  NTSTATUS v13; // ebx
  signed __int32 v14; // ebx
  _QWORD *v15; // r14
  signed __int32 v16; // ebx
  _QWORD *v17; // rcx
  PVOID v18; // rax
  struct _KTHREAD *v19; // rax
  bool v20; // zf
  void *v22; // rdi
  ULONG_PTR v23; // r13
  struct _KEVENT *v24; // rcx
  struct _KTHREAD *v25; // rbx
  unsigned int SessionId; // edx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  _KLOCK_ENTRY *v31; // r14
  __int64 v32; // rdx
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PVOID v34[8]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+C0h] [rbp+40h]

  memset(v34, 0, sizeof(v34));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = a6;
  *a1 = 0LL;
  a1[1] = 0LL;
  v12 = a3 & 0xFFFF0000;
  v13 = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, v11, &Object, 0LL);
  if ( v13 < 0 )
    goto LABEL_8;
  if ( (v12 & 0x40000) != 0 )
  {
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)Object + 101, 1u);
    v15 = Object;
    v16 = v14 + 1;
    if ( !*((_QWORD *)Object + 51) )
      goto LABEL_4;
    v23 = (ULONG_PTR)Object + 352;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
    v24 = (struct _KEVENT *)v15[51];
    if ( v24 && v16 == v24[1].Header.LockNV )
      KeSetEvent(v24, 0, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15 + 44);
    a5 = 0;
    v25 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v15 + 44) == 1 )
      SessionId = MmGetSessionIdEx(v25->ApcState.Process);
    else
      SessionId = -1;
    --v25->SpecialApcDisable;
    ++v25->AbAllocationRegionCount;
    v27 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
    AbAllocationRegionCount = v25->AbAllocationRegionCount;
    v20 = !_BitScanReverse((unsigned int *)&v28, v27);
    if ( v20 )
      goto LABEL_43;
    while ( 1 )
    {
      v29 = 1 << v28;
      v30 = v28;
      v31 = &v25->LockEntries[v30];
      v27 &= ~v29;
      if ( (v31->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v31->LockState.0 & 1) == 0
        && (*(_QWORD *)&v31->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v23 & 0x7FFFFFFFFFFFFFFCLL)
        && v31->LockState.SessionId == SessionId )
      {
        v31->AcquiredByte &= ~1u;
        if ( v31->LockState.0 )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v28, v27);
      if ( v20 )
        goto LABEL_43;
    }
    if ( !v31 )
    {
LABEL_43:
      if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v25, v23, SessionId, 0LL);
    }
    else
    {
      v31->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v31->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v25->LockEntries[v30].TreeNode);
      a5 = 0;
      a5 = v31->BoostBitmap.AllFields & 0x1FFFF;
      v31->BoostBitmap.AllFields &= 0xFFFE0000;
      v31->ThreadLocalFlags &= ~1u;
      v31->LockState.0 = 0LL;
      v32 = ((char *)v31 - (char *)v25 - 800) / 96;
      if ( AbAllocationRegionCount == 1 )
        v25->AbEntrySummary |= 1 << v32;
      else
        _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v32);
    }
    --v25->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v25, v23, &a5);
    v20 = v25->SpecialApcDisable++ == -1;
    if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
      KiCheckForKernelApcDelivery();
  }
  v15 = Object;
LABEL_4:
  v34[0] = v15;
  LODWORD(v34[6]) = v12 | 4;
  memset(&v34[3], 0, 24);
  v13 = AlpcpSendMessage(v34, a4, 0LL, v11);
  if ( v13 < 0 )
  {
    ObfDereferenceObject(v34[0]);
  }
  else
  {
    v17 = v34[4];
    v18 = v34[0];
    *a1 = v34[4];
    a1[1] = v18;
    if ( v17 )
    {
      if ( BYTE2(v34[7]) )
        AlpcpQueueIoCompletionPort(v17, BYTE3(v34[7]), 1LL);
      else
        KeReleaseSemaphoreEx(v17[31], 1, 1);
    }
    else if ( v34[3] )
    {
      KeReleaseSemaphoreEx((__int64)v34[3] + 1608, 1, 1);
    }
    else if ( v34[5] )
    {
      v22 = (void *)((unsigned __int64)v34[5] & 0xFFFFFFFFFFFFFFFEuLL);
      KeSetEvent((PRKEVENT)((unsigned __int64)v34[5] & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
      if ( ((__int64)v34[5] & 1) != 0 )
        ObfDereferenceObject(v22);
    }
  }
LABEL_8:
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable++ == -1;
  if ( v20
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v13;
}
