/*
 * XREFs of PsLookupThreadByThreadId @ 0x1404D75A0
 * Callers:
 *     PsOpenThread @ 0x1404D52E0 (PsOpenThread.c)
 *     NtAlertThreadByThreadId @ 0x1404D7534 (NtAlertThreadByThreadId.c)
 *     PsLookupProcessThreadByCid @ 0x1404D9260 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1405EEF48 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x14077C918 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14078057C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     PsIsThreadInSilo @ 0x1400F17F4 (PsIsThreadInSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PspReferenceCidTableEntry @ 0x14059B080 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rsi
  PETHREAD *v3; // r14
  __int64 v4; // rbx
  __int64 CurrentServerSilo; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Thread;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v4 = PspReferenceCidTableEntry(ThreadId, Thread);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*(_DWORD *)(v4 + 1744) & 2) == 0 )
    {
      _InterlockedOr(v7, 0);
      if ( (*(_QWORD *)(v4 + 1728) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v4 + 1728));
      if ( (*(_DWORD *)(v4 + 1744) & 2) == 0 )
        goto LABEL_10;
    }
    if ( !PsIsThreadInSilo(v4, CurrentServerSilo) )
    {
LABEL_10:
      ObfDereferenceObject((PVOID)v4);
      v4 = 0LL;
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !v4 )
    return -1073741813;
  *v3 = (PETHREAD)v4;
  return 0;
}
