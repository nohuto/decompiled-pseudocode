/*
 * XREFs of ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C0042360
 * Callers:
 *     ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C0012D00 (-DpiAcpiPowerStateCallback@@YAXPEAX00@Z.c)
 *     ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C00424D0 (-DpiAcpiEventCallback@@YAXPEAXK@Z.c)
 *     DpiAcpiDockEventCallback @ 0x1C01CBE90 (DpiAcpiDockEventCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DpiAcpiCallAcpiEventHandler(
        PDEVICE_OBJECT DeviceObject,
        enum _DXGK_EVENT_TYPE a2,
        unsigned int a3,
        void *a4)
{
  __int64 v5; // rbp
  unsigned int v8; // edi
  _DWORD *PoolWithTag; // rax
  __int64 v10; // rcx
  void *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _IO_WORKITEM *WorkItem; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  _OWORD v18[4]; // [rsp+20h] [rbp-68h] BYREF

  v5 = a3;
  memset(v18, 0, sizeof(v18));
  EtwActivityIdControl(3u, (LPGUID)((char *)v18 + 8));
  v8 = 0;
  *((_QWORD *)&v18[3] + 1) = MEMORY[0xFFFFF78000000014];
  DWORD2(v18[1]) = 4;
  LODWORD(v18[2]) = a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = a2;
    PoolWithTag[1] = v5;
    *((_QWORD *)PoolWithTag + 1) = a4;
    *((_OWORD *)PoolWithTag + 1) = v18[0];
    *((_OWORD *)PoolWithTag + 2) = v18[1];
    *((_OWORD *)PoolWithTag + 3) = v18[2];
    *((_OWORD *)PoolWithTag + 4) = v18[3];
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
