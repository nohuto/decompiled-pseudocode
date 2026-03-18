/*
 * XREFs of DpiQueryBusInterface @ 0x1C010FD8C
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C010F458 (DpiFdoInitializeFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiQueryBusInterface(PDEVICE_OBJECT DeviceObject, ULONG_PTR a2, USHORT a3, USHORT a4, __int64 a5)
{
  PIRP v9; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v9 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Object, &IoStatusBlock);
  if ( v9 )
  {
    CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a3;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a4;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
    v9->IoStatus.Status = -1073741637;
    LODWORD(DeviceObject) = IofCallDriver(DeviceObject, v9);
    if ( (_DWORD)DeviceObject == 259 )
    {
      v12 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      DeviceObject = (PDEVICE_OBJECT)v12;
      if ( v12 )
      {
        v15 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v15 + 24) = DeviceObject;
        WdLogEvent5_WdError(v15);
      }
      else
      {
        LODWORD(DeviceObject) = IoStatusBlock.Status;
      }
    }
  }
  else
  {
    LODWORD(DeviceObject) = -1073741670;
  }
  return (unsigned int)DeviceObject;
}
