/*
 * XREFs of GreUnlockDisplayDevice @ 0x1C0068660
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0067770 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0067978 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0067BD0 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00680E8 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00683A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDisplayDevice(__int64 a1)
{
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx

  result = EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 40));
  v3 = *(struct _ERESOURCE **)(a1 + 40);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion();
  }
  return result;
}
