/*
 * XREFs of CcCopyWriteWontFlush @ 0x1400AB0D0
 * Callers:
 *     FsRtlCopyWrite @ 0x140714110 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCanIWriteStream @ 0x140133A34 (CcCanIWriteStream.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  ULONG Flags; // r9d
  struct _KTHREAD *CurrentThread; // r11
  unsigned int v5; // eax

  if ( Length >= 0x1000000 )
    return 0;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v5 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v5 = 0;
  return (v5 < 2 && CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart || v5)
      && ((Flags & 0x1000000) == 0
       || (unsigned __int8)CcCanIWriteStream(*((_QWORD *)PspSystemPartition + 1), (_DWORD)FileObject, Length, 0, 0));
}
