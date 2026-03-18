/*
 * XREFs of MmInSwapWorkingSet @ 0x14007F098
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     MiGetWorkingSetSwapSupport @ 0x14007F460 (MiGetWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x14007F488 (MiProcessWsInSwapSupport.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SmStoreSetProcessVaRanges @ 0x14052B7A0 (SmStoreSetProcessVaRanges.c)
 *     MiInSwapStore @ 0x14052C4A8 (MiInSwapStore.c)
 *     EtwTraceWorkingSetSwap @ 0x14052C59C (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x14052C90C (MiContractWsSwapPageFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x14052D1E0 (MiFreeWorkingSetSwapContext.c)
 *     VmPrefetchVirtualAddresses @ 0x1407A05EC (VmPrefetchVirtualAddresses.c)
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
  _BOOL8 v9; // rdx
  int v10; // ebx
  void **v11; // rcx
  __int64 v12; // rcx

  v1 = 0;
  v3 = &Process[1].IdealNode[12];
  EtwTraceWorkingSetSwap(Process);
  v4 = *(_QWORD *)(qword_1403CBD88 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1120));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v3);
  v8 = (void ***)WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v1 = -1073740682;
    }
    else if ( WorkingSetSwapSupport == 2 )
    {
      v1 = -1073741558;
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
      v9 = 0LL;
      v10 = 0;
      if ( Process[2].ActiveProcessors.Bitmap[16] && (*v8)[2] )
      {
        v10 = 1;
        v9 = ((_BYTE)(*v8)[4] & 1) == 0;
      }
      MiProcessWsInSwapSupport(*v8, v9);
      if ( v10 )
        VmPrefetchVirtualAddresses(**v8);
      v11 = v8[7];
      if ( v11 )
        MiProcessWsInSwapSupport(v11, 1LL);
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
        *(_QWORD *)(MiGetSharedVm(v12) + 24) = 0LL;
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
