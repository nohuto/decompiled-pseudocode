/*
 * XREFs of ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C0025648
 * Callers:
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C002EDD0 (DxgkHardwareContentProtectionTeardownCB.c)
 * Callees:
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0149710 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyHardwareContentProtectionTeardown(DXGADAPTER *this, int a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v10; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v7 + 24) = 2274LL;
LABEL_3:
    WdLogEvent5_WdLowResource(v7);
    return;
  }
  *PoolWithTag = this;
  *((_DWORD *)PoolWithTag + 2) = a2;
  *((_DWORD *)PoolWithTag + 3) = PsGetCurrentProcessSessionId(v5);
  v6[2] = *(_QWORD *)((char *)this + 268);
  v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 24);
  if ( KeGetCurrentIrql() >= 2u )
  {
    WorkItem = IoAllocateWorkItem(v8);
    if ( !WorkItem )
    {
      v7 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v7 + 24) = 2295LL;
      goto LABEL_3;
    }
    v10 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v10 + 24) = 2299LL;
    WdLogEvent5_WdEvent(v10);
    IoQueueWorkItemEx(WorkItem, HandleAdapterTeardownEvent, DelayedWorkQueue, v6);
  }
  else
  {
    HandleAdapterTeardownEvent(v8, v6, 0LL);
  }
}
