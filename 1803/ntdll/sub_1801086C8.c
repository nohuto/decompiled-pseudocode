/*
 * XREFs of sub_1801086C8 @ 0x1801086C8
 * Callers:
 *     TpSetWaitEx @ 0x180025710 (TpSetWaitEx.c)
 *     sub_180025900 @ 0x180025900 (sub_180025900.c)
 *     sub_180025954 @ 0x180025954 (sub_180025954.c)
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     TpPostWork @ 0x180025FD0 (TpPostWork.c)
 *     sub_180028788 @ 0x180028788 (sub_180028788.c)
 *     sub_180029160 @ 0x180029160 (sub_180029160.c)
 *     sub_1800484B8 @ 0x1800484B8 (sub_1800484B8.c)
 *     sub_180048564 @ 0x180048564 (sub_180048564.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800552A0 (TpReleaseCleanupGroupMembers.c)
 *     TpSimpleTryPost @ 0x1800562E0 (TpSimpleTryPost.c)
 *     TpSetPoolMinThreads @ 0x180056420 (TpSetPoolMinThreads.c)
 *     sub_18005649C @ 0x18005649C (sub_18005649C.c)
 *     TpAllocJobNotification @ 0x1800565C0 (TpAllocJobNotification.c)
 *     sub_180056970 @ 0x180056970 (sub_180056970.c)
 *     sub_180056B80 @ 0x180056B80 (sub_180056B80.c)
 *     TpAllocWork @ 0x180056F90 (TpAllocWork.c)
 *     TpAllocPool @ 0x180057270 (TpAllocPool.c)
 *     TpAllocIoCompletion @ 0x180057380 (TpAllocIoCompletion.c)
 *     sub_18005756C @ 0x18005756C (sub_18005756C.c)
 *     sub_180058A10 @ 0x180058A10 (sub_180058A10.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     TpAllocWait @ 0x180058B10 (TpAllocWait.c)
 *     TpAllocTimer @ 0x180058CD0 (TpAllocTimer.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 *     TpSetPoolMaxThreads @ 0x180059670 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800596F0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180059740 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpCallbackIndependent @ 0x1800675F0 (TpCallbackIndependent.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006B780 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpAllocCleanupGroup @ 0x18007E350 (TpAllocCleanupGroup.c)
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x18007F360 (TpCallbackUnloadDllOnCompletion.c)
 *     TpDisassociateCallback @ 0x18007FA70 (TpDisassociateCallback.c)
 *     TpReleaseCleanupGroup @ 0x180080240 (TpReleaseCleanupGroup.c)
 *     TpCallbackSetEventOnCompletion @ 0x180083610 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180083920 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpAlpcRegisterCompletionList @ 0x180107EF0 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x180107F50 (TpAlpcUnregisterCompletionList.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180108440 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x180108470 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1801084B0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1801084F0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180108740 @ 0x180108740 (sub_180108740.c)
 */

void __fastcall sub_1801086C8()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
