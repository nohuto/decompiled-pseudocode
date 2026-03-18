/*
 * XREFs of VidSchTimeoutSyncObject @ 0x1C0003E5C
 * Callers:
 *     VidSchDestroySyncObject @ 0x1C00774D0 (VidSchDestroySyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C002BB78 (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C002D380 (VidSchiUnblockUnorderedWaiter.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  volatile signed __int32 *v5; // rax
  __int64 v6; // rbx
  struct _KLOCK_QUEUE_HANDLE *v7; // rcx
  volatile signed __int32 *v8; // rax
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1904LL), &LockHandle);
  v3 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 36) )
  {
    if ( v3 == 2 )
    {
      LOBYTE(v2) = 1;
      VidSchiUnblockUnorderedWaiter(a1, v2);
      goto LABEL_3;
    }
    if ( (unsigned int)(v3 - 4) <= 1 && !*(_BYTE *)(a1 + 28) )
    {
      v8 = *(volatile signed __int32 **)(a1 + 56);
      *(_BYTE *)(a1 + 28) = 1;
      if ( *(_BYTE *)(a1 + 29) )
        *(_QWORD *)v8 = -1LL;
      else
        _InterlockedExchangeAdd(v8, 0x3FFFFFFFu);
      VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8));
      if ( *(_BYTE *)(a1 + 27) )
      {
        v6 = *(_QWORD *)(a1 + 200);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 8), &v10);
        v7 = &v10;
        goto LABEL_10;
      }
    }
  }
  else if ( (unsigned int)(v3 - 4) <= 1 && !*(_BYTE *)(a1 + 28) )
  {
    v5 = *(volatile signed __int32 **)(a1 + 56);
    *(_BYTE *)(a1 + 28) = 1;
    if ( *(_BYTE *)(a1 + 29) )
      *(_QWORD *)v5 = -1LL;
    else
      _InterlockedExchangeAdd(v5, 0x3FFFFFFFu);
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8));
    if ( *(_BYTE *)(a1 + 27) )
    {
      v6 = *(_QWORD *)(a1 + 200);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 8), &v9);
      v7 = &v9;
LABEL_10:
      *(_BYTE *)(v6 + 32) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v7);
      VidSchiPropagateCrossAdapterSignal(a1);
    }
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
