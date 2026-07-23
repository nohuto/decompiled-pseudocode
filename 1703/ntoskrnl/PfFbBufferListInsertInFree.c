/*
 * XREFs of PfFbBufferListInsertInFree @ 0x14005F1F8
 * Callers:
 *     PfFbBufferListAllocateTemporary @ 0x14002D5E8 (PfFbBufferListAllocateTemporary.c)
 *     PfFbBufferListFlushStandby @ 0x14005F298 (PfFbBufferListFlushStandby.c)
 *     PfTFullEventListAdd @ 0x1400602BC (PfTFullEventListAdd.c)
 *     PfFbBufferListAllocate @ 0x140168A5C (PfFbBufferListAllocate.c)
 *     PfpRepurposeNameLoggingTrace @ 0x140456A80 (PfpRepurposeNameLoggingTrace.c)
 *     PfpFlushEventBuffers @ 0x1404962F0 (PfpFlushEventBuffers.c)
 *     PfTCleanup @ 0x1406C46A8 (PfTCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, _SLIST_ENTRY *P, int a3, int a4, int a5)
{
  _SLIST_ENTRY *v7; // r8
  __int64 v8; // rax
  char *v9; // rax

  if ( (a4 & 1) != 0 && LOWORD(RunRef[1].Next) + (unsigned int)LOWORD(RunRef[2].Next) >= (int)KeNumberProcessors_0 + 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, -a3);
    ExFreePoolWithTag(P, HIDWORD(RunRef[4].Next));
  }
  else
  {
    v7 = (_SLIST_ENTRY *)((char *)P + a3);
    P[1].Next = RunRef;
    P[2].Next = v7;
    v8 = *((unsigned int *)&RunRef[4].Next + 3);
    *((_DWORD *)&P[2].Next + 2) = 0;
    v9 = (char *)P + v8;
    *((_QWORD *)&P[1].Next + 1) = v9;
    *((_DWORD *)&P[2].Next + 3) = a4;
    memset(v9, 0, (char *)v7 - v9);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[1], P);
  }
  if ( a5 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)RunRef);
}
