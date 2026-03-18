/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x140048B54
 * Callers:
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     FsRtlIsSystemPagingFile @ 0x1401443F0 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdx
  KIRQL v4; // si
  unsigned int v5; // ebx
  unsigned __int64 v6; // r8

  v2 = ExAcquireSpinLockShared(&dword_1403CC3B8);
  v3 = (_QWORD *)qword_1403CC3B0;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CC3B8);
  __writecr8(v4);
  return v5;
}
