/*
 * XREFs of WmipCompleteGuidIrpWithError @ 0x1400DEA70
 * Callers:
 *     WmipReceiveNotifications @ 0x14011FCA4 (WmipReceiveNotifications.c)
 *     WmipDeleteMethod @ 0x14051EB00 (WmipDeleteMethod.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x140108C68 (WmipClearIrpObjectList.c)
 */

void __fastcall WmipCompleteGuidIrpWithError(__int64 a1)
{
  __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    WmipClearIrpObjectList(v2);
    v2 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 48) = -1073741816;
    IofCompleteRequest((PIRP)v2, 0);
  }
}
