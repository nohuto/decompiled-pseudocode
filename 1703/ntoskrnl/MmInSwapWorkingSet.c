/*
 * XREFs of MmInSwapWorkingSet @ 0x14007D3E4
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     MiProcessWsInSwapSupport @ 0x14007D794 (MiProcessWsInSwapSupport.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetWorkingSetSwapSupport @ 0x1400A7F08 (MiGetWorkingSetSwapSupport.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiContractWsSwapPageFile @ 0x1404C90EC (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1404C9698 (EtwTraceWorkingSetSwap.c)
 *     MiInSwapStore @ 0x1404C9F3C (MiInSwapStore.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404CA018 (MiFreeWorkingSetSwapContext.c)
 *     SmStoreSetProcessVaRanges @ 0x140568258 (SmStoreSetProcessVaRanges.c)
 */

__int64 __fastcall MmInSwapWorkingSet(struct _KPROCESS *Object)
{
  unsigned int v1; // edi
  unsigned __int16 *v3; // r14
  __int64 v4; // r15
  KIRQL v5; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 WorkingSetSwapSupport; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx

  v1 = 0;
  v3 = &Object[1].IdealNode[12];
  EtwTraceWorkingSetSwap(Object);
  v4 = *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(Object[1].SecurePid));
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1168));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v3, v6, v7);
  v10 = WorkingSetSwapSupport;
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
      *(_QWORD *)(MiGetSharedVm(v9) + 24) = 1LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1168));
      __writecr8(v5);
      if ( *(_DWORD *)(v4 + 1192) )
      {
        MiInSwapStore(Object);
        SmStoreSetProcessVaRanges(0LL);
      }
      MiProcessWsInSwapSupport(*(_QWORD *)v10, 0LL);
      v11 = *(_QWORD *)(v10 + 56);
      if ( v11 )
        MiProcessWsInSwapSupport(v11, 1LL);
      if ( *(_QWORD *)(v10 + 8) )
      {
        *(_QWORD *)(v10 + 40) = v10;
        *(_QWORD *)(v10 + 32) = MiInSwapSharedWorkingSetWorker;
        *(_QWORD *)(v10 + 16) = 0LL;
        ObfReferenceObjectWithTag(Object, 0x73576D4Du);
        *(_QWORD *)(v10 + 48) = Object;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v10 + 16), NormalWorkQueue);
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v10);
      }
      v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1168));
      if ( MiGetWorkingSetSwapSupport(v3, v12, v13) == 1 )
        *(_QWORD *)(MiGetSharedVm(v14) + 24) = 0LL;
    }
  }
  else
  {
    v1 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1168));
  __writecr8(v5);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap(Object);
  return v1;
}
