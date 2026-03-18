/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceState @ 0x1C01E9250
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C0103C58 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0107824 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoSetMonitorDriverInterfaceState(PVOID Object, char a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  _QWORD *PoolWithTag; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rcx
  __int64 v12; // rax

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    ObfReferenceObject(Object);
    PoolWithTag[2] = Object;
    *((_BYTE *)PoolWithTag + 24) = a2;
    KeWaitForSingleObject(&stru_1C0060B88, Executive, 0, 0, 0LL);
    v8 = (_QWORD *)qword_1C0060BC8;
    if ( *(__int64 **)qword_1C0060BC8 != &qword_1C0060BC0 )
      __fastfail(3u);
    *PoolWithTag = &qword_1C0060BC0;
    PoolWithTag[1] = v8;
    *v8 = PoolWithTag;
    qword_1C0060BC8 = (__int64)PoolWithTag;
    if ( !byte_1C0060B80 )
    {
      WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( !WorkItem )
      {
        v2 = -1073741801;
        v12 = WdLogNewEntry5_WdLowResource(v10);
        *(_QWORD *)(v12 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v12);
        byte_1C0060B80 = 0;
        goto LABEL_9;
      }
      IoQueueWorkItemEx(WorkItem, DpiPdoSetMonitorDriverInterfaceStateWorker, DelayedWorkQueue, 0LL);
    }
    byte_1C0060B80 = 1;
LABEL_9:
    KeReleaseMutex(&stru_1C0060B88, 0);
    return v2;
  }
  v7 = WdLogNewEntry5_WdLowResource(v5);
  v2 = -1073741801;
  *(_QWORD *)(v7 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v7);
  return v2;
}
