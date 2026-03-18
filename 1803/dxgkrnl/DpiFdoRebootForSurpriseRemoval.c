/*
 * XREFs of DpiFdoRebootForSurpriseRemoval @ 0x1C01F871C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01F8B44 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoRebootForSurpriseRemoval(struct _DEVICE_OBJECT *a1, unsigned int a2)
{
  unsigned int *DeviceExtension; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax

  DeviceExtension = (unsigned int *)a1->DeviceExtension;
  v3 = 0;
  byte_1C007A75A = 1;
  v4 = a2;
  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DpiFdoRebootWorkItem, DelayedWorkQueue, (PVOID)(unsigned int)v4);
  }
  else
  {
    v3 = -1073741670;
    v7 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v7 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v7);
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8);
    v9[3] = 275LL;
    v9[4] = 25LL;
    v9[5] = v4;
    v9[6] = DeviceExtension[277];
    v9[7] = DeviceExtension[278];
    WdLogEvent5_WdCriticalError(v9);
  }
  return v3;
}
