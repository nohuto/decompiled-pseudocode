/*
 * XREFs of IopCallDriverReference @ 0x14004AD54
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x14004AA70 (PsGetBaseIoPriorityThread.c)
 *     IoCallDriverWithTracing @ 0x14004AEC4 (IoCallDriverWithTracing.c)
 *     IoGetIoPriorityHint @ 0x14004AF20 (IoGetIoPriorityHint.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

__int64 __fastcall IopCallDriverReference(__int64 a1, IRP *a2, char a3, _QWORD *a4, int a5)
{
  __int64 v9; // rdx
  int BaseIoPriorityThread; // edx
  struct _KTHREAD *v11; // r8
  IO_PRIORITY_HINT IoPriorityHint; // eax
  int v13; // r8d
  unsigned int v14; // ebx
  PETHREAD Thread; // rdx
  ULONG Flags; // eax

  if ( !a3 )
    ObfReferenceObjectWithTag(a4, 0x746C6644u);
  v9 = a4[26];
  if ( v9 && *(_DWORD *)(v9 + 72) )
  {
    a2->Flags &= 0xFFF1FFFF;
    a2->Flags |= *(_DWORD *)(v9 + 72) << 17;
  }
  else
  {
    BaseIoPriorityThread = PsGetBaseIoPriorityThread((__int64)KeGetCurrentThread());
    if ( BaseIoPriorityThread < 2 && v11 == KeGetCurrentThread() && v11[1].Timer.DueTime.LowPart )
      BaseIoPriorityThread = 2;
    a2->Flags = a2->Flags & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  }
  IoPriorityHint = IoGetIoPriorityHint(a2);
  v13 = IoPriorityHint;
  if ( !a2->RequestorMode )
  {
    if ( IoPriorityHint >= IoPriorityNormal )
      goto LABEL_8;
    Thread = a2->Tail.Overlay.Thread;
    if ( !Thread || (Thread->MiscFlags & 0x400) == 0 && (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) == 0 )
    {
      Flags = a2->Flags;
      v13 = 2;
      ++IoKernelIssuedIoBoostedCount;
      a2->Flags = Flags & 0xFFF1FFFF | 0x60000;
    }
  }
  if ( v13 < 2 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
        ++IoLowPriorityWriteOperationCount;
    }
    else
    {
      ++IoLowPriorityReadOperationCount;
    }
  }
LABEL_8:
  v14 = IoCallDriverWithTracing(a1, a2);
  if ( !a3 )
    ObDereferenceObjectDeferDeleteWithTag(a4, 0x746C6644u);
  return v14;
}
