/*
 * XREFs of KeInitializeApc @ 0x14010F400
 * Callers:
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     MiStoreModifiedWriteDereference @ 0x140054EDC (MiStoreModifiedWriteDereference.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     IoRaiseHardError @ 0x1401F3B80 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F3E30 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14021A624 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140256638 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x140256B58 (EtwpQueueStackWalkApc.c)
 *     KeInitThread @ 0x140404A30 (KeInitThread.c)
 *     IopCancelIrpsInThreadList @ 0x140433318 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     NtQueueApcThreadEx @ 0x1404C9748 (NtQueueApcThreadEx.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     ExSwapinWorkerThreads @ 0x1405778AC (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14068222C (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 result; // rax

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    *(_BYTE *)(a1 + 80) = *(_BYTE *)(a2 + 586);
  else
    *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  result = a6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 48) = a6;
  if ( a6 )
  {
    *(_BYTE *)(a1 + 81) = a7;
    result = a8;
    *(_QWORD *)(a1 + 56) = a8;
  }
  else
  {
    *(_BYTE *)(a1 + 81) = 0;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_BYTE *)(a1 + 82) = 0;
  return result;
}
