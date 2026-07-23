/*
 * XREFs of ObpPushStackInfo @ 0x140226DAC
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     IopQueueIrpToFileObject @ 0x14000DCA0 (IopQueueIrpToFileObject.c)
 *     ObpLockDirectoryShared @ 0x140044324 (ObpLockDirectoryShared.c)
 *     ObpLockDirectoryExclusive @ 0x14004439C (ObpLockDirectoryExclusive.c)
 *     PsImpersonateContainerOfThread @ 0x140044504 (PsImpersonateContainerOfThread.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140049B60 (ObpTraceObjectDereferenceIfActive.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     IoGetAttachedDeviceReference @ 0x140091AB0 (IoGetAttachedDeviceReference.c)
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     MiSelectSessionAttachProcess @ 0x140094590 (MiSelectSessionAttachProcess.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400948B0 (ObReferenceObjectByPointerWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     ObReferenceObjectByPointer @ 0x14012B9D0 (ObReferenceObjectByPointer.c)
 *     ObReferenceFileObjectForWrite @ 0x1404821C0 (ObReferenceFileObjectForWrite.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     PspReferenceCidTableEntry @ 0x14050F9F0 (PspReferenceCidTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140517B10 (ObpReferenceProcessObjectByHandle.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14053AC70 (IopAllocRealFileObject.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     MmCanThreadFault @ 0x1400E49D0 (MmCanThreadFault.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x140226CAC (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x1402537B4 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x1406C2E54 (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned __int16 a3, int a4)
{
  __int64 v7; // rdi
  __int64 v9; // rdx
  USHORT v10; // ax
  signed __int32 v11; // ebx
  BOOL CanThreadFault; // eax
  int v13; // r9d
  int v14; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  v7 = a1;
  if ( (xmmword_1403E4010 & 0x80u) != 0LL )
  {
    v9 = a1;
    LOWORD(a1) = 4403 - (a2 != 0);
    EtwTraceObjectOperation(a1, v9);
  }
  if ( (ObpTraceFlags & 0x73) != 0
    && (*(_BYTE *)(v7 + 25) & 1) != 0
    && KeAreInterruptsEnabled()
    && KeGetCurrentIrql() <= 2u )
  {
    v10 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
    if ( v10 )
    {
      if ( v10 < 0x10u )
        memset(&BackTrace[v10], 0, 8LL * (16 - (unsigned int)v10));
      v11 = _InterlockedExchangeAdd(&ObpStackSequence, 1u);
      CanThreadFault = MmCanThreadFault();
      v13 = v11 + 1;
      LOBYTE(v14) = a2;
      if ( CanThreadFault )
        ObpPushRefDerefInfo(v7, v14, a3, v13, BackTrace, a4);
      else
        ObpDeferPushRefDerefInfo(v7, a2, a3, v13, (_SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
