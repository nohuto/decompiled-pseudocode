/*
 * XREFs of CcZeroEndOfLastPage @ 0x140096990
 * Callers:
 *     MmCreateSystemSection @ 0x140034178 (MmCreateSystemSection.c)
 *     FsRtlCreateSectionForDataScan @ 0x14005E8F0 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     NtCreateSection @ 0x14050FCB0 (NtCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x140546050 (MmCreateSpecialImageSection.c)
 * Callees:
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     FsRtlAcquireFileExclusive @ 0x140510150 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject)
{
  char v2; // di
  PVOID FsContext; // rax
  char v4; // cl
  ULONG_PTR v5; // rsi
  unsigned __int8 v6; // bp
  unsigned __int32 v7; // eax
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( !KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink )
  {
    v2 = 1;
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
    FsRtlAcquireFileExclusive(FileObject);
  }
  FsContext = FileObject->FsContext;
  v4 = *((_BYTE *)FsContext + 4);
  if ( (v4 & 0x40) != 0 )
  {
    ExAcquireFastMutex(*((PFAST_MUTEX *)FsContext + 6));
    *((_BYTE *)FileObject->FsContext + 4) |= 0x20u;
    v5 = *((_QWORD *)FileObject->FsContext + 6);
    v6 = *(_BYTE *)(v5 + 48);
    *(_QWORD *)(v5 + 8) = 0LL;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)v5, 1, 0);
    if ( v7 )
      ExpReleaseFastMutexContended(v5, v7);
    __writecr8(v6);
    KeAbPostRelease(v5);
  }
  else
  {
    *((_BYTE *)FsContext + 4) = v4 | 0x20;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 6) & 4) != 0 )
  {
    CcFlushCachePriv(FileObject->SectionObjectPointer, 0, 0, 0, 0, (__int64)v8);
    if ( !v8[0] )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v2 )
  {
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
