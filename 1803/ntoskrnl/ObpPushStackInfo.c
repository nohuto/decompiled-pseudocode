/*
 * XREFs of ObpPushStackInfo @ 0x140271018
 * Callers:
 *     NtCancelTimer @ 0x14005A790 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14005BAA0 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ObReferenceObjectByPointer @ 0x140073920 (ObReferenceObjectByPointer.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400880C0 (ExpSetResourceOwnerPointerEx.c)
 *     IopQueueIrpToFileObject @ 0x1400A99E0 (IopQueueIrpToFileObject.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     IoGetAttachedDeviceReference @ 0x1400DF830 (IoGetAttachedDeviceReference.c)
 *     ObReferenceObjectExWithTag @ 0x1400EB030 (ObReferenceObjectExWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     IopAcquireFastLock_2 @ 0x1400EB86C (IopAcquireFastLock_2.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     IopCallDriverReference @ 0x1400EEF70 (IopCallDriverReference.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400F0E30 (ObReferenceObjectByPointerWithTag.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404B7360 (ObpReferenceProcessObjectByHandle.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     PspReferenceCidTableEntry @ 0x14059B080 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     MmCanThreadFault @ 0x140130A80 (MmCanThreadFault.c)
 *     RtlCaptureStackBackTrace @ 0x140130B00 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x140270F18 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x1402AED98 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x14075ACC4 (ObpPushRefDerefInfo.c)
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
  if ( (xmmword_14044C2D0 & 0x80u) != 0LL )
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
