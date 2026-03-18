/*
 * XREFs of IoRetrievePriorityInfo @ 0x1400A5400
 * Callers:
 *     <none>
 * Callees:
 *     IoGetIoPriorityHint @ 0x1400A55F0 (IoGetIoPriorityHint.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 */

NTSTATUS __stdcall IoRetrievePriorityInfo(
        PIRP Irp,
        PFILE_OBJECT FileObject,
        PETHREAD Thread,
        PIO_PRIORITY_INFO PriorityInfo)
{
  int v4; // r14d
  int v5; // ebp
  _DWORD *FileObjectExtension; // rax
  _IO_PRIORITY_HINT IoPriorityThread; // edx
  unsigned int BasePriority; // eax
  unsigned int v11; // edx
  int v13; // edx
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *i; // rcx
  _IO_PRIORITY_HINT IoPriorityHint; // eax

  v4 = 0;
  v5 = 2;
  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( Irp && (Irp->Flags & 0xE0000) != 0 )
  {
    IoPriorityHint = IoGetIoPriorityHint(Irp);
LABEL_32:
    PriorityInfo->IoPriority = IoPriorityHint;
    goto LABEL_10;
  }
  if ( !FileObject )
  {
    if ( !Thread )
      goto LABEL_36;
    IoPriorityHint = (unsigned int)PsGetIoPriorityThread(Thread);
    goto LABEL_32;
  }
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    v13 = FileObjectExtension[20];
    if ( v13 )
    {
      IoPriorityThread = v13 - 1;
    }
    else
    {
      if ( !Thread )
        goto LABEL_36;
      IoPriorityThread = (unsigned int)PsGetIoPriorityThread(Thread);
    }
  }
  else
  {
    if ( !Thread )
    {
LABEL_36:
      *(_QWORD *)&PriorityInfo->ThreadPriority = -1LL;
      return 0;
    }
    IoPriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
    if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      IoPriorityThread = IoPriorityVeryLow;
    if ( (unsigned int)IoPriorityThread < IoPriorityNormal
      && Thread == KeGetCurrentThread()
      && Thread[1].Timer.DueTime.LowPart )
    {
      IoPriorityThread = IoPriorityNormal;
    }
  }
  PriorityInfo->IoPriority = IoPriorityThread;
LABEL_10:
  if ( !Thread )
    goto LABEL_36;
  if ( Thread->Priority >= 16 || !Thread->SchedulingGroup )
    goto LABEL_13;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulingGroup = Thread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    for ( i = (char *)SchedulingGroup + CurrentPrcb->ScbOffset; i; i = (char *)*((_QWORD *)i + 51) )
    {
      v4 = ((unsigned __int8)i[112] >> 3) & 1;
      if ( v4 )
        break;
    }
  }
  if ( CurrentIrql < 2u )
    __writecr8(CurrentIrql);
  if ( v4 )
    BasePriority = 1;
  else
LABEL_13:
    BasePriority = Thread->BasePriority;
  PriorityInfo->ThreadPriority = BasePriority;
  v11 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
  if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    if ( v11 < 2 )
      v5 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
    v11 = v5;
  }
  PriorityInfo->PagePriority = v11;
  return 0;
}
