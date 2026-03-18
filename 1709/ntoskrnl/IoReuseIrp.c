/*
 * XREFs of IoReuseIrp @ 0x1400B4070
 * Callers:
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 *     PopPrepareIoctl @ 0x1407071AC (PopPrepareIoctl.c)
 *     SmKmFileInfoCleanup @ 0x14073A200 (SmKmFileInfoCleanup.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwActivityIdControl @ 0x14010EE00 (EtwActivityIdControl.c)
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 *     IopIsActivityTracingEventEnabled @ 0x140127F78 (IopIsActivityTracingEventEnabled.c)
 *     IoSetActivityIdIrp @ 0x14014A2C0 (IoSetActivityIdIrp.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IovpLogStackTrace @ 0x1407A57A8 (IovpLogStackTrace.c)
 *     VfIoInitializeIrp @ 0x1407B0894 (VfIoInitializeIrp.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // r12
  CHAR StackCount; // bp
  UCHAR v6; // si
  USHORT Size; // r14
  __int64 v8; // rax
  signed __int8 AllocationFlags; // cl
  __int64 v10; // rdx
  __int64 v11; // r13
  USHORT v12; // di
  __int64 v13; // r8
  __int64 v14; // r9
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
  v6 = Irp->AllocationFlags & 0x6D;
  Size = Irp->Size;
  v8 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  AllocationFlags = Irp->AllocationFlags;
  if ( AllocationFlags >= 0 && v8 && (*(_BYTE *)(v8 + 2) & 1) != 0 )
  {
    v2 = 1;
    v15 = *(_OWORD *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
  }
  v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  if ( AllocationFlags < 0 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
    Irp->AllocationFlags = AllocationFlags & 0x7F;
  }
  else if ( v10 )
  {
    if ( (Irp->AllocationFlags & 0x80u) == 0 && (*(_BYTE *)(v10 + 2) & 0x20) != 0 )
      *(_QWORD *)(v10 + 40) = 0LL;
    *(_WORD *)(v10 + 2) = 0;
  }
  v11 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  v12 = *(&Irp->Size + 1);
  memset(Irp, 0, Size);
  Irp->Size = Size;
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->StackCount = StackCount;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  *(&Irp->Size + 1) = v12;
  Irp->AllocationFlags = v6;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 72 * StackCount);
  if ( v11 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v11;
    if ( v2 == 1 )
      IoSetActivityIdIrp(Irp, &v15);
    if ( (IopFunctionPointerMask & 4) != 0
      && (IopIrpExtensionStatus & 1) != 0
      && (!(unsigned __int8)IopIrpHasExtensionType(Irp, 0LL, v13, v14)
       || (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
        EtwWriteEx(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp, 0LL, 0, (LPCGUID)(v11 + 24), &ActivityId, 0, 0LL);
      IoSetActivityIdIrp(Irp, &ActivityId);
    }
  }
}
