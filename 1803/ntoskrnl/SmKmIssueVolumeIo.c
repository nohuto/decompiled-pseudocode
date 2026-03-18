/*
 * XREFs of SmKmIssueVolumeIo @ 0x1402A73DC
 * Callers:
 *     SmKmIssueIo @ 0x1402A7374 (SmKmIssueIo.c)
 * Callees:
 *     IoAllocateIrp @ 0x1400075E0 (IoAllocateIrp.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400948D0 (MmBuildMdlForNonPagedPool.c)
 *     MmMdlPageContentsState @ 0x1400BA570 (MmMdlPageContentsState.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 */

__int64 __fastcall SmKmIssueVolumeIo(__int64 a1, __int64 a2, LARGE_INTEGER *a3, IO_COMPLETION_ROUTINE *a4, void *a5)
{
  struct _DEVICE_OBJECT *v5; // rbp
  IRP *Irp; // rbx
  struct _MDL *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG v15; // r8d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  struct _IO_STACK_LOCATION *v17; // r8

  v5 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  if ( (*(_QWORD *)a2 & 1) != 0 )
  {
    v12 = *(struct _MDL **)(a2 + 8);
    Irp = (IRP *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  else
  {
    Irp = IoAllocateIrp(v5->StackSize, 0);
    if ( !Irp )
      return 3221225626LL;
    v12 = *(struct _MDL **)a2;
    v13 = *(_QWORD *)(a2 + 8);
    v14 = *(unsigned int *)(a2 + 16);
    v12->Next = 0LL;
    v12->MdlFlags = 0;
    v12->ByteCount = v14;
    v12->StartVa = (PVOID)(v13 & 0xFFFFFFFFFFFFF000uLL);
    v12->Size = 8 * ((((unsigned __int64)(v13 & 0xFFF) + v14 + 4095) >> 12) + 6);
    v12->ByteOffset = v13 & 0xFFF;
    MmBuildMdlForNonPagedPool(v12);
    MmMdlPageContentsState((__int64)v12, 1u);
  }
  v15 = *(_DWORD *)(a2 + 16);
  Irp->MdlAddress = v12;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->UserIosb = &Irp->IoStatus;
  Irp->RequestorMode = 0;
  Irp->Tail.Overlay.OriginalFileObject = *(PFILE_OBJECT *)(a1 + 8);
  CurrentStackLocation[-1].MajorFunction = 4 - ((*(_DWORD *)(a2 + 32) & 1) != 0);
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Parameters.Read.Length = v15;
  CurrentStackLocation[-1].Parameters.Create.Options = 1397572723;
  v17 = Irp->Tail.Overlay.CurrentStackLocation;
  v17[-1].CompletionRoutine = a4;
  v17[-1].Context = a5;
  v17[-1].Control = -32;
  IofCallDriver(v5, Irp);
  return 259LL;
}
