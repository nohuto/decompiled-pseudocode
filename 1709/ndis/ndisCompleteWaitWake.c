/*
 * XREFs of ndisCompleteWaitWake @ 0x1C001F254
 * Callers:
 *     ndisGenericWaitWakeCallback @ 0x1C001F1E0 (ndisGenericWaitWakeCallback.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0070150 (ndisIdleWaitWakeCallback.c)
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0073DE0 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 *     ndisRequestWaitWake @ 0x1C00AE030 (ndisRequestWaitWake.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 */

void __fastcall ndisCompleteWaitWake(__int64 a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 1296) = 0LL;
  *(_QWORD *)(a1 + 520) = CurrentThread;
  v4 = v2;
  *(_DWORD *)(a1 + 1856) = 1709200;
  KeSetEvent((PRKEVENT)(a1 + 1304), 0, 0);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  ndisDereferenceMiniport(a1, 0xAu);
}
