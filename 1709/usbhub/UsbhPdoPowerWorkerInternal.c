/*
 * XREFs of UsbhPdoPowerWorkerInternal @ 0x1C001E220
 * Callers:
 *     UsbhPdoPower @ 0x1C001E2F0 (UsbhPdoPower.c)
 *     UsbhPdoPowerWorker @ 0x1C00470F0 (UsbhPdoPowerWorker.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhPdoPowerWorkerInternal(ULONG_PTR a1, IRP *a2)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char QuadPart; // r8
  unsigned __int8 MinorFunction; // r9
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  unsigned int Status; // edi

  if ( PdoExt(a1)[281] == 6 )
  {
    Status = -1073741130;
    a2->IoStatus.Status = -1073741130;
    goto LABEL_12;
  }
  v4 = PdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  QuadPart = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction )
  {
    if ( (unsigned __int8)(MinorFunction - 2) <= 1u )
    {
      QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
      if ( CurrentStackLocation->Parameters.Create.Options == 1 )
        QuadPart |= 0x80u;
    }
  }
  else
  {
    QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
  }
  v8 = ((unsigned __int8)_InterlockedExchangeAdd(v4 + 227, 1u) + 1) & 0xF;
  *((_BYTE *)v4 + v8 + 912) = MinorFunction;
  *((_BYTE *)v4 + v8 + 928) = QuadPart;
  v4[292] = MinorFunction;
  v9 = CurrentStackLocation->MinorFunction;
  if ( v9 > 4u )
  {
    Status = a2->IoStatus.Status;
LABEL_12:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  return (unsigned int)off_1C005BCC8[2 * v9](a1, (ULONG_PTR)a2);
}
