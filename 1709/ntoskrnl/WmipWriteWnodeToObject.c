/*
 * XREFs of WmipWriteWnodeToObject @ 0x1401081A4
 * Callers:
 *     WmipProcessEvent @ 0x140567EA4 (WmipProcessEvent.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x140108C68 (WmipClearIrpObjectList.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     WmipQueueNotification @ 0x140568460 (WmipQueueNotification.c)
 */

__int64 __fastcall WmipWriteWnodeToObject(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  char v8; // bp
  unsigned int v9; // esi
  _DWORD *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = 0;
  if ( v6 )
  {
    WmipClearIrpObjectList(*(_QWORD *)(a1 + 72));
    v6 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v8 = 1;
  if ( v6 )
  {
    v9 = *a2;
    v10 = *(_DWORD **)(v6 + 24);
    if ( *a2 > *(_DWORD *)(*(_QWORD *)(v6 + 184) + 8LL) )
    {
      v10[12] = v9;
      *v10 = 56;
      v9 = 56;
      v10[11] = 32;
    }
    else
    {
      memmove(v10, a2, v9);
      v8 = 0;
    }
    *(_QWORD *)(v6 + 56) = v9;
    *(_DWORD *)(v6 + 48) = 0;
    IofCompleteRequest((PIRP)v6, 0);
  }
  if ( v8 )
    return (unsigned int)WmipQueueNotification(a1, a1 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 128, a2);
  return v7;
}
