/*
 * XREFs of KeInitializeApc @ 0x140132910
 * Callers:
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     MiStoreModifiedWriteDereference @ 0x140091738 (MiStoreModifiedWriteDereference.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IoRaiseHardError @ 0x140236830 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140236B00 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14025FE10 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x1402AE070 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1402B20B8 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1402B4FB4 (EtwpCovSampCaptureQueueApc.c)
 *     KeInitThread @ 0x140470370 (KeInitThread.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     IopCancelIrpsInThreadList @ 0x14055C648 (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx @ 0x14056BB80 (NtQueueApcThreadEx.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 *     ExSwapinWorkerThreads @ 0x1405EF4EC (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140711DA4 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14078057C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     <none>
 */

char __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  char result; // al

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    LOBYTE(a3) = *(_BYTE *)(a2 + 586);
  *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 32) = a4;
  result = a6 != 0 ? a7 : 0;
  *(_BYTE *)(a1 + 81) = result;
  *(_QWORD *)(a1 + 56) = a8 & -(__int64)(a6 != 0);
  *(_BYTE *)(a1 + 82) = 0;
  return result;
}
