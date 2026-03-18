/*
 * XREFs of GreLockDisplayDevice @ 0x1C005C1F0
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C005AC10 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C005AE14 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C005B660 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C005B9C4 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C005BE80 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 */

__int64 __fastcall GreLockDisplayDevice(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 40));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 40), 11LL);
}
