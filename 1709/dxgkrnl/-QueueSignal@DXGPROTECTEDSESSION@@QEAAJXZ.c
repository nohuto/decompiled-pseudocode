/*
 * XREFs of ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C01BC04C
 * Callers:
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0029764 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROTECTEDSESSION::QueueSignal(PVOID Context)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // rax

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)Context + 2) + 16LL) + 192LL));
  if ( WorkItem )
  {
    v9 = WdLogNewEntry5_WdEvent(v3, v2, v5, v6);
    *(_QWORD *)(v9 + 24) = 1181LL;
    WdLogEvent5_WdEvent(v9);
    _InterlockedAdd((volatile signed __int32 *)Context + 18, 1u);
    IoQueueWorkItemEx(WorkItem, DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine, DelayedWorkQueue, Context);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v7 + 24) = 1177LL;
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
}
