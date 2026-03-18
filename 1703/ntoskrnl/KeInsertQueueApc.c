/*
 * XREFs of KeInsertQueueApc @ 0x14003FEC0
 * Callers:
 *     MiStoreModifiedWriteDereference @ 0x140054EDC (MiStoreModifiedWriteDereference.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     ExpTimerDpcRoutine @ 0x140135DD0 (ExpTimerDpcRoutine.c)
 *     IoRaiseHardError @ 0x1401F3B80 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F3E30 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14021A624 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140256638 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpQueueStackWalkApc @ 0x140256B58 (EtwpQueueStackWalkApc.c)
 *     IopCancelIrpsInThreadList @ 0x140433318 (IopCancelIrpsInThreadList.c)
 *     CmpPostNotify @ 0x14048C118 (CmpPostNotify.c)
 *     NtQueueApcThreadEx @ 0x1404C9748 (NtQueueApcThreadEx.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     ExSwapinWorkerThreads @ 0x1405778AC (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14068222C (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x14003FFA4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140040128 (KiInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 */

__int64 __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v11; // bl
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( (*(_DWORD *)(v4 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v11 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc(CurrentPrcb, a1, CurrentIrql);
    v11 = 1;
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, a4, CurrentIrql);
  return v11;
}
