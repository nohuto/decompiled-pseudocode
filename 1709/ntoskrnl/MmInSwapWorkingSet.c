/*
 * XREFs of MmInSwapWorkingSet @ 0x140003E0C
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x140003F98 (MiProcessWsInSwapSupport.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetWorkingSetSwapSupport @ 0x140124A10 (MiGetWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiInSwapStore @ 0x1404443BC (MiInSwapStore.c)
 *     MiContractWsSwapPageFile @ 0x140444648 (MiContractWsSwapPageFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x140444830 (MiFreeWorkingSetSwapContext.c)
 *     SmStoreSetProcessVaRanges @ 0x140444AF0 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x1405983E0 (EtwTraceWorkingSetSwap.c)
 *     VmPrefetchVirtualAddresses @ 0x14073D5EC (VmPrefetchVirtualAddresses.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PEPROCESS Process)
{
  unsigned int v1; // edi
  unsigned __int16 *v3; // r15
  __int64 v4; // r14
  KIRQL v5; // bl
  __int64 WorkingSetSwapSupport; // rax
  __int64 v7; // rcx
  void ***v8; // rsi
  void **v10; // rcx
  __int64 v11; // rcx

  v1 = 0;
  v3 = &Process[1].IdealNode[12];
  EtwTraceWorkingSetSwap(Process);
  v4 = *(_QWORD *)(qword_140388AF0 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 2));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1120));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v3);
  v8 = (void ***)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 2 )
    {
      v1 = -1073741558;
    }
    else if ( WorkingSetSwapSupport == 1 )
    {
      v1 = -1073740682;
    }
    else
    {
      *(_QWORD *)(MiGetSharedVm(v7) + 24) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1120));
      __writecr8(v5);
      if ( *(_DWORD *)(v4 + 1144) )
      {
        MiInSwapStore(Process);
        SmStoreSetProcessVaRanges(0LL);
      }
      MiProcessWsInSwapSupport(*v8, 0LL);
      if ( Process[2].ActiveProcessors.Bitmap[16] && (*v8)[2] )
        VmPrefetchVirtualAddresses(**v8);
      v10 = v8[7];
      if ( v10 )
        MiProcessWsInSwapSupport(v10, 1LL);
      if ( v8[1] )
      {
        v8[5] = (void **)v8;
        v8[4] = (void **)MiInSwapSharedWorkingSetWorker;
        v8[2] = 0LL;
        ObfReferenceObjectWithTag(Process, 0x73576D4Du);
        v8[6] = (void **)Process;
        ExQueueWorkItemToPartition((ULONG_PTR)(v8 + 2));
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v8);
      }
      v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1120));
      if ( MiGetWorkingSetSwapSupport(v3) == 1 )
        *(_QWORD *)(MiGetSharedVm(v11) + 24) = 0LL;
    }
  }
  else
  {
    v1 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1120));
  __writecr8(v5);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap(Process);
  return v1;
}
