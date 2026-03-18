/*
 * XREFs of KeInitializeApc @ 0x140025DA0
 * Callers:
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     IoRaiseHardError @ 0x1401F9540 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F9810 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140226BFC (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x14022CB28 (MiStoreModifiedWriteDereference.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14027F20C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x14027FA30 (EtwpQueueStackWalkApc.c)
 *     KeInitThread @ 0x140424040 (KeInitThread.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     NtQueueApcThreadEx @ 0x1404D9590 (NtQueueApcThreadEx.c)
 *     IopCancelIrpsInThreadList @ 0x140568328 (IopCancelIrpsInThreadList.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1406AD4F4 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14071CD5C (PspRundownUmsThreadForApcDelivery.c)
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
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
