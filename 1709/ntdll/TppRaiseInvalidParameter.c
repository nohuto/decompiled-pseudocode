/*
 * XREFs of TppRaiseInvalidParameter @ 0x18010AED8
 * Callers:
 *     TpAllocWork @ 0x18000A070 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x18000A220 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18000A2A0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x18000A460 (TpAllocPool.c)
 *     TpAllocIoCompletion @ 0x18000A960 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x18000AB4C (TpBindFileToDirect.c)
 *     TpAllocWait @ 0x18000BAE0 (TpAllocWait.c)
 *     TpAllocTimer @ 0x18000C830 (TpAllocTimer.c)
 *     TppWorkpValidateWork @ 0x18000C9A8 (TppWorkpValidateWork.c)
 *     TpSetWaitEx @ 0x18000F630 (TpSetWaitEx.c)
 *     TppWaitpValidateWait @ 0x18000F748 (TppWaitpValidateWait.c)
 *     TppIopValidateIo @ 0x18000F958 (TppIopValidateIo.c)
 *     TppTimerpValidateTimer @ 0x18000F9AC (TppTimerpValidateTimer.c)
 *     TppCancelWait @ 0x18000FF54 (TppCancelWait.c)
 *     TppTimerQueueExpiration @ 0x180010040 (TppTimerQueueExpiration.c)
 *     TppCleanupGroupMemberRelease @ 0x1800107A8 (TppCleanupGroupMemberRelease.c)
 *     TppCallbackMayRunLongProlog @ 0x180013454 (TppCallbackMayRunLongProlog.c)
 *     TpDereferenceGlobalPool @ 0x18001359C (TpDereferenceGlobalPool.c)
 *     TppAlpcpValidateAlpc @ 0x180013AB0 (TppAlpcpValidateAlpc.c)
 *     TppAllocAlpcCompletion @ 0x180013B30 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180014020 (TpAllocJobNotification.c)
 *     TppJobpValidateJob @ 0x180014200 (TppJobpValidateJob.c)
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 *     TpPostWork @ 0x180047120 (TpPostWork.c)
 *     TpCallbackIndependent @ 0x18006CA50 (TpCallbackIndependent.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18006E7F0 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpReleaseCleanupGroupMembers @ 0x180071A00 (TpReleaseCleanupGroupMembers.c)
 *     TpSimpleTryPost @ 0x18007C640 (TpSimpleTryPost.c)
 *     TpDisassociateCallback @ 0x180081540 (TpDisassociateCallback.c)
 *     TpAllocCleanupGroup @ 0x180081670 (TpAllocCleanupGroup.c)
 *     TpReleasePool @ 0x180081D20 (TpReleasePool.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083A00 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180084D50 (TpCallbackUnloadDllOnCompletion.c)
 *     TpReleaseCleanupGroup @ 0x180085910 (TpReleaseCleanupGroup.c)
 *     TpSetPoolMinThreads @ 0x180086AC0 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x180088580 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180088AA0 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpAlpcRegisterCompletionList @ 0x18010A6F0 (TpAlpcRegisterCompletionList.c)
 *     TpAlpcUnregisterCompletionList @ 0x18010A750 (TpAlpcUnregisterCompletionList.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x18010AC50 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x18010AC80 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x18010ACC0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x18010AD00 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     TppReportExceptionFilter @ 0x18010AF50 (TppReportExceptionFilter.c)
 */

void __fastcall TppRaiseInvalidParameter()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
