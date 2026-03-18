/*
 * XREFs of CcZeroEndOfLastPage @ 0x14005BC54
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14004D470 (FsRtlCreateSectionForDataScan.c)
 *     MmCreateSystemSection @ 0x140161354 (MmCreateSystemSection.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     NtCreateSection @ 0x1404C1930 (NtCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x1404F0B68 (MmCreateSpecialImageSection.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     FsRtlAcquireFileExclusive @ 0x1404C1530 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1404C1550 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject)
{
  char v1; // di
  PVOID FsContext; // rcx
  char v4; // al
  _DWORD v5[6]; // [rsp+30h] [rbp-18h] BYREF

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
    CcFlushCachePriv(FileObject->SectionObjectPointer, 0, 0, 0, 0, (__int64)v5);
    if ( !v5[0] )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v1 )
  {
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
