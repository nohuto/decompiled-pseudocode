/*
 * XREFs of IoReuseIrp @ 0x14012C360
 * Callers:
 *     PopAllocateIrp @ 0x140146080 (PopAllocateIrp.c)
 *     PopPrepareIoctl @ 0x1405D8058 (PopPrepareIoctl.c)
 *     SmKmFileInfoCleanup @ 0x140701F04 (SmKmFileInfoCleanup.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     IopIrpHasExtensionType @ 0x14012C50C (IopIrpHasExtensionType.c)
 *     IopIsActivityTracingEventEnabled @ 0x140135F68 (IopIsActivityTracingEventEnabled.c)
 *     IoSetActivityIdIrp @ 0x1401535C0 (IoSetActivityIdIrp.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IovpLogStackTrace @ 0x140763A4C (IovpLogStackTrace.c)
 *     VfIoInitializeIrp @ 0x14076EA74 (VfIoInitializeIrp.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // r12
  CHAR StackCount; // bp
  UCHAR v6; // si
  USHORT Size; // r14
  __int64 v8; // rax
  signed __int8 AllocationFlags; // cl
  __int64 v10; // r13
  USHORT v11; // di
  __int64 v12; // r9
  __int64 v13; // r10
  char HasExtensionType; // al
  __int128 v15; // [rsp+40h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0;
  v15 = 0uLL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfIoInitializeIrp(Irp, retaddr, 1);
    IovpLogStackTrace(Irp);
  }
  StackCount = Irp->StackCount;
  v6 = Irp->AllocationFlags & 0x2D;
  Size = Irp->Size;
  v8 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  AllocationFlags = Irp->AllocationFlags;
  if ( AllocationFlags >= 0 && v8 && (*(_BYTE *)(v8 + 2) & 1) != 0 )
  {
    v2 = 1;
    v15 = *(_OWORD *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
  }
  if ( AllocationFlags < 0 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
    Irp->AllocationFlags = AllocationFlags & 0x7F;
  }
  else if ( *((_QWORD *)&Irp->Tail.CompletionKey + 10) )
  {
    if ( (unsigned __int8)IopIrpHasExtensionType(Irp, 5LL) )
      *(_QWORD *)(v12 + 40) = v13;
    *(_WORD *)(v12 + 2) = v13;
  }
  v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  v11 = *(&Irp->Size + 1);
  memset(Irp, 0, Size);
  Irp->Size = Size;
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->StackCount = StackCount;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  *(&Irp->Size + 1) = v11;
  Irp->AllocationFlags = v6;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 72 * StackCount);
  if ( v10 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v10;
    if ( v2 == 1 )
      IoSetActivityIdIrp(Irp, &v15);
    if ( (IopIrpExtensionStatus & 1) != 0 && (IopFunctionPointerMask & 4) != 0 )
    {
      HasExtensionType = IopIrpHasExtensionType(Irp, 0LL);
      if ( !HasExtensionType || (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
          EtwWriteEx(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp, 0LL, 0, (LPCGUID)(v10 + 24), &ActivityId, 0, 0LL);
        IoSetActivityIdIrp(Irp, &ActivityId);
      }
    }
  }
}
