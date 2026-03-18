/*
 * XREFs of DpIndicateConnectorChange @ 0x1C003CD30
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0010714 (DpiFdoHandleDisplayDetectControl.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C0012744 (DpiFdoQueueConnectionChangePackage.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009A1E0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpIndicateConnectorChange(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *DeviceExtension; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // edx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( DeviceObject
    && (DeviceExtension = DeviceObject->DeviceExtension) != 0LL
    && DeviceExtension[4] == 1953656900
    && DeviceExtension[5] == 2 )
  {
    v4 = DeviceExtension[839];
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(DeviceExtension + 839, v4 | 1, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 2) == 0 )
    {
      WorkItem = IoAllocateWorkItem(DeviceObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, DpiIndicateConnectorChangeWorkItem, DelayedWorkQueue, 0LL);
      }
      else
      {
        v8 = WdLogNewEntry5_WdLowResource(v7);
        *(_QWORD *)(v8 + 24) = 0LL;
        WdLogEvent5_WdLowResource(v8);
      }
    }
  }
  else
  {
    v2 = -1073741811;
    v9 = WdLogNewEntry5_WdError(DeviceObject, a2);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
  }
  return v2;
}
