/*
 * XREFs of IopCallDriverReference @ 0x1400610C0
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     IoCallDriverWithTracing @ 0x1400611F4 (IoCallDriverWithTracing.c)
 *     IoGetIoPriorityHint @ 0x140061250 (IoGetIoPriorityHint.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

__int64 __fastcall IopCallDriverReference(__int64 a1, IRP *a2, char a3, _QWORD *a4, int a5)
{
  __int64 v9; // rdx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  int v11; // r8d
  unsigned int v12; // ebx
  PETHREAD Thread; // rdx
  ULONG Flags; // eax

  if ( !a3 )
    ObfReferenceObjectWithTag(a4, 0x746C6644u);
  v9 = a4[26];
  if ( v9 && *(_DWORD *)(v9 + 80) )
  {
    a2->Flags &= 0xFFF1FFFF;
    a2->Flags |= *(_DWORD *)(v9 + 80) << 17;
  }
  else
  {
    a2->Flags = a2->Flags & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(KeGetCurrentThread()) + 1) << 17);
  }
  IoPriorityHint = IoGetIoPriorityHint(a2);
  v11 = IoPriorityHint;
  if ( !a2->RequestorMode )
  {
    if ( IoPriorityHint >= IoPriorityNormal )
      goto LABEL_7;
    Thread = a2->Tail.Overlay.Thread;
    if ( !Thread || (Thread->MiscFlags & 0x400) == 0 && (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) == 0 )
    {
      Flags = a2->Flags;
      v11 = 2;
      ++IoKernelIssuedIoBoostedCount;
      a2->Flags = Flags & 0xFFF1FFFF | 0x60000;
    }
  }
  if ( v11 < 2 )
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
LABEL_7:
  v12 = IoCallDriverWithTracing(a1, a2);
  if ( !a3 )
    ObDereferenceObjectDeferDeleteWithTag(a4, 0x746C6644u);
  return v12;
}
