/*
 * XREFs of KeInsertQueueApc @ 0x140044AB0
 * Callers:
 *     MiStoreModifiedWriteDereference @ 0x140091738 (MiStoreModifiedWriteDereference.c)
 *     ExpTimerDpcRoutine @ 0x1400CD640 (ExpTimerDpcRoutine.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IoRaiseHardError @ 0x140236830 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140236B00 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14025FE10 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x1402AE070 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1402B20B8 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1402B4FB4 (EtwpCovSampCaptureQueueApc.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     CmpPostNotify @ 0x1404E2F90 (CmpPostNotify.c)
 *     IopCancelIrpsInThreadList @ 0x14055C648 (IopCancelIrpsInThreadList.c)
 *     NtQueueApcThreadEx @ 0x14056BB80 (NtQueueApcThreadEx.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 *     ExSwapinWorkerThreads @ 0x1405EF4EC (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140711DA4 (DbgkpLkmdLaunchSnapApc.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14078057C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiSignalThreadForApc @ 0x140041EC4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140043A70 (KiInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  char CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  char v10; // si
  int v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h]

  v13 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v12 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( (*(_DWORD *)(v4 + 116) & 0x4000) != 0 && !*(_BYTE *)(a1 + 82) )
  {
    *(_QWORD *)(a1 + 64) = v13;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, CurrentIrql);
    v10 = 1;
  }
  KiReleaseThreadLockSafe(v4);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, a4, CurrentIrql);
  return v10;
}
