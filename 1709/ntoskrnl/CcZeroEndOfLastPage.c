/*
 * XREFs of CcZeroEndOfLastPage @ 0x1400675C8
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1400B7580 (FsRtlCreateSectionForDataScan.c)
 *     MmCreateSystemSection @ 0x1400F9864 (MmCreateSystemSection.c)
 *     NtCreateSection @ 0x14049C090 (NtCreateSection.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 *     MmCreateSpecialImageSection @ 0x14053A36C (MmCreateSpecialImageSection.c)
 * Callees:
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 *     FsRtlAcquireFileExclusive @ 0x14049C410 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject)
{
  char v1; // di
  PVOID FsContext; // rcx
  char v4; // al
  int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( !KeGetCurrentThread()[1].TrapFrame )
  {
    v1 = 1;
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    FsRtlAcquireFileExclusive(FileObject);
  }
  FsContext = FileObject->FsContext;
  v4 = *((_BYTE *)FsContext + 4);
  if ( (v4 & 0x40) != 0 )
  {
    ExAcquireFastMutex(*((PFAST_MUTEX *)FsContext + 6));
    *((_BYTE *)FileObject->FsContext + 4) |= 0x20u;
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)FileObject->FsContext + 6));
  }
  else
  {
    *((_BYTE *)FsContext + 4) = v4 | 0x20;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 6) & 4) != 0 )
  {
    CcFlushCachePriv((__int64)FileObject->SectionObjectPointer, 0LL, 0, 0LL, 0, v5);
    if ( !v5[0] )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v1 )
  {
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
