/*
 * XREFs of ndisCompleteWaitWake @ 0x1C0023920
 * Callers:
 *     ndisGenericWaitWakeCallback @ 0x1C00238B0 (ndisGenericWaitWakeCallback.c)
 *     ndisIdleWaitWakeCallback @ 0x1C006E9E0 (ndisIdleWaitWakeCallback.c)
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0072290 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 *     ndisRequestWaitWake @ 0x1C00BDE48 (ndisRequestWaitWake.c)
 * Callees:
 *     <none>
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
  *(_DWORD *)(a1 + 1856) = 1709187;
  KeSetEvent((PRKEVENT)(a1 + 1304), 0, 0);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  ndisDereferenceMiniport(a1, 0xAu);
}
