/*
 * XREFs of sub_1801058B8 @ 0x1801058B8
 * Callers:
 *     TpSetPoolMaxThreads @ 0x18000FE40 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18000FEC0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPool @ 0x180010280 (TpAllocPool.c)
 *     sub_1800102BC @ 0x1800102BC (sub_1800102BC.c)
 *     TpAllocIoCompletion @ 0x180010340 (TpAllocIoCompletion.c)
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 *     TpAllocTimer @ 0x180013F90 (TpAllocTimer.c)
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     TpAllocWork @ 0x1800147E0 (TpAllocWork.c)
 *     sub_180014918 @ 0x180014918 (sub_180014918.c)
 *     TpPostWork @ 0x180016B90 (TpPostWork.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     sub_180017414 @ 0x180017414 (sub_180017414.c)
 *     sub_180017610 @ 0x180017610 (sub_180017610.c)
 *     sub_1800176B8 @ 0x1800176B8 (sub_1800176B8.c)
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     sub_180018A00 @ 0x180018A00 (sub_180018A00.c)
 *     TpCallbackIndependent @ 0x180067460 (TpCallbackIndependent.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180070B50 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800732B0 (TpReleaseCleanupGroupMembers.c)
 *     sub_180078F84 @ 0x180078F84 (sub_180078F84.c)
 *     TpSimpleTryPost @ 0x18007DF90 (TpSimpleTryPost.c)
 *     TpAlpcUnregisterCompletionList @ 0x18007F150 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x18007F190 (TpAlpcRegisterCompletionList.c)
 *     sub_18007F3E0 @ 0x18007F3E0 (sub_18007F3E0.c)
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 *     TpAllocJobNotification @ 0x180081010 (TpAllocJobNotification.c)
 *     sub_1800811F0 @ 0x1800811F0 (sub_1800811F0.c)
 *     TpReleasePool @ 0x1800827E0 (TpReleasePool.c)
 *     TpAllocCleanupGroup @ 0x180082B50 (TpAllocCleanupGroup.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180082E30 (TpCallbackSendPendingAlpcMessage.c)
 *     TpDisassociateCallback @ 0x180083460 (TpDisassociateCallback.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180084DB0 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x1800855B0 (TpCallbackUnloadDllOnCompletion.c)
 *     TpReleaseCleanupGroup @ 0x180085DA0 (TpReleaseCleanupGroup.c)
 *     sub_180086D90 @ 0x180086D90 (sub_180086D90.c)
 *     TpSetPoolMinThreads @ 0x1800878A0 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x1800896B0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x18008A500 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x180105670 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x1801056A0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x1801056E0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180105930 @ 0x180105930 (sub_180105930.c)
 */

void __fastcall sub_1801058B8()
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073741811;
  RtlSetLastWin32Error(87);
  RtlRaiseException(&ExceptionRecord);
}
