/*
 * XREFs of IopQueueWorkItemProlog @ 0x14002358C
 * Callers:
 *     IoQueueWorkItem @ 0x1400219E0 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x140021D60 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItemToNode @ 0x1401FA890 (IoQueueWorkItemToNode.c)
 *     IoTryQueueWorkItem @ 0x1401FAA70 (IoTryQueueWorkItem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     PsGetWorkOnBehalfThread @ 0x14006AD64 (PsGetWorkOnBehalfThread.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  void *WorkOnBehalfThread; // rax
  _OWORD *SparePtr; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 && KeGetCurrentIrql() < 2u )
  {
    SparePtr = KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
    {
      *(_OWORD *)(a1 + 68) = *SparePtr;
    }
    else
    {
      *(_QWORD *)(a1 + 68) = 0LL;
      *(_QWORD *)(a1 + 76) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 68) = 0LL;
    *(_QWORD *)(a1 + 76) = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    WorkOnBehalfThread = (void *)PsGetWorkOnBehalfThread(CurrentThread, &v10);
    *(_QWORD *)(a1 + 56) = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v10 )
        ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16] || PopEnergyEstimationEnabled )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread;
    }
  }
  ObfReferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  *(_QWORD *)(a1 + 32) = a2;
  result = a1;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}
