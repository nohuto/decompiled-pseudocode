/*
 * XREFs of UsbhPdoPowerWorkerInternal @ 0x1C0020D08
 * Callers:
 *     UsbhPdoPower @ 0x1C0020CD0 (UsbhPdoPower.c)
 *     UsbhPdoPowerWorker @ 0x1C0046340 (UsbhPdoPowerWorker.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhPdoPowerWorkerInternal(ULONG_PTR a1, IRP *a2)
{
  __int64 v4; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  char IoControlCode; // r9
  unsigned __int8 MinorFunction; // r10
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  unsigned int Status; // ebx

  if ( PdoExt(a1)[281] == 6 )
  {
    Status = -1073741130;
    a2->IoStatus.Status = -1073741130;
    goto LABEL_15;
  }
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, v4);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  IoControlCode = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction )
  {
    if ( (unsigned __int8)(MinorFunction - 2) <= 1u )
    {
      IoControlCode = CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode;
      if ( CurrentStackLocation->Parameters.Create.Options == 1 )
        IoControlCode |= 0x80u;
    }
  }
  else
  {
    IoControlCode = CurrentStackLocation->Parameters.SetLock.Lock;
  }
  v8 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 908), 1u) + 1) & 0xF;
  *(_BYTE *)(v8 + v4 + 912) = MinorFunction;
  *(_BYTE *)(v8 + v4 + 928) = IoControlCode;
  *(_DWORD *)(v4 + 1168) = MinorFunction;
  v9 = CurrentStackLocation->MinorFunction;
  if ( v9 > 4u )
  {
    Status = a2->IoStatus.Status;
LABEL_15:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  return (unsigned int)off_1C005AD08[2 * v9](a1, (ULONG_PTR)a2);
}
