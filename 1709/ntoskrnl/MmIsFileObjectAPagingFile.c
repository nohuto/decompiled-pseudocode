/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x140064CF0
 * Callers:
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 *     FsRtlIsSystemPagingFile @ 0x1401E8A60 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned int v2; // edi
  KIRQL v3; // si
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx

  v2 = 0;
  v3 = ExAcquireSpinLockShared(&dword_140389138);
  v4 = (_QWORD *)qword_140389130;
  if ( qword_140389130 )
  {
    do
    {
      v5 = *(v4 - 26);
      if ( a1 < v5 )
      {
        v4 = (_QWORD *)*v4;
      }
      else
      {
        if ( a1 <= v5 )
        {
          v2 = 1;
          break;
        }
        v4 = (_QWORD *)v4[1];
      }
    }
    while ( v4 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140389138);
  __writecr8(v3);
  return v2;
}
