/*
 * XREFs of KeInsertQueueApc @ 0x1400AB220
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14000D400 (ExpTimerDpcRoutine.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     IoRaiseHardError @ 0x1401F9540 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F9810 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140226BFC (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x14022CB28 (MiStoreModifiedWriteDereference.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14027F20C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x14027FA30 (EtwpQueueStackWalkApc.c)
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     NtQueueApcThreadEx @ 0x1404D9590 (NtQueueApcThreadEx.c)
 *     IopCancelIrpsInThreadList @ 0x140568328 (IopCancelIrpsInThreadList.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1406AD4F4 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14071CD5C (PspRundownUmsThreadForApcDelivery.c)
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiSignalThreadForApc @ 0x1400AB2FC (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400AB46C (KiInsertQueueApc.c)
 */

char __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // r8
  char v12; // di
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( (*(_DWORD *)(v4 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v12 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    LOBYTE(v11) = CurrentIrql;
    KiSignalThreadForApc(CurrentPrcb, a1, v11);
    v12 = 1;
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, a4, CurrentIrql);
  return v12;
}
