/*
 * XREFs of DpiSetDeviceUsageType @ 0x1C01C6AC4
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetDeviceUsageType(PDEVICE_OBJECT DeviceObject, ULONG a2)
{
  PIRP v4; // rax
  __int64 v5; // rcx
  IRP *v6; // rdx
  __int64 v7; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v6 = v4;
  if ( v4 )
  {
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 22;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = 1;
    CurrentStackLocation[-1].Parameters.Create.Options = a2;
    LODWORD(DeviceObject) = IofCallDriver(DeviceObject, v6);
    if ( (_DWORD)DeviceObject == 259 )
    {
      v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DeviceObject = (PDEVICE_OBJECT)v9;
      if ( v9 )
      {
        v14 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v14 + 24) = DeviceObject;
        WdLogEvent5_WdError(v14);
      }
      else
      {
        DeviceObject = (PDEVICE_OBJECT)IoStatusBlock.Status;
        if ( IoStatusBlock.Status < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
          *(_QWORD *)(v15 + 24) = DeviceObject;
          WdLogEvent5_WdWarning(v15);
        }
      }
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v5);
    LODWORD(DeviceObject) = -1073741670;
    *(_QWORD *)(v7 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v7);
  }
  return (unsigned int)DeviceObject;
}
