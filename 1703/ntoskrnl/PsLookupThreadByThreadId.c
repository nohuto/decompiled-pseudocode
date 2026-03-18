/*
 * XREFs of PsLookupThreadByThreadId @ 0x14050EEE0
 * Callers:
 *     NtAlertThreadByThreadId @ 0x140430D80 (NtAlertThreadByThreadId.c)
 *     PsLookupProcessThreadByCid @ 0x140441EF0 (PsLookupProcessThreadByCid.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     PsOpenThread @ 0x1404F33F0 (PsOpenThread.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14057A008 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x1406E24F8 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     PsIsThreadInSilo @ 0x140094994 (PsIsThreadInSilo.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x14050F9F0 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  PETHREAD *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v7; // rbp
  __int16 v8; // ax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Thread;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Thread) = 6;
  v5 = PspReferenceCidTableEntry(ThreadId, Thread);
  if ( v5 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v7 = CurrentServerSilo;
    if ( (*(_DWORD *)(v5 + 1736) & 2) != 0 )
    {
      if ( PsIsThreadInSilo(v5, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObject((PVOID)v5);
      v5 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v5 + 1720) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v5 + 1720));
    if ( (*(_DWORD *)(v5 + 1736) & 2) == 0 || !PsIsThreadInSilo(v5, v7) )
      goto LABEL_14;
  }
LABEL_4:
  v8 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v8;
  if ( !v8 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return -1073741813;
  *v2 = (PETHREAD)v5;
  return 0;
}
