/*
 * XREFs of IovCompleteRequest @ 0x140763120
 * Callers:
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     IopPerfCompleteRequest @ 0x1401F56E8 (IopPerfCompleteRequest.c)
 *     IovpLogStackTrace @ 0x140763A4C (IovpLogStackTrace.c)
 *     IovpCompleteRequest1 @ 0x14076DCC4 (IovpCompleteRequest1.c)
 */

void __fastcall IovCompleteRequest(PIRP Irp, unsigned __int8 a2)
{
  __int64 v4; // rdx
  PDRIVER_CANCEL CancelRoutine; // r8
  ULONG_PTR Status; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v8; // edx
  _QWORD v9[5]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v10[3]; // [rsp+58h] [rbp-21h] BYREF
  PIO_COMPLETION_ROUTINE CompletionRoutine; // [rsp+70h] [rbp-9h]
  __int128 v12; // [rsp+78h] [rbp-1h]
  __int128 v13; // [rsp+88h] [rbp+Fh]
  __int128 v14; // [rsp+98h] [rbp+1Fh]
  __int128 v15; // [rsp+A8h] [rbp+2Fh]
  PVOID Context; // [rsp+B8h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]

  IovpLogStackTrace(Irp);
  if ( !IovpDisabledWithoutReboot )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) || (v4 = 6LL, Irp->Type != 6) )
      KeBugCheckEx(0x44u, (ULONG_PTR)Irp, 0x436uLL, 0LL, 0LL);
    CancelRoutine = Irp->CancelRoutine;
    if ( CancelRoutine )
      KeBugCheckEx(0xC9u, 7uLL, (ULONG_PTR)CancelRoutine, (ULONG_PTR)Irp, 0LL);
    Status = Irp->IoStatus.Status;
    if ( (_DWORD)Status == 259 || (_DWORD)Status == -1 )
      KeBugCheckEx(0xC9u, 6uLL, Status, (ULONG_PTR)Irp, 0LL);
    if ( KeGetCurrentIrql() > 2u )
      KeBugCheckEx(0xC9u, 0xEuLL, KeGetCurrentIrql(), (ULONG_PTR)Irp, 0LL);
  }
  LOBYTE(v4) = a2;
  v9[4] = retaddr;
  IovpCompleteRequest1(Irp, v4, v9);
  if ( (!IovpDisabledWithoutReboot || v9[0]) && Irp->CurrentLocation <= Irp->StackCount )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v8 = Irp->IoStatus.Status;
    v10[2] = v9;
    v10[1] = CurrentStackLocation->Context;
    v10[0] = CurrentStackLocation;
    v12 = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    v13 = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    v14 = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota + 6);
    v15 = *(_OWORD *)&CurrentStackLocation->FileObject;
    Context = CurrentStackLocation->Context;
    if ( v8 < 0 )
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
      CompletionRoutine = 0LL;
      CurrentStackLocation->Control |= 0xE0u;
      goto LABEL_23;
    }
LABEL_21:
    CompletionRoutine = CurrentStackLocation->CompletionRoutine;
LABEL_23:
    CurrentStackLocation->CompletionRoutine = (PIO_COMPLETION_ROUTINE)IovpLocalCompletionRoutine;
    CurrentStackLocation->Context = v10;
  }
  if ( (IopFunctionPointerMask & 2) != 0 )
    IopPerfCompleteRequest(Irp, a2);
  else
    IopfCompleteRequest(Irp, a2);
}
