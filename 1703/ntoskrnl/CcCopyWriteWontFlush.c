/*
 * XREFs of CcCopyWriteWontFlush @ 0x1400138E0
 * Callers:
 *     FsRtlCopyWrite @ 0x140684570 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCanIWriteStream @ 0x1400AE444 (CcCanIWriteStream.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  ULONG Flags; // r9d
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v6; // eax

  if ( Length >= 0x1000000 )
    return 0;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v6 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v6 = 0;
  return (v6 < 2 && CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart || v6)
      && ((Flags & 0x1000000) == 0 || (unsigned __int8)CcCanIWriteStream(FileObject, Length, 0LL, 0LL));
}
