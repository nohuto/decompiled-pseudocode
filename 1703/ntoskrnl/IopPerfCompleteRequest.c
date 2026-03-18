/*
 * XREFs of IopPerfCompleteRequest @ 0x1401F56E8
 * Callers:
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x140763120 (IovCompleteRequest.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x14003AE54 (IopFreeIrpExtension.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     IopIrpHasExtensionType @ 0x14012C50C (IopIrpHasExtensionType.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     IopProcessIoTracking @ 0x1401F5BB0 (IopProcessIoTracking.c)
 */

void __fastcall IopPerfCompleteRequest(PIRP Irp, unsigned __int8 a2)
{
  CHAR StackCount; // cl
  CHAR CurrentLocation; // dl
  PIO_COMPLETION_ROUTINE CompletionRoutine; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v8; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  signed __int32 v10; // esi
  NTSTATUS Status; // ecx
  PIRP v12; // [rsp+30h] [rbp-49h] BYREF
  signed __int32 v13; // [rsp+38h] [rbp-41h]
  struct _IO_STACK_LOCATION *v14; // [rsp+40h] [rbp-39h] BYREF
  PVOID Context; // [rsp+48h] [rbp-31h]
  PIO_COMPLETION_ROUTINE v16; // [rsp+50h] [rbp-29h]
  signed __int32 v17; // [rsp+58h] [rbp-21h]
  UCHAR Control; // [rsp+5Ch] [rbp-1Dh]
  _QWORD v19[2]; // [rsp+68h] [rbp-11h] BYREF
  signed __int32 v20; // [rsp+78h] [rbp-1h]
  _QWORD *v21; // [rsp+80h] [rbp+7h] BYREF
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  PIRP *v24; // [rsp+90h] [rbp+17h] BYREF
  int v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+9Ch] [rbp+23h]

  if ( Irp->Type == 6 )
  {
    StackCount = Irp->StackCount;
    CurrentLocation = Irp->CurrentLocation;
    if ( CurrentLocation <= (char)(StackCount + 1) )
    {
      CompletionRoutine = 0LL;
      CurrentStackLocation = 0LL;
      if ( CurrentLocation <= StackCount )
      {
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        if ( CurrentStackLocation->DeviceObject )
        {
          if ( (IopPerfStatus & 2) != 0 && IopIrpHasExtensionType((__int64)Irp, 1u) && !IopIrpHasExtensionType(v8, 4u) )
          {
            IopProcessIoTracking(
              MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 40LL),
              CurrentStackLocation->DeviceObject->DeviceType);
            IopFreeIrpExtension((__int64)Irp, 1, 1);
          }
          DriverObject = CurrentStackLocation->DeviceObject->DriverObject;
          if ( DriverObject && CurrentStackLocation->MajorFunction <= 0x1Bu )
            CompletionRoutine = (PIO_COMPLETION_ROUTINE)DriverObject->MajorFunction[CurrentStackLocation->MajorFunction];
        }
        else
        {
          CompletionRoutine = CurrentStackLocation->CompletionRoutine;
        }
      }
      if ( (IopPerfStatus & 1) != 0 )
      {
        v23 = 0;
        v19[0] = CompletionRoutine;
        v19[1] = Irp;
        v10 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
        v20 = v10;
        v21 = v19;
        v22 = 20;
        EtwTraceKernelEvent((int)&v21, 1, 0x20000010u, 308, 4200450);
        if ( !CurrentStackLocation )
        {
LABEL_24:
          IopfCompleteRequest(Irp, a2);
          v26 = 0;
          v24 = &v12;
          v12 = Irp;
          v13 = v10;
          v25 = 12;
          EtwTraceKernelEvent((int)&v24, 1, 0x20000010u, 309, 4200450);
          return;
        }
        v16 = 0LL;
        Status = Irp->IoStatus.Status;
        Context = CurrentStackLocation->Context;
        v14 = CurrentStackLocation;
        v17 = v10;
        Control = CurrentStackLocation->Control;
        if ( Status < 0 )
        {
          if ( (CurrentStackLocation->Control & 0x80u) != 0 )
            goto LABEL_21;
        }
        else if ( (CurrentStackLocation->Control & 0x40) != 0 )
        {
          goto LABEL_21;
        }
        if ( !Irp->Cancel || (CurrentStackLocation->Control & 0x20) == 0 )
        {
          CurrentStackLocation->Control |= 0xC0u;
          goto LABEL_23;
        }
LABEL_21:
        v16 = CurrentStackLocation->CompletionRoutine;
        Context = CurrentStackLocation->Context;
LABEL_23:
        CurrentStackLocation->CompletionRoutine = (PIO_COMPLETION_ROUTINE)IopPerfCompletionRoutine;
        CurrentStackLocation->Context = &v14;
        goto LABEL_24;
      }
    }
  }
  IopfCompleteRequest(Irp, a2);
}
