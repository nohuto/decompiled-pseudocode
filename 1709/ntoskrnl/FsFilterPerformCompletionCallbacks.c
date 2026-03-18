/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x140067170
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1400EF610 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400EFF28 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14049C600 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x1406B0754 (FsRtlQueryOpen.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsFilterPerformCompletionCallbacks(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8

  if ( *(_WORD *)(a1 + 74) )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 80) + 32LL * *(unsigned __int16 *)(a1 + 74);
      if ( *(_BYTE *)(a1 + 4) == 0xF9 )
        *(_DWORD *)(a1 + 52) = 0;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v4 - 32);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(v4 - 24);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v4 - 8))(a1, a2, *(_QWORD *)(v4 - 16));
      if ( *(_BYTE *)(a1 + 4) == 0xF9 )
        a2 = *(_DWORD *)(a1 + 52);
    }
    while ( (*(_WORD *)(a1 + 74))-- != 1 );
  }
  return a2;
}
