/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceStateWorker @ 0x1C01CEF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoSetMonitorDriverInterfaceStateWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  __int64 v9; // rax
  PIRP v10; // rax
  __int64 v11; // rcx
  IRP *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  NTSTATUS Status; // edi
  NTSTATUS v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  KeInitializeEvent(&Object, NotificationEvent, 0);
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_1C006FD08, Executive, 0, 0, 0LL);
    v4 = (PDEVICE_OBJECT *)qword_1C006FD40;
    if ( (__int64 *)qword_1C006FD40 == &qword_1C006FD40 )
    {
      v4 = 0LL;
      byte_1C006FD00 = 0;
    }
    else
    {
      v5 = *(_QWORD *)qword_1C006FD40;
      if ( *(__int64 **)(qword_1C006FD40 + 8) != &qword_1C006FD40 || *(_QWORD *)(v5 + 8) != qword_1C006FD40 )
        __fastfail(3u);
      qword_1C006FD40 = *(_QWORD *)qword_1C006FD40;
      *(_QWORD *)(v5 + 8) = &qword_1C006FD40;
    }
    KeReleaseMutex(&stru_1C006FD08, 0);
    if ( !v4 )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v4[2]);
    if ( !AttachedDeviceReference )
    {
      v9 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v9 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v9);
      goto LABEL_20;
    }
    v10 = IoBuildDeviceIoControlRequest(
            0x232437u,
            AttachedDeviceReference,
            v4 + 3,
            1u,
            0LL,
            0,
            1u,
            &Object,
            &IoStatusBlock);
    v12 = v10;
    if ( v10 )
    {
      v10->IoStatus.Status = -1073741637;
      KeClearEvent(&Object);
      Status = IofCallDriver(AttachedDeviceReference, v12);
      if ( Status == 259 )
      {
        v17 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        v18 = v17;
        if ( v17 )
        {
          v19 = WdLogNewEntry5_WdError(v15, v14);
          *(_QWORD *)(v19 + 24) = v18;
LABEL_18:
          WdLogEvent5_WdError(v19);
          goto LABEL_19;
        }
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v19 + 24) = Status;
        goto LABEL_18;
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v13 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v13);
    }
LABEL_19:
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_20:
    ObfDereferenceObject(v4[2]);
    ExFreePoolWithTag(v4, 0);
  }
  IoFreeWorkItem(IoWorkItem);
}
