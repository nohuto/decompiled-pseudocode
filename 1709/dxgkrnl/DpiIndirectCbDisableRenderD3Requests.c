/*
 * XREFs of DpiIndirectCbDisableRenderD3Requests @ 0x1C01E5BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DpiIndirectCbDisableRenderD3Requests(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  _DWORD *DeviceExtension; // rax
  struct _IO_WORKITEM *WorkItem; // rsi
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 v10; // rax

  if ( !a1 )
    return 3221225485LL;
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension
    || DeviceExtension[4] != 1953656900
    || DeviceExtension[5] != 2
    || !*((_BYTE *)DeviceExtension + 1143) )
  {
    return 3221225485LL;
  }
  WorkItem = IoAllocateWorkItem(a1);
  v8 = (char *)operator new(0xCuLL, 0x74727044u, PagedPool);
  if ( v8 )
  {
    *(_QWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 2) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( WorkItem )
  {
    if ( v8 )
    {
      *(_DWORD *)v8 = a2;
      *(_QWORD *)(v8 + 4) = a3;
      IoQueueWorkItemEx(
        WorkItem,
        (PIO_WORKITEM_ROUTINE_EX)DpiIndirectCbDisableRenderD3RequestsWorker,
        DelayedWorkQueue,
        v8);
      return 0LL;
    }
    IoFreeWorkItem(WorkItem);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v10 = WdLogNewEntry5_WdLowResource(v7);
  *(_QWORD *)(v10 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v10);
  return 3221225626LL;
}
