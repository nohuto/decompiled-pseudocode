/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceStateWorker @ 0x1C01E9390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoSetMonitorDriverInterfaceStateWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  __int64 v8; // rax
  PIRP v9; // rax
  __int64 v10; // rcx
  IRP *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  NTSTATUS Status; // edi
  NTSTATUS v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  KeInitializeEvent(&Object, NotificationEvent, 0);
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_1C0060B88, Executive, 0, 0, 0LL);
    v4 = (PDEVICE_OBJECT *)qword_1C0060BC0;
    if ( (__int64 *)qword_1C0060BC0 == &qword_1C0060BC0 )
    {
      v4 = 0LL;
      byte_1C0060B80 = 0;
    }
    else
    {
      if ( *(__int64 **)(qword_1C0060BC0 + 8) != &qword_1C0060BC0
        || (v5 = *(_QWORD *)qword_1C0060BC0, *(_QWORD *)(*(_QWORD *)qword_1C0060BC0 + 8LL) != qword_1C0060BC0) )
      {
        __fastfail(3u);
      }
      qword_1C0060BC0 = *(_QWORD *)qword_1C0060BC0;
      *(_QWORD *)(v5 + 8) = &qword_1C0060BC0;
    }
    KeReleaseMutex(&stru_1C0060B88, 0);
    if ( !v4 )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v4[2]);
    if ( !AttachedDeviceReference )
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v8);
      goto LABEL_20;
    }
    v9 = IoBuildDeviceIoControlRequest(
           0x232437u,
           AttachedDeviceReference,
           v4 + 3,
           1u,
           0LL,
           0,
           1u,
           &Object,
           &IoStatusBlock);
    v11 = v9;
    if ( v9 )
    {
      v9->IoStatus.Status = -1073741637;
      KeClearEvent(&Object);
      Status = IofCallDriver(AttachedDeviceReference, v11);
      if ( Status == 259 )
      {
        v15 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        v16 = v15;
        if ( v15 )
        {
          v17 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v17 + 24) = v16;
LABEL_18:
          WdLogEvent5_WdError(v17);
          goto LABEL_19;
        }
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v17 + 24) = Status;
        goto LABEL_18;
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v12 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v12);
    }
LABEL_19:
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_20:
    ObfDereferenceObject(v4[2]);
    ExFreePoolWithTag(v4, 0);
  }
  IoFreeWorkItem(IoWorkItem);
}
