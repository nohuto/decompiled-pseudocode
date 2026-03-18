/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x1401300CC
 * Callers:
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x14012C59C (IoSynchronousPageWriteEx.c)
 *     FsRtlIsSystemPagingFile @ 0x1401300C0 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdx
  KIRQL v4; // si
  unsigned int v5; // ebx
  unsigned __int64 v6; // r8

  v2 = ExAcquireSpinLockShared(&dword_14036CE78);
  v3 = (_QWORD *)qword_14036CE70;
  v4 = v2;
  v5 = 0;
  while ( v3 )
  {
    v6 = *(v3 - 26);
    if ( a1 < v6 )
    {
      v3 = (_QWORD *)*v3;
    }
    else
    {
      if ( a1 <= v6 )
        break;
      v3 = (_QWORD *)v3[1];
    }
  }
  LOBYTE(v5) = v3 != 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036CE78);
  __writecr8(v4);
  return v5;
}
