/*
 * XREFs of ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C0032D18
 * Callers:
 *     ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C00141D0 (-DpiAcpiPowerStateCallback@@YAXPEAX00@Z.c)
 *     ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C0032EA0 (-DpiAcpiEventCallback@@YAXPEAXK@Z.c)
 *     DpiAcpiDockEventCallback @ 0x1C01E6270 (DpiAcpiDockEventCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DpiAcpiCallAcpiEventHandler(PDEVICE_OBJECT DeviceObject, unsigned int a2, unsigned int a3, void *a4)
{
  __int64 v5; // r14
  unsigned int v8; // edi
  GUID *PoolWithTag; // rax
  __int64 v10; // rcx
  GUID *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _IO_WORKITEM *WorkItem; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  GUID ActivityId[5]; // [rsp+20h] [rbp-60h] BYREF

  v5 = a3;
  memset(ActivityId, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
  v8 = 0;
  *(_QWORD *)&ActivityId[4].Data1 = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)ActivityId[1].Data4 = 4;
  LOBYTE(ActivityId[3].Data1) = -1;
  ActivityId[2].Data1 = a2;
  PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x74727044u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Data1 = a2;
    *(_DWORD *)&PoolWithTag->Data2 = v5;
    *(_QWORD *)PoolWithTag->Data4 = a4;
    PoolWithTag[1] = ActivityId[0];
    PoolWithTag[2] = ActivityId[1];
    PoolWithTag[3] = ActivityId[2];
    PoolWithTag[4] = ActivityId[3];
    *(_QWORD *)&PoolWithTag[5].Data1 = *(_QWORD *)&ActivityId[4].Data1;
    WorkItem = IoAllocateWorkItem(DeviceObject);
    if ( WorkItem )
    {
      v16 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v16 + 24) = v5;
      WdLogEvent5_WdEvent(v16);
      IoQueueWorkItemEx(WorkItem, DpiAcpiHandleAcpiEvent, DelayedWorkQueue, v11);
    }
    else
    {
      v8 = -1073741670;
      v15 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v15 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v15);
      ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    v8 = -1073741801;
    v12 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v12 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v12);
  }
  return v8;
}
