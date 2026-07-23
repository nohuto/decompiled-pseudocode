/*
 * XREFs of ObpPushStackInfo @ 0x140239558
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140076620 (NtReleaseWorkerFactoryWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140088FC0 (ObReferenceObjectByPointerWithTag.c)
 *     MmGetSessionObjectById @ 0x14008A93C (MmGetSessionObjectById.c)
 *     ObpLockDirectoryShared @ 0x14008A9CC (ObpLockDirectoryShared.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     IopAcquireFastLock_2 @ 0x14008AA84 (IopAcquireFastLock_2.c)
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     IoGetAttachedDeviceReference @ 0x1400A0850 (IoGetAttachedDeviceReference.c)
 *     NtSetInformationWorkerFactory @ 0x1400B1CE0 (NtSetInformationWorkerFactory.c)
 *     ObReferenceObjectByPointer @ 0x1400DE9F0 (ObReferenceObjectByPointer.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400F1580 (ExpSetResourceOwnerPointerEx.c)
 *     IopQueueIrpToFileObject @ 0x140103ED0 (IopQueueIrpToFileObject.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     PspReferenceCidTableEntry @ 0x1404C5740 (PspReferenceCidTableEntry.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140507D70 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x1400D5780 (MmCanThreadFault.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x140239458 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x14027B478 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x1406F18D8 (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned __int16 a3, int a4)
{
  __int64 v7; // rdi
  __int64 v9; // rdx
  USHORT v10; // ax
  signed __int32 v11; // ebx
  int CanThreadFault; // eax
  int v13; // r9d
  int v14; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  v7 = a1;
  if ( (xmmword_140401150 & 0x80u) != 0LL )
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
