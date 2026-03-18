/*
 * XREFs of PsLookupThreadByThreadId @ 0x1404C5690
 * Callers:
 *     PsOpenThread @ 0x14046BF70 (PsOpenThread.c)
 *     PsLookupProcessThreadByCid @ 0x14046C560 (PsLookupProcessThreadByCid.c)
 *     NtAlertThreadByThreadId @ 0x1404C6634 (NtAlertThreadByThreadId.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1406F3658 (PfpServiceMainThreadBoostPrep.c)
 *     PspFindThreadForTeb @ 0x140718928 (PspFindThreadForTeb.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14071CD5C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PsIsThreadInSilo @ 0x140089378 (PsIsThreadInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x1404C5740 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  PETHREAD *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v7; // rbp
  bool v8; // zf
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
    if ( (*(_DWORD *)(v5 + 1744) & 2) != 0 )
    {
      if ( PsIsThreadInSilo(v5, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObject((PVOID)v5);
      v5 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v5 + 1728) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v5 + 1728));
    if ( (*(_DWORD *)(v5 + 1744) & 2) == 0 || !PsIsThreadInSilo(v5, v7) )
      goto LABEL_14;
  }
LABEL_4:
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return -1073741813;
  *v2 = (PETHREAD)v5;
  return 0;
}
