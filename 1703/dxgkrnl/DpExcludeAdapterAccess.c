/*
 * XREFs of DpExcludeAdapterAccess @ 0x1C01C1850
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0174928 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpExcludeAdapterAccess(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *PoolWithTag; // r14
  PIO_WORKITEM WorkItem; // rbp
  int v8; // ebx
  PVOID DeviceExtension; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF

  PoolWithTag = 0LL;
  WorkItem = 0LL;
  v8 = a2;
  if ( !DeviceObject || !a3 )
  {
    LODWORD(v12) = -1073741811;
    v27 = WdLogNewEntry5_WdError(DeviceObject, a2);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
LABEL_32:
    if ( (int)v12 >= 0 )
      return (unsigned int)v12;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_35;
  }
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension
    || *((_DWORD *)DeviceExtension + 4) != 1953656900
    || (a2 = 2LL, *((_DWORD *)DeviceExtension + 5) != 2) )
  {
    v11 = -1073741811LL;
    goto LABEL_29;
  }
  if ( KeGetCurrentIrql() )
  {
    v11 = -1073741811LL;
    LODWORD(v12) = -1073741811;
    if ( *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x2003u )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(DeviceObject, 2LL, a3);
      v13[3] = 275LL;
      v13[4] = 21LL;
      v13[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    goto LABEL_9;
  }
  if ( ((*((_DWORD *)DeviceExtension + 946) - 1) & 0xFFFFFFFB) == 0 )
  {
    v11 = -1073741661LL;
LABEL_29:
    LODWORD(v12) = v11;
LABEL_9:
    v14 = WdLogNewEntry5_WdError(DeviceObject, a2);
    *(_QWORD *)(v14 + 24) = v11;
LABEL_10:
    WdLogEvent5_WdError(v14);
    return (unsigned int)v12;
  }
  v15 = v8 & 2;
  if ( (v8 & 2) != 0 && ((v8 & 1) != 0 || !DxgkIsAdapterCoreSyncAcquired(*((DXGADAPTER **)DeviceExtension + 463), 2LL)) )
  {
    LODWORD(v12) = -1073741637;
    v14 = WdLogNewEntry5_WdError(DeviceObject, a2);
    *(_QWORD *)(v14 + 24) = -1073741637LL;
    goto LABEL_10;
  }
  if ( (v8 & 4) != 0 && (!*((_QWORD *)DeviceExtension + 344) || !*((_QWORD *)DeviceExtension + 345)) )
  {
    LODWORD(v12) = -1073741637;
    v16 = WdLogNewEntry5_WdWarning(DeviceObject, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = DeviceExtension;
    WdLogEvent5_WdWarning(v16);
    return (unsigned int)v12;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  if ( !WorkItem )
  {
    LODWORD(v12) = -1073741670;
    v18 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v18 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v18);
    return (unsigned int)v12;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *PoolWithTag = a3;
    PoolWithTag[1] = a4;
    *((_DWORD *)PoolWithTag + 4) = v8;
    PoolWithTag[3] = (unsigned __int64)&Event & -(__int64)(v15 != 0);
    memset(PoolWithTag + 4, 0, 0x40uLL);
    EtwActivityIdControl(3u, (LPGUID)(PoolWithTag + 5));
    PoolWithTag[11] = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)PoolWithTag + 14) = 13;
    v21 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, WorkItem, File, 1u, 0x20u);
    v12 = v21;
    if ( v21 >= 0 )
    {
      IoQueueWorkItemEx(WorkItem, DpiFdoExcludeAdapterAccess, DelayedWorkQueue, PoolWithTag);
      if ( v15 )
        LODWORD(v12) = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = v12;
      WdLogEvent5_WdWarning(v26);
    }
    goto LABEL_32;
  }
  LODWORD(v12) = -1073741801;
  v20 = WdLogNewEntry5_WdLowResource(v19);
  *(_QWORD *)(v20 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v20);
LABEL_35:
  if ( WorkItem )
    IoFreeWorkItem(WorkItem);
  return (unsigned int)v12;
}
