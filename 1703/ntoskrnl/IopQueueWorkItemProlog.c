/*
 * XREFs of IopQueueWorkItemProlog @ 0x14004BEAC
 * Callers:
 *     IoQueueWorkItem @ 0x14002F880 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x1401019D0 (IoQueueWorkItemEx.c)
 *     IoTryQueueWorkItem @ 0x140130640 (IoTryQueueWorkItem.c)
 *     IoQueueWorkItemToNode @ 0x1401F4AB0 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     EtwActivityIdControlKernel @ 0x1400802C0 (EtwActivityIdControlKernel.c)
 *     PsGetWorkOnBehalfThread @ 0x1400E7974 (PsGetWorkOnBehalfThread.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  void *WorkOnBehalfThread; // rax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  _OWORD *v10; // [rsp+48h] [rbp+10h] BYREF

  if ( (IopIrpExtensionStatus & 1) != 0
    && (IopFunctionPointerMask & 4) != 0
    && KeGetCurrentIrql() < 2u
    && (EtwActivityIdControlKernel(1LL, &v10), v10) )
  {
    *(_OWORD *)(a1 + 68) = *v10;
  }
  else
  {
    *(_QWORD *)(a1 + 68) = 0LL;
    *(_QWORD *)(a1 + 76) = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    WorkOnBehalfThread = (void *)PsGetWorkOnBehalfThread(CurrentThread, &v9);
    *(_QWORD *)(a1 + 56) = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v9 )
        ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16] || !PopEnergyEstimationDisabled )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread;
    }
  }
  ObfReferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  result = a1;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}
