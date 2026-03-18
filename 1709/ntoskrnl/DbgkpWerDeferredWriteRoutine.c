/*
 * XREFs of DbgkpWerDeferredWriteRoutine @ 0x1406AE390
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     DbgkpWerCleanupContext @ 0x1406AE1B8 (DbgkpWerCleanupContext.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406BA268 (IoWriteDeferredLiveDumpData.c)
 */

_QWORD *__fastcall DbgkpWerDeferredWriteRoutine(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTIMER *v3; // rbp
  int v4; // esi
  int v5; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerDeferredWriteRoutine entered, context 0x%p\n", (const void *)a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *(struct _KTIMER **)(*(_QWORD *)(a1 + 128) + 16LL);
  if ( v3 )
    KiSetTimerEx((__int64)v3, -10000000LL * DbgkpWerDeferredWriteTimeoutSeconds, 0, 0, 0LL);
  v4 = IoWriteDeferredLiveDumpData(*(PVOID *)(a1 + 136));
  KeCancelTimer(v3);
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( v4 >= 0 )
  {
    v5 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 104), 0LL);
    if ( v5 >= 0 )
      *(_DWORD *)(a1 + 112) |= 1u;
    else
      DbgPrintEx(
        5u,
        0,
        "DBGK: DbgkpWerDeferredWriteRoutine: WerLiveKernelSubmitReport failed with status 0x%X\n",
        (unsigned int)v5);
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkpWerDeferredWriteRoutine: dump write failed with status 0x%X\n", (unsigned int)v4);
  }
  DbgkpWerCleanupContext(a1);
  _InterlockedExchange(&DbgkpBusy, 0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
