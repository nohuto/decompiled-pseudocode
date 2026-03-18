/*
 * XREFs of IopRaiseHardError @ 0x140689A20
 * Callers:
 *     IopApcHardError @ 0x140688790 (IopApcHardError.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 *     ExRaiseHardError @ 0x14071ED80 (ExRaiseHardError.c)
 */

void __fastcall IopRaiseHardError(PIRP Irp, __int64 a2, char *a3)
{
  char v6; // r12
  UNICODE_STRING *PoolWithTagPriority; // rax
  UNICODE_STRING *v8; // rsi
  NTSTATUS v9; // edi
  _KPROCESS *Process; // rcx
  NTSTATUS Status; // r10d
  int v12; // r11d
  int v13; // r8d
  struct _LIST_ENTRY *Flink; // rax
  int v15; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v17; // [rsp+30h] [rbp-49h] BYREF
  unsigned int NumberOfBytes; // [rsp+34h] [rbp-45h] BYREF
  UNICODE_STRING NumberOfBytes_4; // [rsp+38h] [rbp-41h] BYREF
  $5BC46E0569261879018906DEC3127961 v20; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING *p_NumberOfBytes_4; // [rsp+78h] [rbp-1h] BYREF
  struct _LIST_ENTRY *v22; // [rsp+80h] [rbp+7h]
  struct _LIST_ENTRY *v23; // [rsp+88h] [rbp+Fh]

  NumberOfBytes = 0;
  v6 = 0;
  ObQueryNameStringMode(a3, 0LL, 0, &NumberOfBytes, 0);
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTagPriority(
                                              PagedPool,
                                              NumberOfBytes,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x20206F49u);
  v8 = PoolWithTagPriority;
  v9 = PoolWithTagPriority == 0LL ? 0xC000009A : 0;
  if ( !PoolWithTagPriority )
    goto LABEL_37;
  v9 = ObQueryNameStringMode(a3, (__int64)PoolWithTagPriority, NumberOfBytes, &v17, 0);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
LABEL_37:
    Irp->IoStatus.Status = v9;
LABEL_38:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_39;
  }
  if ( a2 && (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    NumberOfBytes_4.Buffer = (wchar_t *)(a2 + 32);
    NumberOfBytes_4.Length = *(_WORD *)(a2 + 6);
    NumberOfBytes_4.MaximumLength = 64;
  }
  else
  {
    RtlInitUnicodeString(&NumberOfBytes_4, 0LL);
  }
  Process = Irp->Tail.Overlay.Thread->Process;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(Process, 0, (__int64)&v20);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  if ( Status != -1073741806 )
  {
    if ( Status <= -1073741806 )
    {
LABEL_19:
      v12 = 0;
      v13 = 0;
      goto LABEL_21;
    }
    if ( Status <= -1073741804 )
    {
LABEL_18:
      p_NumberOfBytes_4 = v8;
      v12 = 2;
      v13 = 1;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v23 = 0LL;
      v22 = Flink;
      goto LABEL_21;
    }
    if ( Status != -1073741662 )
    {
      if ( Status == -1073741661 || Status == -1073741643 )
        goto LABEL_18;
      goto LABEL_19;
    }
  }
  v22 = (struct _LIST_ENTRY *)v8;
  p_NumberOfBytes_4 = &NumberOfBytes_4;
  v12 = 3;
  v13 = 3;
  v23 = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
LABEL_21:
  if ( ExReadyForErrors )
  {
    v15 = ExRaiseHardError(Status, v12, v13, (unsigned int)&p_NumberOfBytes_4, 8, (__int64)&v17);
  }
  else
  {
    v17 = 0;
    v15 = -1073741823;
  }
  if ( v6 )
    KiUnstackDetachProcess(&v20, 0LL);
  ExFreePoolWithTag(v8, 0);
  if ( v15 >= 0 && v17 == 9 )
  {
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))Irp->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[Irp->Tail.Overlay.CurrentStackLocation->MajorFunction])(
      Irp->Tail.Overlay.CurrentStackLocation->DeviceObject,
      Irp);
    return;
  }
  if ( v17 == 3 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 13 && CurrentStackLocation->MinorFunction == 1 )
      Irp->IoStatus.Information = 1LL;
    else
      Irp->IoStatus.Status = -1073741248;
  }
  if ( (Irp->Flags & 0x40) != 0 )
    goto LABEL_38;
LABEL_39:
  IofCompleteRequest(Irp, 1);
}
