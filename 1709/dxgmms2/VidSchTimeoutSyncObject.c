/*
 * XREFs of VidSchTimeoutSyncObject @ 0x1C0013ED4
 * Callers:
 *     VidSchDestroySyncObject @ 0x1C006F6F0 (VidSchDestroySyncObject.c)
 * Callees:
 *     VidSchiUnblockUnorderedWaiter @ 0x1C0001054 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0028C90 (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(__int64 a1)
{
  int v2; // eax
  volatile signed __int32 *v4; // rax
  __int64 v5; // rbx
  struct _KLOCK_QUEUE_HANDLE *v6; // rcx
  volatile signed __int32 *v7; // rax
  struct _KLOCK_QUEUE_HANDLE v8; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1888LL), &LockHandle);
  v2 = *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 36) )
  {
    if ( v2 == 2 )
    {
      VidSchiUnblockUnorderedWaiter(a1, 1u);
      goto LABEL_3;
    }
    if ( (unsigned int)(v2 - 4) <= 1 && !*(_BYTE *)(a1 + 28) )
    {
      v7 = *(volatile signed __int32 **)(a1 + 56);
      *(_BYTE *)(a1 + 28) = 1;
      if ( *(_BYTE *)(a1 + 29) )
        *(_QWORD *)v7 = -1LL;
      else
        _InterlockedExchangeAdd(v7, 0x3FFFFFFFu);
      VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8));
      if ( *(_BYTE *)(a1 + 27) )
      {
        v5 = *(_QWORD *)(a1 + 184);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 8), &v9);
        v6 = &v9;
        goto LABEL_10;
      }
    }
  }
  else if ( (unsigned int)(v2 - 4) <= 1 && !*(_BYTE *)(a1 + 28) )
  {
    v4 = *(volatile signed __int32 **)(a1 + 56);
    *(_BYTE *)(a1 + 28) = 1;
    if ( *(_BYTE *)(a1 + 29) )
      *(_QWORD *)v4 = -1LL;
    else
      _InterlockedExchangeAdd(v4, 0x3FFFFFFFu);
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(a1 + 8));
    if ( *(_BYTE *)(a1 + 27) )
    {
      v5 = *(_QWORD *)(a1 + 184);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 8), &v8);
      v6 = &v8;
LABEL_10:
      *(_BYTE *)(v5 + 32) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v6);
      VidSchiPropagateCrossAdapterSignal(a1);
    }
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
